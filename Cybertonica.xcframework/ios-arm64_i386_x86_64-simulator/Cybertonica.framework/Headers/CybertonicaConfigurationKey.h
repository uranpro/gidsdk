//
//  CybertonicaConfigurationKey.h
//  Cybertonica
//
//  Created by Emanuel Tesar on 11/6/17.
//  Copyright © 2017 Cybertonica. All rights reserved.
//

#ifndef CybertonicaConfigurationKey_h
#define CybertonicaConfigurationKey_h

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, CybertonicaConfigurationKey) {
    API_USER_NAME = 0,
    TID,
    APPLICATION_ID,
    VERSION,
    ENV,
    
    SERVER_BASE_URL,
    SERVER_FINGERPRINT_SUFFIX,
    SERVER_TRACKING_SUFFIX,
    SERVER_ERROR_SUFFIX,
    
    ACTIVE_PROBE_INTERVAL,
    INACTIVE_PROBE_INTERVAL,
    ACTIVE_REQUEST_PERIOD,
    INACTIVE_REQUEST_PERIOD,
    
    RESEND_DELAY,
    QUEUE_LIMIT,
    SENSORS_INTERVAL,
    
    DEBUG_LOG,
    LOG_SENT_DATA,
    
    CYBERTONICA_CONFIGURATION_KEY_COUNT // this must be last
};


#endif /* CybertonicaConfigurationKey_h */
