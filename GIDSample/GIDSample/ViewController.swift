//
//  ViewController.swift
//  GIDSample
//

import UIKit
import GIDSDK

class ViewController: UIViewController {
    
    // MARK: - Properties
    
    private var codeVerifier: String?
    private var otpSID: String?
    private var phone: String?
    private var timer: Timer?
    private var seconds = 60

    // MARK: - UI Components
    
    @IBOutlet private weak var phoneTextField: UITextField!
    @IBOutlet private weak var codeTextField: UITextField!
    @IBOutlet private weak var jwtTokenLabel: UILabel!
    @IBOutlet private weak var oauthTokenLabel: UILabel!
    @IBOutlet private weak var clearButton: UIButton!
    @IBOutlet private weak var resendCodeButton: UIButton!
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
    }
    
    // MARK: - Actions
    
    @IBAction func sendAction(_ sender: UIButton) {
        guard codeTextField.isHidden else {
            sendCode()
            return
        }
        sendPhone()
    }
    
    @IBAction func clearAction(_ sender: UIButton) {
        oauthTokenLabel.text = nil
        jwtTokenLabel.text = nil
        phoneTextField.text = nil
        codeTextField.text = nil
        phoneTextField.isHidden = false
        resendCodeButton.isHidden = true
        clearButton.isHidden = true
        codeTextField.isHidden = true
    }
    
    @IBAction func resendCodeAction(_ sender: UIButton) {
        sendPhone()
    }
    
    // MARK: - Private Methods
    
    private func sendPhone() {
        guard let phone = phoneTextField.text,
              let codeVerifier = try? GIDPKCE.createVerifier(),
              let codeChallenge = try? GIDPKCE.challenge(for: codeVerifier) else { return }
        
        GIDSDK.shared.getOTP(codeChallenge: codeChallenge, phone: phone) { result in
            switch result {
            case .success(let data):
                self.resendCodeButton.isHidden = false
                self.resendCodeButton.isEnabled = false
                self.codeTextField.isHidden = false
                self.phoneTextField.isHidden = true
                self.codeVerifier = codeVerifier
                self.otpSID = data.otpSID
                self.seconds = data.waintSeconds
                self.phone = phone
                self.startTimer()
            case .failure(let error):
                print(error)
            }
        }
    }
    
    private func sendCode() {
        guard let code = codeTextField.text,
              let phone = phone,
              let codeVerifier = codeVerifier,
              let otpSID = otpSID else { return }
        
        GIDSDK.shared.auth(otpSID: otpSID, otp: code, phone: phone, scope: [.openid, .profile], codeVerifier: codeVerifier) { result in
            switch result {
            case .success(let data):
                self.clearButton.isHidden = false
                self.resendCodeButton.isEnabled = false
                self.resendCodeButton.isHidden = true
                self.jwtTokenLabel.text =  "jwtToken: " + data.jwtToken
                self.oauthTokenLabel.text =  "oauthToken: " + data.oauthToken
            case .failure(let error):
                print(error)
            }
        }
    }
    
    private func startTimer() {
        guard timer == nil else { return }
        timer = Timer(fire: Date(), interval: 1, repeats: true, block: { _ in
            self.seconds -= 1
            let stringSeconds = String(format: "%02d", self.seconds)
            
            UIView.animate(withDuration: 0, animations: {
                self.resendCodeButton.setTitle("Отправить код повторно через 0:\(stringSeconds)", for: .normal)
            },
                           completion: { _ in
                guard self.seconds == 0 else { return }
                self.stopTimer()
            })
        })
        guard let timer = timer else { return }
        RunLoop.current.add(timer, forMode: .common)
    }
    
    private func stopTimer() {
        resendCodeButton.isEnabled = true
        
        guard let timer = timer else { return }
        timer.invalidate()
        self.timer = nil
        
        resendCodeButton.setTitle("Отправить код повторно", for: .normal)
    }
    
}
