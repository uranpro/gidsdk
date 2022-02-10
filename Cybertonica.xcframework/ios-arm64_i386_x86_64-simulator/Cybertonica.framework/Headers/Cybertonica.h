//
//  Cybertonica.h
//  Cybertonica
//
//  Created by Emanuel Tesar on 10/12/17.
//  Copyright © 2017 Cybertonica. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for Cybertonica.
FOUNDATION_EXPORT double CybertonicaVersionNumber;

//! Project version string for Cybertonica.
FOUNDATION_EXPORT const unsigned char CybertonicaVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <Cybertonica/PublicHeader.h>
#import "DataSupplierType.h"
#import "CybertonicaConfigurationKey.h"

typedef void(^CybertonicaSendingResultListener)(int statusCode, id _Nullable error);

@interface Cybertonica : NSObject

- (Cybertonica* _Nonnull)initWithNumberOfIgnoredSuppliers:(int)ignored andSuppliers:(enum DataSupplierType)firstIgnored, ...;

- (Cybertonica* _Nonnull)init;

- (void)startWithApiUser:(NSString* _Nonnull)apiUser;

- (void)stop;

- (void)setProperty:(enum CybertonicaConfigurationKey)key withValue:(NSString* _Nonnull)value;

- (NSString* _Nonnull)getProperty:(CybertonicaConfigurationKey)key;

- (void)setUserId:(NSString*_Nonnull)value;

- (NSString* _Nullable)getUserId;

- (void)setExtraField:(NSString* _Nonnull)key withValue:(NSString* _Nonnull)value;

- (void)ignoreSupplier:(enum DataSupplierType)supplier;

- (void)forceFingerprintRequest;

- (void)forceTrackingRequest;

- (void)sendErrorRequest:(NSError*_Nonnull)error;

- (void)sendExceptionRequest:(NSException* _Nonnull)exception;

- (NSDictionary* _Nullable)obtainLastFingerprint;

- (NSDictionary* _Nullable)obtainLastTracking;

- (void)addFingerprintSendingListener:(CybertonicaSendingResultListener _Nonnull)callback;

@end
