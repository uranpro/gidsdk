#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class KMKInternalKfpMobileKit, KMKInternalKfpMobileKitConfigWrapper, KMKKfpActivateResult, KMKIosBuildConfig, KMKKfpResultKfpError, KMKKotlinEnumCompanion, KMKKotlinEnum<E>, KMKKfpLoginResult, KMKKotlinArray<T>, KMKKfpMobileKit, KMKKfpResult, KMKKfpResultAnalyzeEnvironmentEventResult, KMKKfpResultAnalyzeEnvironmentEventResultAlreadyAnalyze, KMKKfpResultAnalyzeEnvironmentEventResultSuccess, KMKKfpResultInitComplete, KMKPacket, KMKKfpResultPacketDelivered, KMKKfpResultPacketNotDelivered, KMKKfpResultSendGeolocationEventResult, KMKKfpResultSendGeolocationEventResultNotEnabled, KMKKfpResultSendGeolocationEventResultResendAfterNetworkError, KMKKfpResultSendGeolocationEventResultSuccess, KMKKfpResultSendLoginEventResult, KMKKfpResultSendLoginEventResultNotEnabled, KMKKfpResultSendLoginEventResultResendAfterNetworkError, KMKKfpResultSendLoginEventResultSuccess, KMKKfpResultSendLoginEventResultUserIdInvalidFormat, KMKKfpResultSendLoginEventResultUserNameInvalidFormat, KMKKfpResultSendLogoutEventResult, KMKKfpResultSendLogoutEventResultNotEnabled, KMKKfpResultSendLogoutEventResultResendAfterNetworkError, KMKKfpResultSendLogoutEventResultSuccess, KMKKfpResultSendSessionIdEventResult, KMKKfpResultSendSessionIdEventResultNotEnabled, KMKKfpResultSendSessionIdEventResultResendAfterNetworkError, KMKKfpResultSendSessionIdEventResultSessionIdInvalidFormat, KMKKfpResultSendSessionIdEventResultSuccess, KMKKfpResultSendUiNavigationEventResult, KMKKfpResultSendUiNavigationEventResultNavigationPointInvalidFormatError, KMKKfpResultSendUiNavigationEventResultNotEnabled, KMKKfpResultSendUiNavigationEventResultResendAfterNetworkError, KMKKfpResultSendUiNavigationEventResultSuccess, KMKValueChecker, KMKConfigJsonKeys, KMKExternalConfig, KMKExternalConfigModelCompanion, KMKExternalConfigModel, KMKPacketCacheQueries, KMKPacketCacheCompanion, KMKBooleanFromStringSerializer, KMKConfig, KMKDurationNullableSerializer, KMKDurationSerializer, KMKExternalConfigCompanion, KMKIntFromStringSerializer, KMKInvertBooleanFromStringSerializer, KMKInvertBooleanSerializer, KMKJwsDeviceTagModelCompanion, KMKJwsDeviceTagModel, KMKEventPriority, KMKEventTypeCompanion, KMKEventType, KMKAndroidPropertiesResult, KMKAndroidPropertiesResultAlreadyInit, KMKAndroidPropertiesResultAlreadySent, KMKAndroidPropertiesResultInit, KMKAndroidPropertiesResultNotEnabled, KMKAndroidPropertiesResultResendAfterNetworkError, KMKAndroidPropertiesResultSuccess, KMKKavSdkResultFailureAlreadyInit, KMKKavSdkResultFailure, KMKKavSdkResultFailureAntivirusError, KMKKavSdkResultFailureInitSdkError, KMKKavSdkResultFailureLicenseError, KMKKavSdkResultFailureNotEnabled, KMKKavSdkResultFailureNotSupported, KMKKfpResultKfpSuccess, KMKKavSdkResultSuccess, KMKApplicationInfoResult, KMKApplicationInfoResultAlreadyInit, KMKApplicationInfoResultAlreadySent, KMKApplicationInfoResultInit, KMKApplicationInfoResultNotEnabled, KMKApplicationInfoResultResendAfterNetworkError, KMKApplicationInfoResultSuccess, KMKApplicationScanInfoCompanion, KMKApplicationScanInfo, KMKAppSignatureResult, KMKAppSignatureResultAlreadyInit, KMKAppSignatureResultAlreadySent, KMKAppSignatureResultInit, KMKAppSignatureResultNotEnabled, KMKAppSignatureResultResendAfterNetworkError, KMKAppSignatureResultSuccess, KMKBiometricsResult, KMKBiometricsResultAlreadyInit, KMKBiometricsResultInit, KMKBiometricsResultNotEnabled, KMKBiometricsResultNotSupported, KMKBiometricsResultResendAfterNetworkError, KMKBiometricsResultSuccess, KMKCallInfoResult, KMKCallInfoResultAlreadyInit, KMKCallInfoResultFailure, KMKCallInfoResultFailurePermissionDenied, KMKCallInfoResultInit, KMKCallInfoResultNotEnabled, KMKCallInfoResultNotSupported, KMKCallInfoResultResendAfterNetworkError, KMKCallInfoResultSuccess, KMKConfigEventResult, KMKConfigEventResultAlreadyInit, KMKConfigEventResultInit, KMKConfigEventResultNotEnabled, KMKConfigEventResultResendAfterNetworkError, KMKConfigEventResultSuccess, KMKConnectionsEventResult, KMKConnectionsEventResultAlreadyInit, KMKConnectionsEventResultAlreadySent, KMKConnectionsEventResultInit, KMKConnectionsEventResultNoTime, KMKConnectionsEventResultNotEnabled, KMKConnectionsEventResultResendAfterNetworkError, KMKConnectionsEventResultSdkNotSupported, KMKConnectionsEventResultSuccess, KMKDeviceDataResult, KMKDeviceDataResultAlreadyInit, KMKDeviceDataResultAlreadySent, KMKDeviceDataResultInit, KMKDeviceDataResultNotEnabled, KMKDeviceDataResultResendAfterNetworkError, KMKDeviceDataResultSuccess, KMKDeviceJailbreakEventResult, KMKDeviceJailbreakEventResultAlreadyInit, KMKDeviceJailbreakEventResultAlreadySent, KMKDeviceJailbreakEventResultInit, KMKDeviceJailbreakEventResultNotEnabled, KMKDeviceJailbreakEventResultNotSupported, KMKDeviceJailbreakEventResultResendAfterNetworkError, KMKDeviceJailbreakEventResultSuccess, KMKDeviceRootDetectionResult, KMKDeviceRootDetectionResultAlreadyInit, KMKDeviceRootDetectionResultAlreadySent, KMKDeviceRootDetectionResultInit, KMKDeviceRootDetectionResultNotEnabled, KMKDeviceRootDetectionResultResendAfterNetworkError, KMKDeviceRootDetectionResultSuccess, KMKFingerprintResult, KMKFingerprintResultAlreadyInit, KMKFingerprintResultAlreadySent, KMKFingerprintResultInit, KMKFingerprintResultNotEnabled, KMKFingerprintResultNotSupported, KMKFingerprintResultResendAfterNetworkError, KMKFingerprintResultSuccess, KMKImsiForDeviceResult, KMKImsiForDeviceResultAlreadyInit, KMKImsiForDeviceResultAlreadySent, KMKImsiForDeviceResultInit, KMKImsiForDeviceResultNotEnabled, KMKImsiForDeviceResultResendAfterNetworkError, KMKImsiForDeviceResultSuccess, KMKInstalledApplicationAllResult, KMKInstalledApplicationAllResultAlreadyInit, KMKInstalledApplicationAllResultInit, KMKInstalledApplicationAllResultNoChanges, KMKInstalledApplicationAllResultNotEnabled, KMKInstalledApplicationAllResultResendAfterNetworkError, KMKInstalledApplicationAllResultSendNotRequired, KMKInstalledApplicationAllResultSuccess, KMKInstalledApplicationHashesResult, KMKInstalledApplicationHashesResultAlreadyInit, KMKInstalledApplicationHashesResultInit, KMKInstalledApplicationHashesResultNoChanges, KMKInstalledApplicationHashesResultNotEnabled, KMKInstalledApplicationHashesResultResendAfterNetworkError, KMKInstalledApplicationHashesResultSendNotRequired, KMKInstalledApplicationHashesResultSuccess, KMKInstalledApplicationListResult, KMKInstalledApplicationListResultAlreadyInit, KMKInstalledApplicationListResultInit, KMKInstalledApplicationListResultNoChanges, KMKInstalledApplicationListResultNotEnabled, KMKInstalledApplicationListResultRegexError, KMKInstalledApplicationListResultResendAfterNetworkError, KMKInstalledApplicationListResultSuccess, KMKVoipEventNames, KMKProcessListResult, KMKProcessListResultAlreadyInit, KMKProcessListResultAlreadySent, KMKProcessListResultInit, KMKProcessListResultNotEnabled, KMKProcessListResultNotSupported, KMKProcessListResultResendAfterNetworkError, KMKProcessListResultSuccess, KMKRatDetectResult, KMKRatDetectResultAlreadyInit, KMKRatDetectResultInit, KMKRatDetectResultNotSupported, KMKRatDetectResultResendAfterNetworkError, KMKRatDetectResultSuccess, KMKScreenRecordingEventResult, KMKScreenRecordingEventResultAlreadyInit, KMKScreenRecordingEventResultAlreadySent, KMKScreenRecordingEventResultInit, KMKScreenRecordingEventResultNotEnabled, KMKScreenRecordingEventResultNotSupported, KMKScreenRecordingEventResultResendAfterNetworkError, KMKScreenRecordingEventResultSuccess, KMKScreenShareResult, KMKScreenShareResultAlreadyInit, KMKScreenShareResultInit, KMKScreenShareResultNoDisplayManager, KMKScreenShareResultNotEnabled, KMKScreenShareResultNotSupported, KMKScreenShareResultResendAfterNetworkError, KMKScreenShareResultSuccess, KMKScreenshotResult, KMKScreenshotResultAlreadyInit, KMKScreenshotResultInit, KMKScreenshotResultNotEnabled, KMKScreenshotResultNotSupported, KMKScreenshotResultResendAfterNetworkError, KMKScreenshotResultSuccess, KMKTouchIdChangedEventResult, KMKTouchIdChangedEventResultAlreadyInit, KMKTouchIdChangedEventResultAlreadySent, KMKTouchIdChangedEventResultInit, KMKTouchIdChangedEventResultNotEnabled, KMKTouchIdChangedEventResultNotSupported, KMKTouchIdChangedEventResultResendAfterNetworkError, KMKTouchIdChangedEventResultSuccess, KMKTouchIdChangedEventResultUnchanged, KMKVoipCallResult, KMKVoipCallResultAlreadyInit, KMKVoipCallResultInit, KMKVoipCallResultNotEnabled, KMKVoipCallResultNotSupported, KMKVoipCallResultResendAfterNetworkError, KMKVoipCallResultSuccess, KMKVpnConnectionResult, KMKVpnConnectionResultAlreadyInit, KMKVpnConnectionResultAlreadySent, KMKVpnConnectionResultInit, KMKVpnConnectionResultNotEnabled, KMKVpnConnectionResultResendAfterNetworkError, KMKVpnConnectionResultSuccess, KMKCallListenerState, KMKKotlinThrowable, KMKKotlinException, KMKWhoCallsResultAlreadyStarted, KMKWhoCallsResultFailure, KMKWhoCallsResultFailureAlreadyInit, KMKWhoCallsResultFailureInitSdkError, KMKWhoCallsResultFailureLicenseError, KMKWhoCallsResultFailureNotEnabled, KMKWhoCallsResultFailureNotSupported, KMKWhoCallsResultFailurePermissionDenied, KMKWhoCallsResultSuccess, KMKHeadersCompanion, KMKHeaders, KMKKotlinByteArray, KMKPacketCompanion, KMKAppContext, KMKBuildWrapper, KMKDateUtils, KMKDyldImageDescriptorCompanion, KMKDyldImageDescriptor, KMKInstalledApplicationsAll, KMKKotlinUnit, KMKRuntimeTransacterTransaction, KMKRuntimeBaseTransacterImpl, KMKRuntimeTransacterImpl, KMKRuntimeQuery<__covariant RowType>, KMKScannedApplications, KMKStatisticsCache, KMKKtor_client_coreHttpClient, KMKKtor_client_coreHttpClientConfig<T>, KMKRuntimeAfterVersion, KMKKotlinx_serialization_coreSerializersModule, KMKKotlinx_serialization_coreSerialKind, KMKKotlinNothing, KMKKotlinByteIterator, KMKRuntimeExecutableQuery<__covariant RowType>, KMKKtor_client_coreHttpClientEngineConfig, KMKKtor_eventsEvents, KMKKtor_client_coreHttpReceivePipeline, KMKKtor_client_coreHttpRequestPipeline, KMKKtor_client_coreHttpResponsePipeline, KMKKtor_client_coreHttpSendPipeline, KMKKtor_client_coreHttpRequestData, KMKKtor_client_coreHttpResponseData, KMKKotlinx_coroutines_coreCoroutineDispatcher, KMKKtor_client_coreProxyConfig, KMKKtor_utilsAttributeKey<T>, KMKKtor_eventsEventDefinition<T>, KMKKtor_utilsPipelinePhase, KMKKtor_utilsPipeline<TSubject, TContext>, KMKKtor_client_coreHttpReceivePipelinePhases, KMKKtor_client_coreHttpResponse, KMKKtor_client_coreHttpRequestPipelinePhases, KMKKtor_client_coreHttpRequestBuilder, KMKKtor_client_coreHttpResponsePipelinePhases, KMKKtor_client_coreHttpResponseContainer, KMKKtor_client_coreHttpClientCall, KMKKtor_client_coreHttpSendPipelinePhases, KMKKotlinRuntimeException, KMKKotlinIllegalStateException, KMKKtor_httpUrl, KMKKtor_httpHttpMethod, KMKKtor_httpOutgoingContent, KMKKtor_httpHttpStatusCode, KMKKtor_utilsGMTDate, KMKKtor_httpHttpProtocolVersion, KMKKotlinAbstractCoroutineContextElement, KMKKotlinx_coroutines_coreCoroutineDispatcherKey, KMKKtor_httpHeadersBuilder, KMKKtor_client_coreHttpRequestBuilderCompanion, KMKKtor_httpURLBuilder, KMKKtor_utilsTypeInfo, KMKKtor_client_coreHttpClientCallCompanion, KMKKtor_httpUrlCompanion, KMKKtor_httpURLProtocol, KMKKtor_httpHttpMethodCompanion, KMKKtor_httpContentType, KMKKotlinCancellationException, KMKKtor_httpHttpStatusCodeCompanion, KMKKtor_utilsGMTDateCompanion, KMKKtor_utilsWeekDay, KMKKtor_utilsMonth, KMKKtor_httpHttpProtocolVersionCompanion, KMKKotlinAbstractCoroutineContextKey<B, E>, KMKKtor_ioMemory, KMKKtor_ioChunkBuffer, KMKKtor_ioBuffer, KMKKtor_ioByteReadPacket, KMKKtor_utilsStringValuesBuilderImpl, KMKKtor_httpURLBuilderCompanion, KMKKtor_httpURLProtocolCompanion, KMKKtor_httpHeaderValueParam, KMKKtor_httpHeaderValueWithParametersCompanion, KMKKtor_httpHeaderValueWithParameters, KMKKtor_httpContentTypeCompanion, KMKKtor_utilsWeekDayCompanion, KMKKtor_utilsMonthCompanion, KMKKtor_ioMemoryCompanion, KMKKtor_ioBufferCompanion, KMKKtor_ioChunkBufferCompanion, KMKKtor_ioInputCompanion, KMKKtor_ioInput, KMKKtor_ioByteReadPacketCompanion, KMKKotlinKTypeProjection, KMKKotlinKVariance, KMKKotlinKTypeProjectionCompanion;

@protocol KMKKfpService, KMKKotlinComparable, KMKKotlinx_serialization_coreKSerializer, KMKRuntimeTransactionWithoutReturn, KMKRuntimeTransactionWithReturn, KMKRuntimeTransacterBase, KMKRuntimeTransacter, KMKPacketCache, KMKRuntimeSqlDriver, KMKRuntimeSqlSchema, KMKMultiplatform_settingsSettings, KMKKotlinx_serialization_coreEncoder, KMKKotlinx_serialization_coreSerialDescriptor, KMKKotlinx_serialization_coreSerializationStrategy, KMKKotlinx_serialization_coreDecoder, KMKKotlinx_serialization_coreDeserializationStrategy, KMKIConfig, KMKAppSignatureInfo, KMKKotlinIterator, KMKRuntimeTransactionCallbacks, KMKRuntimeQueryListener, KMKRuntimeQueryResult, KMKRuntimeSqlPreparedStatement, KMKRuntimeSqlCursor, KMKRuntimeCloseable, KMKKotlinx_serialization_coreCompositeEncoder, KMKKotlinAnnotation, KMKKotlinx_serialization_coreCompositeDecoder, KMKKotlinCoroutineContext, KMKKotlinx_coroutines_coreCoroutineScope, KMKKtor_ioCloseable, KMKKtor_client_coreHttpClientEngine, KMKKtor_client_coreHttpClientEngineCapability, KMKKtor_utilsAttributes, KMKKtor_client_coreHttpClientPlugin, KMKKotlinx_serialization_coreSerializersModuleCollector, KMKKotlinKClass, KMKKotlinCoroutineContextElement, KMKKotlinCoroutineContextKey, KMKKotlinx_coroutines_coreDisposableHandle, KMKKotlinSuspendFunction2, KMKKotlinKDeclarationContainer, KMKKotlinKAnnotatedElement, KMKKotlinKClassifier, KMKKtor_httpHeaders, KMKKotlinx_coroutines_coreJob, KMKKotlinContinuation, KMKKotlinContinuationInterceptor, KMKKotlinx_coroutines_coreRunnable, KMKKotlinFunction, KMKKtor_httpHttpMessage, KMKKtor_ioByteReadChannel, KMKKtor_httpHttpMessageBuilder, KMKKtor_client_coreHttpRequest, KMKKtor_httpParameters, KMKKotlinMapEntry, KMKKtor_utilsStringValues, KMKKotlinx_coroutines_coreChildHandle, KMKKotlinx_coroutines_coreChildJob, KMKKotlinSequence, KMKKotlinx_coroutines_coreSelectClause0, KMKKtor_ioReadSession, KMKKotlinSuspendFunction1, KMKKotlinAppendable, KMKKtor_utilsStringValuesBuilder, KMKKtor_httpParametersBuilder, KMKKotlinKType, KMKKotlinx_coroutines_coreParentJob, KMKKotlinx_coroutines_coreSelectInstance, KMKKotlinx_coroutines_coreSelectClause, KMKKtor_ioObjectPool;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface KMKBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface KMKBase (KMKBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface KMKMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface KMKMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorKMKKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface KMKNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface KMKByte : KMKNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface KMKUByte : KMKNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface KMKShort : KMKNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface KMKUShort : KMKNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface KMKInt : KMKNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface KMKUInt : KMKNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface KMKLong : KMKNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface KMKULong : KMKNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface KMKFloat : KMKNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface KMKDouble : KMKNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface KMKBoolean : KMKNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("ForegroundRequest")))
@protocol KMKForegroundRequest
@required
- (BOOL)moveAppToForeground __attribute__((swift_name("moveAppToForeground()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InternalKfpMobileKit")))
@interface KMKInternalKfpMobileKit : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)internalKfpMobileKit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKInternalKfpMobileKit *shared __attribute__((swift_name("shared")));
- (void)activateConfigWrapper:(KMKInternalKfpMobileKitConfigWrapper *)configWrapper result:(void (^)(KMKKfpActivateResult *))result __attribute__((swift_name("activate(configWrapper:result:)")));
- (NSString * _Nullable)getClientId __attribute__((swift_name("getClientId()")));
- (KMKInternalKfpMobileKitConfigWrapper * _Nullable)getCurrentConfig __attribute__((swift_name("getCurrentConfig()")));
- (KMKInternalKfpMobileKitConfigWrapper *)getDefaultConfig __attribute__((swift_name("getDefaultConfig()")));
- (NSArray<NSString *> * _Nullable)getLogs __attribute__((swift_name("getLogs()")));
- (void)resetMobileKit __attribute__((swift_name("resetMobileKit()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InternalKfpMobileKit.ConfigWrapper")))
@interface KMKInternalKfpMobileKitConfigWrapper : KMKBase
- (instancetype)initWithStatisticsUrl:(NSString * _Nullable)statisticsUrl clientId:(NSString * _Nullable)clientId savedOptions:(KMKMutableDictionary<NSString *, NSString *> *)savedOptions __attribute__((swift_name("init(statisticsUrl:clientId:savedOptions:)"))) __attribute__((objc_designated_initializer));
- (KMKInternalKfpMobileKitConfigWrapper *)doCopyStatisticsUrl:(NSString * _Nullable)statisticsUrl clientId:(NSString * _Nullable)clientId savedOptions:(KMKMutableDictionary<NSString *, NSString *> *)savedOptions __attribute__((swift_name("doCopy(statisticsUrl:clientId:savedOptions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable clientId __attribute__((swift_name("clientId")));
@property (readonly) KMKMutableDictionary<NSString *, NSString *> *savedOptions __attribute__((swift_name("savedOptions")));
@property (readonly) NSString * _Nullable statisticsUrl __attribute__((swift_name("statisticsUrl")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IosBuildConfig")))
@interface KMKIosBuildConfig : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)iosBuildConfig __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKIosBuildConfig *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *CLIENT_ID __attribute__((swift_name("CLIENT_ID")));
@property (readonly) NSString *VERSION_NAME __attribute__((swift_name("VERSION_NAME")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KfpActivateResult")))
@interface KMKKfpActivateResult : KMKBase
- (instancetype)initWithKfpService:(id<KMKKfpService>)kfpService errors:(NSSet<KMKKfpResultKfpError *> *)errors __attribute__((swift_name("init(kfpService:errors:)"))) __attribute__((objc_designated_initializer));
- (KMKKfpActivateResult *)doCopyKfpService:(id<KMKKfpService>)kfpService errors:(NSSet<KMKKfpResultKfpError *> *)errors __attribute__((swift_name("doCopy(kfpService:errors:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSSet<KMKKfpResultKfpError *> *errors __attribute__((swift_name("errors")));
@property (readonly) id<KMKKfpService> kfpService __attribute__((swift_name("kfpService")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol KMKKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface KMKKotlinEnum<E> : KMKBase <KMKKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMKKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KfpLoginResult")))
@interface KMKKfpLoginResult : KMKKotlinEnum<KMKKfpLoginResult *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KMKKfpLoginResult *unknownError __attribute__((swift_name("unknownError")));
@property (class, readonly) KMKKfpLoginResult *success __attribute__((swift_name("success")));
@property (class, readonly) KMKKfpLoginResult *incorrectLogin __attribute__((swift_name("incorrectLogin")));
@property (class, readonly) KMKKfpLoginResult *incorrectPassword __attribute__((swift_name("incorrectPassword")));
@property (class, readonly) KMKKfpLoginResult *dropConnection __attribute__((swift_name("dropConnection")));
@property (class, readonly) KMKKfpLoginResult *closeApplication __attribute__((swift_name("closeApplication")));
@property (class, readonly) KMKKfpLoginResult *authTimeout __attribute__((swift_name("authTimeout")));
+ (KMKKotlinArray<KMKKfpLoginResult *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KMKKfpLoginResult *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KfpMobileKit")))
@interface KMKKfpMobileKit : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)kfpMobileKit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKfpMobileKit *shared __attribute__((swift_name("shared")));
- (void)activateResult:(void (^ _Nullable)(KMKKfpActivateResult *))result __attribute__((swift_name("activate(result:)")));
- (id<KMKKfpService> _Nullable)getKfpServiceInstance __attribute__((swift_name("getKfpServiceInstance()")));
- (BOOL)isActivated __attribute__((swift_name("isActivated()")));
@end

__attribute__((swift_name("KfpResult")))
@interface KMKKfpResult : KMKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("KfpResult.AnalyzeEnvironmentEventResult")))
@interface KMKKfpResultAnalyzeEnvironmentEventResult : KMKKfpResult
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KfpResult.AnalyzeEnvironmentEventResultAlreadyAnalyze")))
@interface KMKKfpResultAnalyzeEnvironmentEventResultAlreadyAnalyze : KMKKfpResultAnalyzeEnvironmentEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)alreadyAnalyze __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKfpResultAnalyzeEnvironmentEventResultAlreadyAnalyze *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KfpResult.AnalyzeEnvironmentEventResultSuccess")))
@interface KMKKfpResultAnalyzeEnvironmentEventResultSuccess : KMKKfpResultAnalyzeEnvironmentEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKfpResultAnalyzeEnvironmentEventResultSuccess *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KfpResult.InitComplete")))
@interface KMKKfpResultInitComplete : KMKKfpResult
- (instancetype)initWithKfpService:(id<KMKKfpService>)kfpService __attribute__((swift_name("init(kfpService:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (KMKKfpResultInitComplete *)doCopyKfpService:(id<KMKKfpService>)kfpService __attribute__((swift_name("doCopy(kfpService:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KMKKfpService> kfpService __attribute__((swift_name("kfpService")));
@end

__attribute__((swift_name("KfpResult.KfpError")))
@interface KMKKfpResultKfpError : KMKKfpResult
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("KfpResult.KfpSuccess")))
@interface KMKKfpResultKfpSuccess : KMKKfpResult
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KfpResult.PacketDelivered")))
@interface KMKKfpResultPacketDelivered : KMKKfpResult
- (instancetype)initWithPacket:(KMKPacket *)packet __attribute__((swift_name("init(packet:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (KMKKfpResultPacketDelivered *)doCopyPacket:(KMKPacket *)packet __attribute__((swift_name("doCopy(packet:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KMKPacket *packet __attribute__((swift_name("packet")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KfpResult.PacketNotDelivered")))
@interface KMKKfpResultPacketNotDelivered : KMKKfpResultKfpError
- (instancetype)initWithPacket:(KMKPacket *)packet __attribute__((swift_name("init(packet:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (KMKKfpResultPacketNotDelivered *)doCopyPacket:(KMKPacket *)packet __attribute__((swift_name("doCopy(packet:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KMKPacket *packet __attribute__((swift_name("packet")));
@end

__attribute__((swift_name("KfpResult.SendGeolocationEventResult")))
@interface KMKKfpResultSendGeolocationEventResult : KMKKfpResult
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KfpResult.SendGeolocationEventResultNotEnabled")))
@interface KMKKfpResultSendGeolocationEventResultNotEnabled : KMKKfpResultSendGeolocationEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notEnabled __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKfpResultSendGeolocationEventResultNotEnabled *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KfpResult.SendGeolocationEventResultResendAfterNetworkError")))
@interface KMKKfpResultSendGeolocationEventResultResendAfterNetworkError : KMKKfpResultSendGeolocationEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)resendAfterNetworkError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKfpResultSendGeolocationEventResultResendAfterNetworkError *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KfpResult.SendGeolocationEventResultSuccess")))
@interface KMKKfpResultSendGeolocationEventResultSuccess : KMKKfpResultSendGeolocationEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKfpResultSendGeolocationEventResultSuccess *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("KfpResult.SendLoginEventResult")))
@interface KMKKfpResultSendLoginEventResult : KMKKfpResult
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KfpResult.SendLoginEventResultNotEnabled")))
@interface KMKKfpResultSendLoginEventResultNotEnabled : KMKKfpResultSendLoginEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notEnabled __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKfpResultSendLoginEventResultNotEnabled *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KfpResult.SendLoginEventResultResendAfterNetworkError")))
@interface KMKKfpResultSendLoginEventResultResendAfterNetworkError : KMKKfpResultSendLoginEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)resendAfterNetworkError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKfpResultSendLoginEventResultResendAfterNetworkError *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KfpResult.SendLoginEventResultSuccess")))
@interface KMKKfpResultSendLoginEventResultSuccess : KMKKfpResultSendLoginEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKfpResultSendLoginEventResultSuccess *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KfpResult.SendLoginEventResultUserIdInvalidFormat")))
@interface KMKKfpResultSendLoginEventResultUserIdInvalidFormat : KMKKfpResultSendLoginEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)userIdInvalidFormat __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKfpResultSendLoginEventResultUserIdInvalidFormat *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KfpResult.SendLoginEventResultUserNameInvalidFormat")))
@interface KMKKfpResultSendLoginEventResultUserNameInvalidFormat : KMKKfpResultSendLoginEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)userNameInvalidFormat __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKfpResultSendLoginEventResultUserNameInvalidFormat *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("KfpResult.SendLogoutEventResult")))
@interface KMKKfpResultSendLogoutEventResult : KMKKfpResult
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KfpResult.SendLogoutEventResultNotEnabled")))
@interface KMKKfpResultSendLogoutEventResultNotEnabled : KMKKfpResultSendLogoutEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notEnabled __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKfpResultSendLogoutEventResultNotEnabled *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KfpResult.SendLogoutEventResultResendAfterNetworkError")))
@interface KMKKfpResultSendLogoutEventResultResendAfterNetworkError : KMKKfpResultSendLogoutEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)resendAfterNetworkError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKfpResultSendLogoutEventResultResendAfterNetworkError *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KfpResult.SendLogoutEventResultSuccess")))
@interface KMKKfpResultSendLogoutEventResultSuccess : KMKKfpResultSendLogoutEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKfpResultSendLogoutEventResultSuccess *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("KfpResult.SendSessionIdEventResult")))
@interface KMKKfpResultSendSessionIdEventResult : KMKKfpResult
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KfpResult.SendSessionIdEventResultNotEnabled")))
@interface KMKKfpResultSendSessionIdEventResultNotEnabled : KMKKfpResultSendSessionIdEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notEnabled __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKfpResultSendSessionIdEventResultNotEnabled *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KfpResult.SendSessionIdEventResultResendAfterNetworkError")))
@interface KMKKfpResultSendSessionIdEventResultResendAfterNetworkError : KMKKfpResultSendSessionIdEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)resendAfterNetworkError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKfpResultSendSessionIdEventResultResendAfterNetworkError *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KfpResult.SendSessionIdEventResultSessionIdInvalidFormat")))
@interface KMKKfpResultSendSessionIdEventResultSessionIdInvalidFormat : KMKKfpResultSendSessionIdEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sessionIdInvalidFormat __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKfpResultSendSessionIdEventResultSessionIdInvalidFormat *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KfpResult.SendSessionIdEventResultSuccess")))
@interface KMKKfpResultSendSessionIdEventResultSuccess : KMKKfpResultSendSessionIdEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKfpResultSendSessionIdEventResultSuccess *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("KfpResult.SendUiNavigationEventResult")))
@interface KMKKfpResultSendUiNavigationEventResult : KMKKfpResult
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KfpResult.SendUiNavigationEventResultNavigationPointInvalidFormatError")))
@interface KMKKfpResultSendUiNavigationEventResultNavigationPointInvalidFormatError : KMKKfpResultSendUiNavigationEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)navigationPointInvalidFormatError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKfpResultSendUiNavigationEventResultNavigationPointInvalidFormatError *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KfpResult.SendUiNavigationEventResultNotEnabled")))
@interface KMKKfpResultSendUiNavigationEventResultNotEnabled : KMKKfpResultSendUiNavigationEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notEnabled __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKfpResultSendUiNavigationEventResultNotEnabled *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KfpResult.SendUiNavigationEventResultResendAfterNetworkError")))
@interface KMKKfpResultSendUiNavigationEventResultResendAfterNetworkError : KMKKfpResultSendUiNavigationEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)resendAfterNetworkError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKfpResultSendUiNavigationEventResultResendAfterNetworkError *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KfpResult.SendUiNavigationEventResultSuccess")))
@interface KMKKfpResultSendUiNavigationEventResultSuccess : KMKKfpResultSendUiNavigationEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKfpResultSendUiNavigationEventResultSuccess *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("KfpService")))
@protocol KMKKfpService
@required
- (void)analyzeEnvironmentResultCallback:(void (^ _Nullable)(KMKKfpResultAnalyzeEnvironmentEventResult *))resultCallback __attribute__((swift_name("analyzeEnvironment(resultCallback:)")));
- (void)sendGeolocationResultCallback:(void (^ _Nullable)(KMKKfpResultSendGeolocationEventResult *))resultCallback __attribute__((swift_name("sendGeolocation(resultCallback:)")));
- (void)sendLoginUserId:(NSString *)userId userName:(NSString * _Nullable)userName result:(KMKKfpLoginResult *)result resultCallback:(void (^ _Nullable)(KMKKfpResultSendLoginEventResult *))resultCallback __attribute__((swift_name("sendLogin(userId:userName:result:resultCallback:)")));
- (void)sendLogoutResultCallback:(void (^ _Nullable)(KMKKfpResultSendLogoutEventResult *))resultCallback __attribute__((swift_name("sendLogout(resultCallback:)")));
- (void)sendSessionIdSessionId:(NSString *)sessionId resultCallback:(void (^ _Nullable)(KMKKfpResultSendSessionIdEventResult *))resultCallback __attribute__((swift_name("sendSessionId(sessionId:resultCallback:)")));
- (void)sendUiNavigationEvent:(NSString *)event resultCallback:(void (^ _Nullable)(KMKKfpResultSendUiNavigationEventResult *))resultCallback __attribute__((swift_name("sendUiNavigation(event:resultCallback:)")));
@property (readonly) NSString *deviceTag __attribute__((swift_name("deviceTag")));
@property (readonly) NSString *libraryVersion __attribute__((swift_name("libraryVersion")));
@end

__attribute__((swift_name("KfpWhoCallsService")))
@protocol KMKKfpWhoCallsService
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ValueChecker")))
@interface KMKValueChecker : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)valueChecker __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKValueChecker *shared __attribute__((swift_name("shared")));
- (BOOL)isValidLoginLogin:(NSString *)login __attribute__((swift_name("isValidLogin(login:)")));
- (BOOL)isValidSessionIdSessionId:(NSString *)sessionId __attribute__((swift_name("isValidSessionId(sessionId:)")));
- (BOOL)isValidUiNavigationUiNavigation:(NSString *)uiNavigation __attribute__((swift_name("isValidUiNavigation(uiNavigation:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigJsonKeys")))
@interface KMKConfigJsonKeys : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)configJsonKeys __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKConfigJsonKeys *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ANDROID_APPLICATION_SIGNATURE_EVENT_DISABLED __attribute__((swift_name("ANDROID_APPLICATION_SIGNATURE_EVENT_DISABLED")));
@property (readonly) NSString *ANDROID_DEVICE_EVENT_DISABLED __attribute__((swift_name("ANDROID_DEVICE_EVENT_DISABLED")));
@property (readonly) NSString *ANDROID_GEO_LOCATION_EVENT_DISABLED __attribute__((swift_name("ANDROID_GEO_LOCATION_EVENT_DISABLED")));
@property (readonly) NSString *ANDROID_RAT_KEY_DETECT_INTERVAL __attribute__((swift_name("ANDROID_RAT_KEY_DETECT_INTERVAL")));
@property (readonly) NSString *ANDROID_RAT_KEY_EVENT_DISABLED __attribute__((swift_name("ANDROID_RAT_KEY_EVENT_DISABLED")));
@property (readonly) NSString *ANDROID_RAT_MOTION_DETECT_INTERVAL __attribute__((swift_name("ANDROID_RAT_MOTION_DETECT_INTERVAL")));
@property (readonly) NSString *ANDROID_RAT_MOTION_EVENT_DISABLED __attribute__((swift_name("ANDROID_RAT_MOTION_EVENT_DISABLED")));
@property (readonly) NSString *ANDROID_SETTINGS_EVENT_DISABLED __attribute__((swift_name("ANDROID_SETTINGS_EVENT_DISABLED")));
@property (readonly) NSString *ANDROID_WEB_VIEW_EVENT_DISABLED __attribute__((swift_name("ANDROID_WEB_VIEW_EVENT_DISABLED")));
@property (readonly) NSString *APPLICATION_INFO_EVENT_DISABLED __attribute__((swift_name("APPLICATION_INFO_EVENT_DISABLED")));
@property (readonly) NSString *AVSCANRESULT_EVENT_DISABLED __attribute__((swift_name("AVSCANRESULT_EVENT_DISABLED")));
@property (readonly) NSString *CALLS_DETECTION_EVENT_DISABLED __attribute__((swift_name("CALLS_DETECTION_EVENT_DISABLED")));
@property (readonly) NSString *CALLS_PHONENUMBER_SEND_DISABLED __attribute__((swift_name("CALLS_PHONENUMBER_SEND_DISABLED")));
@property (readonly) NSString *CALL_ACTIVE_STATE_CHECK_COUNT __attribute__((swift_name("CALL_ACTIVE_STATE_CHECK_COUNT")));
@property (readonly) NSString *CALL_ACTIVE_STATE_CHECK_INTERVAL __attribute__((swift_name("CALL_ACTIVE_STATE_CHECK_INTERVAL")));
@property (readonly) NSString *CLIENT_ID __attribute__((swift_name("CLIENT_ID")));
@property (readonly) NSString *CONFIG_EVENT_DISABLED __attribute__((swift_name("CONFIG_EVENT_DISABLED")));
@property (readonly) NSString *CONFIG_UPDATE_INTERVAL __attribute__((swift_name("CONFIG_UPDATE_INTERVAL")));
@property (readonly) NSString *CONFIG_UPDATE_URL __attribute__((swift_name("CONFIG_UPDATE_URL")));
@property (readonly) NSString *CONNECTIONS_EVENT_DISABLED __attribute__((swift_name("CONNECTIONS_EVENT_DISABLED")));
@property (readonly) NSString *DEVICE_ROOT_DETECTION_EVENT_DISABLED __attribute__((swift_name("DEVICE_ROOT_DETECTION_EVENT_DISABLED")));
@property (readonly) NSString *EXEC_SESSION_TIMEOUT __attribute__((swift_name("EXEC_SESSION_TIMEOUT")));
@property (readonly) NSString *GET_INSTALLED_APPLICATION_API_DISABLED __attribute__((swift_name("GET_INSTALLED_APPLICATION_API_DISABLED")));
@property (readonly) NSString *IMSI_FOR_DEVICE_EVENT_DISABLED __attribute__((swift_name("IMSI_FOR_DEVICE_EVENT_DISABLED")));
@property (readonly) NSString *INSTALLED_APPLICATION_ALL_EVENT_DISABLED __attribute__((swift_name("INSTALLED_APPLICATION_ALL_EVENT_DISABLED")));
@property (readonly) NSString *INSTALLED_APPLICATION_ALL_SCAN_PART_SIZE __attribute__((swift_name("INSTALLED_APPLICATION_ALL_SCAN_PART_SIZE")));
@property (readonly) NSString *INSTALLED_APPLICATION_ALL_SCAN_REFRESH_INTERVAL __attribute__((swift_name("INSTALLED_APPLICATION_ALL_SCAN_REFRESH_INTERVAL")));
@property (readonly) NSString *INSTALLED_APPLICATION_HASHES_EVENT_DISABLED __attribute__((swift_name("INSTALLED_APPLICATION_HASHES_EVENT_DISABLED")));
@property (readonly) NSString *INSTALLED_APPLICATION_HASHES_SCAN_PART_SIZE __attribute__((swift_name("INSTALLED_APPLICATION_HASHES_SCAN_PART_SIZE")));
@property (readonly) NSString *INSTALLED_APPLICATION_HASHES_SCAN_REFRESH_INTERVAL __attribute__((swift_name("INSTALLED_APPLICATION_HASHES_SCAN_REFRESH_INTERVAL")));
@property (readonly) NSString *INSTALLED_APPLICATION_LIST_EVENT_DISABLED __attribute__((swift_name("INSTALLED_APPLICATION_LIST_EVENT_DISABLED")));
@property (readonly) NSString *INSTALLED_APPLICATION_LIST_REGEX __attribute__((swift_name("INSTALLED_APPLICATION_LIST_REGEX")));
@property (readonly) NSString *INSTALLED_APPLICATION_LIST_REGEX_BASE64 __attribute__((swift_name("INSTALLED_APPLICATION_LIST_REGEX_BASE64")));
@property (readonly) NSString *INSTALLED_APPLICATION_LIST_SCAN_PART_SIZE __attribute__((swift_name("INSTALLED_APPLICATION_LIST_SCAN_PART_SIZE")));
@property (readonly) NSString *IOS_APPLICATION_SIGNATURE_EVENT_DISABLED __attribute__((swift_name("IOS_APPLICATION_SIGNATURE_EVENT_DISABLED")));
@property (readonly) NSString *IOS_CALLS_INFO_EVENT_DISABLED __attribute__((swift_name("IOS_CALLS_INFO_EVENT_DISABLED")));
@property (readonly) NSString *IOS_CALL_ACTIVE_STATE_CHECK_COUNT __attribute__((swift_name("IOS_CALL_ACTIVE_STATE_CHECK_COUNT")));
@property (readonly) NSString *IOS_CALL_ACTIVE_STATE_CHECK_INTERVAL __attribute__((swift_name("IOS_CALL_ACTIVE_STATE_CHECK_INTERVAL")));
@property (readonly) NSString *IOS_DEVICE_JAILBREAK_EVENT_DISABLED __attribute__((swift_name("IOS_DEVICE_JAILBREAK_EVENT_DISABLED")));
@property (readonly) NSString *IOS_FINGERPRINT_EVENT_DISABLED __attribute__((swift_name("IOS_FINGERPRINT_EVENT_DISABLED")));
@property (readonly) NSString *IOS_GEO_LOCATION_EVENT_DISABLED __attribute__((swift_name("IOS_GEO_LOCATION_EVENT_DISABLED")));
@property (readonly) NSString *IOS_SCREENSHOT_EVENT_DISABLED __attribute__((swift_name("IOS_SCREENSHOT_EVENT_DISABLED")));
@property (readonly) NSString *IOS_SCREEN_RECORDING_EVENT_DISABLED __attribute__((swift_name("IOS_SCREEN_RECORDING_EVENT_DISABLED")));
@property (readonly) NSString *IOS_SCREEN_RECORDING_EVENT_RETRY_ATTEMPTS __attribute__((swift_name("IOS_SCREEN_RECORDING_EVENT_RETRY_ATTEMPTS")));
@property (readonly) NSString *IOS_SCREEN_RECORDING_EVENT_RETRY_INTERVAL __attribute__((swift_name("IOS_SCREEN_RECORDING_EVENT_RETRY_INTERVAL")));
@property (readonly) NSString *IOS_TOUCH_ID_CHANGED_EVENT_DISABLED __attribute__((swift_name("IOS_TOUCH_ID_CHANGED_EVENT_DISABLED")));
@property (readonly) NSString *KAV_SDK_BASES_UPDATE_INTERVAL __attribute__((swift_name("KAV_SDK_BASES_UPDATE_INTERVAL")));
@property (readonly) NSString *KAV_SDK_ENABLED __attribute__((swift_name("KAV_SDK_ENABLED")));
@property (readonly) NSString *KAV_SDK_REGARD_RISKWARE_AS_MALWARE __attribute__((swift_name("KAV_SDK_REGARD_RISKWARE_AS_MALWARE")));
@property (readonly) NSString *KAV_SDK_SCAN_INTERVAL __attribute__((swift_name("KAV_SDK_SCAN_INTERVAL")));
@property (readonly) NSString *KEEP_LOGS_IN_FILE_ENABLED __attribute__((swift_name("KEEP_LOGS_IN_FILE_ENABLED")));
@property (readonly) NSString *LOG_DATA_EVENT_DISABLED __attribute__((swift_name("LOG_DATA_EVENT_DISABLED")));
@property (readonly) NSString *LOG_FILE_KEEP_INTERVAL __attribute__((swift_name("LOG_FILE_KEEP_INTERVAL")));
@property (readonly) NSString *MAX_NUMBER_OF_SIMILAR_EVENTS_IN_STORAGE __attribute__((swift_name("MAX_NUMBER_OF_SIMILAR_EVENTS_IN_STORAGE")));
@property (readonly) NSString *NETSTAT_INFO_TIME_INTERVAL __attribute__((swift_name("NETSTAT_INFO_TIME_INTERVAL")));
@property (readonly) NSString *PASSIVE_BIOMETRICS_EVENT_DISABLED __attribute__((swift_name("PASSIVE_BIOMETRICS_EVENT_DISABLED")));
@property (readonly) NSString *PASSIVE_BIOMETRICS_MOTION_EVENT_PART_SIZE __attribute__((swift_name("PASSIVE_BIOMETRICS_MOTION_EVENT_PART_SIZE")));
@property (readonly) NSString *PASSIVE_BIOMETRICS_MOTION_EVENT_REGEX __attribute__((swift_name("PASSIVE_BIOMETRICS_MOTION_EVENT_REGEX")));
@property (readonly) NSString *PASSIVE_BIOMETRICS_MOTION_EVENT_SLEEP_INTERVAL __attribute__((swift_name("PASSIVE_BIOMETRICS_MOTION_EVENT_SLEEP_INTERVAL")));
@property (readonly) NSString *PASSIVE_BIOMETRICS_MOTION_EVENT_TAIL_INTERVAL __attribute__((swift_name("PASSIVE_BIOMETRICS_MOTION_EVENT_TAIL_INTERVAL")));
@property (readonly) NSString *PASSIVE_BIOMETRICS_MOTION_EVENT_TOUCH_INTERVAL __attribute__((swift_name("PASSIVE_BIOMETRICS_MOTION_EVENT_TOUCH_INTERVAL")));
@property (readonly) NSString *PROCESS_LIST_EVENT_DISABLED __attribute__((swift_name("PROCESS_LIST_EVENT_DISABLED")));
@property (readonly) NSString *SCREENSHOT_EVENT_DISABLED __attribute__((swift_name("SCREENSHOT_EVENT_DISABLED")));
@property (readonly) NSString *SCREEN_SHARE_CHECK_INTERNAL __attribute__((swift_name("SCREEN_SHARE_CHECK_INTERNAL")));
@property (readonly) NSString *SCREEN_SHARE_EVENT_DISABLED __attribute__((swift_name("SCREEN_SHARE_EVENT_DISABLED")));
@property (readonly) NSString *SECURE_DEVICE_TAG_URL __attribute__((swift_name("SECURE_DEVICE_TAG_URL")));
@property (readonly) NSString *SENSOR_RATE __attribute__((swift_name("SENSOR_RATE")));
@property (readonly) NSString *SESSION_ID_EVENT_DISABLED __attribute__((swift_name("SESSION_ID_EVENT_DISABLED")));
@property (readonly) NSString *STAT_URL __attribute__((swift_name("STAT_URL")));
@property (readonly) NSString *UI_NAVIGATION_EVENT_DISABLED __attribute__((swift_name("UI_NAVIGATION_EVENT_DISABLED")));
@property (readonly) NSString *USER_LOGIN_EVENT_DISABLED __attribute__((swift_name("USER_LOGIN_EVENT_DISABLED")));
@property (readonly) NSString *USER_LOGOUT_EVENT_DISABLED __attribute__((swift_name("USER_LOGOUT_EVENT_DISABLED")));
@property (readonly) NSString *VOIP_EVENT_DISABLED __attribute__((swift_name("VOIP_EVENT_DISABLED")));
@property (readonly) NSString *VOIP_SCAN_INTERVAL __attribute__((swift_name("VOIP_SCAN_INTERVAL")));
@property (readonly) NSString *VOIP_SCAN_RATE __attribute__((swift_name("VOIP_SCAN_RATE")));
@property (readonly) NSString *VPN_EVENT_DISABLED __attribute__((swift_name("VPN_EVENT_DISABLED")));
@property (readonly) NSString *WHOCALLS_EVENT_DISABLED __attribute__((swift_name("WHOCALLS_EVENT_DISABLED")));
@property (readonly) NSString *WHOCALLS_PHONENUMBER_SEND_DISABLED __attribute__((swift_name("WHOCALLS_PHONENUMBER_SEND_DISABLED")));
@property (readonly) NSString *WHOCALLS_SDK_ENABLED __attribute__((swift_name("WHOCALLS_SDK_ENABLED")));
@property (readonly) NSString *WRITE_LOGS_TO_FILE_ENABLED __attribute__((swift_name("WRITE_LOGS_TO_FILE_ENABLED")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExternalConfigModel")))
@interface KMKExternalConfigModel : KMKBase
- (instancetype)initWithConfig:(KMKExternalConfig *)config timestamp:(NSString *)timestamp __attribute__((swift_name("init(config:timestamp:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMKExternalConfigModelCompanion *companion __attribute__((swift_name("companion")));
- (KMKExternalConfigModel *)doCopyConfig:(KMKExternalConfig *)config timestamp:(NSString *)timestamp __attribute__((swift_name("doCopy(config:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="config")
*/
@property (readonly) KMKExternalConfig *config __attribute__((swift_name("config")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="timestamp")
*/
@property (readonly) NSString *timestamp __attribute__((swift_name("timestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExternalConfigModel.Companion")))
@interface KMKExternalConfigModelCompanion : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKExternalConfigModelCompanion *shared __attribute__((swift_name("shared")));
- (id<KMKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("RuntimeTransacterBase")))
@protocol KMKRuntimeTransacterBase
@required
@end

__attribute__((swift_name("RuntimeTransacter")))
@protocol KMKRuntimeTransacter <KMKRuntimeTransacterBase>
@required
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<KMKRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<KMKRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end

__attribute__((swift_name("PacketCache")))
@protocol KMKPacketCache <KMKRuntimeTransacter>
@required
@property (readonly) KMKPacketCacheQueries *packetCacheQueries __attribute__((swift_name("packetCacheQueries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PacketCacheCompanion")))
@interface KMKPacketCacheCompanion : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKPacketCacheCompanion *shared __attribute__((swift_name("shared")));
- (id<KMKPacketCache>)invokeDriver:(id<KMKRuntimeSqlDriver>)driver __attribute__((swift_name("invoke(driver:)")));
@property (readonly) id<KMKRuntimeSqlSchema> Schema __attribute__((swift_name("Schema")));
@end

__attribute__((swift_name("JsonValidator")))
@protocol KMKJsonValidator
@required
- (id _Nullable)validateJwsJsonJwsJsonStr:(NSString *)jwsJsonStr __attribute__((swift_name("validateJwsJson(jwsJsonStr:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SettingsPacketStorage")))
@interface KMKSettingsPacketStorage : KMKBase
- (instancetype)initWithSettings:(id<KMKMultiplatform_settingsSettings>)settings __attribute__((swift_name("init(settings:)"))) __attribute__((objc_designated_initializer));
- (void)deletePacket:(KMKPacket *)packet __attribute__((swift_name("delete(packet:)")));
- (void)deleteOldest __attribute__((swift_name("deleteOldest()")));
- (BOOL)deleteOldestByTypeType:(NSString *)type __attribute__((swift_name("deleteOldestByType(type:)")));
- (KMKPacket * _Nullable)getPacketId:(NSString *)packetId __attribute__((swift_name("get(packetId:)")));
- (int32_t)getCountByTypeType:(NSString *)type __attribute__((swift_name("getCountByType(type:)")));
- (KMKPacket * _Nullable)getLast __attribute__((swift_name("getLast()")));
- (KMKPacket * _Nullable)getLastByPriorityPriority:(int32_t)priority __attribute__((swift_name("getLastByPriority(priority:)")));
- (KMKPacket * _Nullable)getOldest __attribute__((swift_name("getOldest()")));
- (KMKPacket * _Nullable)getOldestByPriorityPriority:(int32_t)priority __attribute__((swift_name("getOldestByPriority(priority:)")));
- (int32_t)recordsCount __attribute__((swift_name("recordsCount()")));
- (void)savePacket:(KMKPacket *)packet limitPacketsStorage:(int32_t)limitPacketsStorage __attribute__((swift_name("save(packet:limitPacketsStorage:)")));
- (void)updateTimeStampPacket:(KMKPacket *)packet __attribute__((swift_name("updateTimeStamp(packet:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol KMKKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<KMKKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<KMKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol KMKKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<KMKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<KMKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol KMKKotlinx_serialization_coreKSerializer <KMKKotlinx_serialization_coreSerializationStrategy, KMKKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BooleanFromStringSerializer")))
@interface KMKBooleanFromStringSerializer : KMKBase <KMKKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)booleanFromStringSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKBooleanFromStringSerializer *shared __attribute__((swift_name("shared")));
- (KMKBoolean * _Nullable)deserializeDecoder:(id<KMKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<KMKKotlinx_serialization_coreEncoder>)encoder value:(KMKBoolean * _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<KMKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("IConfig")))
@protocol KMKIConfig
@required
@property (readonly) KMKBoolean * _Nullable androidDeviceEventEnabled __attribute__((swift_name("androidDeviceEventEnabled")));
@property (readonly) id _Nullable androidRatKeyDetectInterval __attribute__((swift_name("androidRatKeyDetectInterval")));
@property (readonly) KMKBoolean * _Nullable androidRatKeyEventEnabled __attribute__((swift_name("androidRatKeyEventEnabled")));
@property (readonly) id _Nullable androidRatMotionDetectInterval __attribute__((swift_name("androidRatMotionDetectInterval")));
@property (readonly) KMKBoolean * _Nullable androidRatMotionEventEnabled __attribute__((swift_name("androidRatMotionEventEnabled")));
@property (readonly) KMKBoolean * _Nullable androidSettingsEventEnabled __attribute__((swift_name("androidSettingsEventEnabled")));
@property (readonly) KMKBoolean * _Nullable androidWebViewEventEnabled __attribute__((swift_name("androidWebViewEventEnabled")));
@property (readonly) KMKBoolean * _Nullable applicationInfoEventEnabled __attribute__((swift_name("applicationInfoEventEnabled")));
@property (readonly) KMKBoolean * _Nullable applicationSignatureEventEnabled __attribute__((swift_name("applicationSignatureEventEnabled")));
@property (readonly) KMKBoolean * _Nullable avScanResultEventEnabled __attribute__((swift_name("avScanResultEventEnabled")));
@property (readonly) KMKInt * _Nullable callActiveStateCheckCount __attribute__((swift_name("callActiveStateCheckCount")));
@property (readonly) id _Nullable callActiveStateCheckInterval __attribute__((swift_name("callActiveStateCheckInterval")));
@property (readonly) KMKBoolean * _Nullable callInfoEventEnabled __attribute__((swift_name("callInfoEventEnabled")));
@property (readonly) KMKBoolean * _Nullable callsPhoneNumberSendEnabled __attribute__((swift_name("callsPhoneNumberSendEnabled")));
@property (readonly) NSString * _Nullable clientId __attribute__((swift_name("clientId")));
@property (readonly) KMKBoolean * _Nullable configEventEnabled __attribute__((swift_name("configEventEnabled")));
@property (readonly) id _Nullable configUpdateInterval __attribute__((swift_name("configUpdateInterval")));
@property (readonly) NSString * _Nullable configUpdateUrl __attribute__((swift_name("configUpdateUrl")));
@property (readonly) KMKBoolean * _Nullable connectionsEventEnabled __attribute__((swift_name("connectionsEventEnabled")));
@property (readonly) KMKBoolean * _Nullable deviceRootDetectionEventEnabled __attribute__((swift_name("deviceRootDetectionEventEnabled")));
@property (readonly) id _Nullable execSessionIdRefreshInterval __attribute__((swift_name("execSessionIdRefreshInterval")));
@property (readonly) KMKBoolean * _Nullable geoLocationEventEnabled __attribute__((swift_name("geoLocationEventEnabled")));
@property (readonly) KMKBoolean * _Nullable getInstalledApplicationApiEnabled __attribute__((swift_name("getInstalledApplicationApiEnabled")));
@property (readonly) KMKBoolean * _Nullable imsiForDeviceEventEnabled __attribute__((swift_name("imsiForDeviceEventEnabled")));
@property (readonly) KMKBoolean * _Nullable installedApplicationAllEventEnabled __attribute__((swift_name("installedApplicationAllEventEnabled")));
@property (readonly) KMKInt * _Nullable installedApplicationAllScanPartSize __attribute__((swift_name("installedApplicationAllScanPartSize")));
@property (readonly) id _Nullable installedApplicationAllScanRefreshInterval __attribute__((swift_name("installedApplicationAllScanRefreshInterval")));
@property (readonly) KMKBoolean * _Nullable installedApplicationHashesEventEnabled __attribute__((swift_name("installedApplicationHashesEventEnabled")));
@property (readonly) KMKInt * _Nullable installedApplicationHashesScanPartSize __attribute__((swift_name("installedApplicationHashesScanPartSize")));
@property (readonly) id _Nullable installedApplicationHashesScanRefreshInterval __attribute__((swift_name("installedApplicationHashesScanRefreshInterval")));
@property (readonly) KMKBoolean * _Nullable installedApplicationListEventEnabled __attribute__((swift_name("installedApplicationListEventEnabled")));
@property (readonly) KMKInt * _Nullable installedApplicationListScanPartSize __attribute__((swift_name("installedApplicationListScanPartSize")));
@property (readonly) NSString * _Nullable installedApplicationListScanRegex __attribute__((swift_name("installedApplicationListScanRegex")));
@property (readonly) NSString * _Nullable installedApplicationListScanRegexBase64 __attribute__((swift_name("installedApplicationListScanRegexBase64")));
@property (readonly) KMKBoolean * _Nullable iosDeviceJailbreakEventEnabled __attribute__((swift_name("iosDeviceJailbreakEventEnabled")));
@property (readonly) KMKBoolean * _Nullable iosFingerprintEventEnabled __attribute__((swift_name("iosFingerprintEventEnabled")));
@property (readonly) KMKBoolean * _Nullable iosScreenRecordingEventEnabled __attribute__((swift_name("iosScreenRecordingEventEnabled")));
@property (readonly) KMKInt * _Nullable iosScreenRecordingEventRetryAttempts __attribute__((swift_name("iosScreenRecordingEventRetryAttempts")));
@property (readonly) id _Nullable iosScreenRecordingEventRetryInterval __attribute__((swift_name("iosScreenRecordingEventRetryInterval")));
@property (readonly) KMKBoolean * _Nullable iosTouchIdChangedEventEnabled __attribute__((swift_name("iosTouchIdChangedEventEnabled")));
@property (readonly) id _Nullable kavSdkBasesUpdateInterval __attribute__((swift_name("kavSdkBasesUpdateInterval")));
@property (readonly) KMKBoolean * _Nullable kavSdkEnabled __attribute__((swift_name("kavSdkEnabled")));
@property (readonly) KMKBoolean * _Nullable kavSdkRegardRiskwareAsMalware __attribute__((swift_name("kavSdkRegardRiskwareAsMalware")));
@property (readonly) id _Nullable kavSdkScanInterval __attribute__((swift_name("kavSdkScanInterval")));
@property (readonly) KMKBoolean * _Nullable keepLogsInFileEnabled __attribute__((swift_name("keepLogsInFileEnabled")));
@property (readonly) KMKBoolean * _Nullable logDataEventEnabled __attribute__((swift_name("logDataEventEnabled")));
@property (readonly) id _Nullable logFileKeepInterval __attribute__((swift_name("logFileKeepInterval")));
@property (readonly) KMKInt * _Nullable maxNumberOfSimilarEventsInStorage __attribute__((swift_name("maxNumberOfSimilarEventsInStorage")));
@property (readonly) id _Nullable netstatInfoTimeInterval __attribute__((swift_name("netstatInfoTimeInterval")));
@property (readonly) KMKBoolean * _Nullable passiveBiometricsEventEnabled __attribute__((swift_name("passiveBiometricsEventEnabled")));
@property (readonly) KMKInt * _Nullable passiveBiometricsMotionEventPartSize __attribute__((swift_name("passiveBiometricsMotionEventPartSize")));
@property (readonly) NSString * _Nullable passiveBiometricsMotionEventRegex __attribute__((swift_name("passiveBiometricsMotionEventRegex")));
@property (readonly) id _Nullable passiveBiometricsMotionEventSleepInterval __attribute__((swift_name("passiveBiometricsMotionEventSleepInterval")));
@property (readonly) id _Nullable passiveBiometricsMotionEventTailInterval __attribute__((swift_name("passiveBiometricsMotionEventTailInterval")));
@property (readonly) id _Nullable passiveBiometricsMotionEventTouchInterval __attribute__((swift_name("passiveBiometricsMotionEventTouchInterval")));
@property (readonly) KMKBoolean * _Nullable processListEventEnabled __attribute__((swift_name("processListEventEnabled")));
@property (readonly) id _Nullable screenShareCheckInterval __attribute__((swift_name("screenShareCheckInterval")));
@property (readonly) KMKBoolean * _Nullable screenShareEventEnabled __attribute__((swift_name("screenShareEventEnabled")));
@property (readonly) KMKBoolean * _Nullable screenshotEventEnabled __attribute__((swift_name("screenshotEventEnabled")));
@property (readonly) NSString * _Nullable secureDeviceTagUrl __attribute__((swift_name("secureDeviceTagUrl")));
@property (readonly) KMKInt * _Nullable sensorRate __attribute__((swift_name("sensorRate")));
@property (readonly) KMKBoolean * _Nullable sessionIdEventEnabled __attribute__((swift_name("sessionIdEventEnabled")));
@property (readonly) NSString * _Nullable statisticsUrl __attribute__((swift_name("statisticsUrl")));
@property (readonly) KMKBoolean * _Nullable uiNavigationEventEnabled __attribute__((swift_name("uiNavigationEventEnabled")));
@property (readonly) KMKBoolean * _Nullable userLoginEventEnabled __attribute__((swift_name("userLoginEventEnabled")));
@property (readonly) KMKBoolean * _Nullable userLogoutEventEnabled __attribute__((swift_name("userLogoutEventEnabled")));
@property (readonly) KMKBoolean * _Nullable voipEventEnabled __attribute__((swift_name("voipEventEnabled")));
@property (readonly) id _Nullable voipScanInterval __attribute__((swift_name("voipScanInterval")));
@property (readonly) KMKInt * _Nullable voipScanRate __attribute__((swift_name("voipScanRate")));
@property (readonly) KMKBoolean * _Nullable vpnEventEnabled __attribute__((swift_name("vpnEventEnabled")));
@property (readonly) KMKBoolean * _Nullable whoCallsEventEnabled __attribute__((swift_name("whoCallsEventEnabled")));
@property (readonly) KMKBoolean * _Nullable whoCallsPhoneNumberSendEnabled __attribute__((swift_name("whoCallsPhoneNumberSendEnabled")));
@property (readonly) KMKBoolean * _Nullable whoCallsSdkEnabled __attribute__((swift_name("whoCallsSdkEnabled")));
@property (readonly) KMKBoolean * _Nullable writeLogsToFileEnabled __attribute__((swift_name("writeLogsToFileEnabled")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Config")))
@interface KMKConfig : KMKBase <KMKIConfig>
- (instancetype)initWithSecureDeviceTagUrl:(NSString *)secureDeviceTagUrl statisticsUrl:(NSString *)statisticsUrl configUpdateUrl:(NSString *)configUpdateUrl clientId:(NSString *)clientId configUpdateInterval:(int64_t)configUpdateInterval logFileKeepInterval:(int64_t)logFileKeepInterval kavSdkScanInterval:(int64_t)kavSdkScanInterval kavSdkBasesUpdateInterval:(int64_t)kavSdkBasesUpdateInterval netstatInfoTimeInterval:(int64_t)netstatInfoTimeInterval screenShareCheckInterval:(int64_t)screenShareCheckInterval execSessionIdRefreshInterval:(int64_t)execSessionIdRefreshInterval androidWebViewEventEnabled:(BOOL)androidWebViewEventEnabled androidDeviceEventEnabled:(BOOL)androidDeviceEventEnabled androidSettingsEventEnabled:(BOOL)androidSettingsEventEnabled processListEventEnabled:(BOOL)processListEventEnabled applicationInfoEventEnabled:(BOOL)applicationInfoEventEnabled geoLocationEventEnabled:(BOOL)geoLocationEventEnabled imsiForDeviceEventEnabled:(BOOL)imsiForDeviceEventEnabled deviceRootDetectionEventEnabled:(BOOL)deviceRootDetectionEventEnabled passiveBiometricsEventEnabled:(BOOL)passiveBiometricsEventEnabled callInfoEventEnabled:(BOOL)callInfoEventEnabled callsPhoneNumberSendEnabled:(BOOL)callsPhoneNumberSendEnabled applicationSignatureEventEnabled:(BOOL)applicationSignatureEventEnabled installedApplicationListEventEnabled:(BOOL)installedApplicationListEventEnabled installedApplicationHashesEventEnabled:(BOOL)installedApplicationHashesEventEnabled installedApplicationAllEventEnabled:(BOOL)installedApplicationAllEventEnabled configEventEnabled:(BOOL)configEventEnabled logDataEventEnabled:(BOOL)logDataEventEnabled screenShareEventEnabled:(BOOL)screenShareEventEnabled screenshotEventEnabled:(BOOL)screenshotEventEnabled connectionsEventEnabled:(BOOL)connectionsEventEnabled sensorRate:(int32_t)sensorRate keepLogsInFileEnabled:(BOOL)keepLogsInFileEnabled writeLogsToFileEnabled:(BOOL)writeLogsToFileEnabled kavSdkEnabled:(BOOL)kavSdkEnabled kavSdkRegardRiskwareAsMalware:(BOOL)kavSdkRegardRiskwareAsMalware whoCallsSdkEnabled:(BOOL)whoCallsSdkEnabled whoCallsEventEnabled:(BOOL)whoCallsEventEnabled whoCallsPhoneNumberSendEnabled:(BOOL)whoCallsPhoneNumberSendEnabled installedApplicationListScanPartSize:(int32_t)installedApplicationListScanPartSize installedApplicationHashesScanPartSize:(int32_t)installedApplicationHashesScanPartSize installedApplicationHashesScanRefreshInterval:(int64_t)installedApplicationHashesScanRefreshInterval installedApplicationAllScanPartSize:(int32_t)installedApplicationAllScanPartSize installedApplicationAllScanRefreshInterval:(int64_t)installedApplicationAllScanRefreshInterval installedApplicationListScanRegex:(NSString *)installedApplicationListScanRegex installedApplicationListScanRegexBase64:(NSString *)installedApplicationListScanRegexBase64 androidRatKeyEventEnabled:(BOOL)androidRatKeyEventEnabled androidRatKeyDetectInterval:(int64_t)androidRatKeyDetectInterval androidRatMotionEventEnabled:(BOOL)androidRatMotionEventEnabled androidRatMotionDetectInterval:(int64_t)androidRatMotionDetectInterval vpnEventEnabled:(BOOL)vpnEventEnabled callActiveStateCheckCount:(int32_t)callActiveStateCheckCount callActiveStateCheckInterval:(int64_t)callActiveStateCheckInterval voipEventEnabled:(BOOL)voipEventEnabled voipScanRate:(int32_t)voipScanRate voipScanInterval:(int64_t)voipScanInterval passiveBiometricsMotionEventPartSize:(int32_t)passiveBiometricsMotionEventPartSize passiveBiometricsMotionEventSleepInterval:(int64_t)passiveBiometricsMotionEventSleepInterval passiveBiometricsMotionEventTouchInterval:(int64_t)passiveBiometricsMotionEventTouchInterval passiveBiometricsMotionEventTailInterval:(int64_t)passiveBiometricsMotionEventTailInterval passiveBiometricsMotionEventRegex:(NSString *)passiveBiometricsMotionEventRegex sessionIdEventEnabled:(BOOL)sessionIdEventEnabled uiNavigationEventEnabled:(BOOL)uiNavigationEventEnabled userLoginEventEnabled:(BOOL)userLoginEventEnabled userLogoutEventEnabled:(BOOL)userLogoutEventEnabled getInstalledApplicationApiEnabled:(BOOL)getInstalledApplicationApiEnabled avScanResultEventEnabled:(BOOL)avScanResultEventEnabled maxNumberOfSimilarEventsInStorage:(int32_t)maxNumberOfSimilarEventsInStorage iosTouchIdChangedEventEnabled:(BOOL)iosTouchIdChangedEventEnabled iosDeviceJailbreakEventEnabled:(BOOL)iosDeviceJailbreakEventEnabled iosFingerprintEventEnabled:(BOOL)iosFingerprintEventEnabled iosScreenRecordingEventEnabled:(BOOL)iosScreenRecordingEventEnabled iosScreenRecordingEventRetryInterval:(int64_t)iosScreenRecordingEventRetryInterval iosScreenRecordingEventRetryAttempts:(int32_t)iosScreenRecordingEventRetryAttempts __attribute__((swift_name("init(secureDeviceTagUrl:statisticsUrl:configUpdateUrl:clientId:configUpdateInterval:logFileKeepInterval:kavSdkScanInterval:kavSdkBasesUpdateInterval:netstatInfoTimeInterval:screenShareCheckInterval:execSessionIdRefreshInterval:androidWebViewEventEnabled:androidDeviceEventEnabled:androidSettingsEventEnabled:processListEventEnabled:applicationInfoEventEnabled:geoLocationEventEnabled:imsiForDeviceEventEnabled:deviceRootDetectionEventEnabled:passiveBiometricsEventEnabled:callInfoEventEnabled:callsPhoneNumberSendEnabled:applicationSignatureEventEnabled:installedApplicationListEventEnabled:installedApplicationHashesEventEnabled:installedApplicationAllEventEnabled:configEventEnabled:logDataEventEnabled:screenShareEventEnabled:screenshotEventEnabled:connectionsEventEnabled:sensorRate:keepLogsInFileEnabled:writeLogsToFileEnabled:kavSdkEnabled:kavSdkRegardRiskwareAsMalware:whoCallsSdkEnabled:whoCallsEventEnabled:whoCallsPhoneNumberSendEnabled:installedApplicationListScanPartSize:installedApplicationHashesScanPartSize:installedApplicationHashesScanRefreshInterval:installedApplicationAllScanPartSize:installedApplicationAllScanRefreshInterval:installedApplicationListScanRegex:installedApplicationListScanRegexBase64:androidRatKeyEventEnabled:androidRatKeyDetectInterval:androidRatMotionEventEnabled:androidRatMotionDetectInterval:vpnEventEnabled:callActiveStateCheckCount:callActiveStateCheckInterval:voipEventEnabled:voipScanRate:voipScanInterval:passiveBiometricsMotionEventPartSize:passiveBiometricsMotionEventSleepInterval:passiveBiometricsMotionEventTouchInterval:passiveBiometricsMotionEventTailInterval:passiveBiometricsMotionEventRegex:sessionIdEventEnabled:uiNavigationEventEnabled:userLoginEventEnabled:userLogoutEventEnabled:getInstalledApplicationApiEnabled:avScanResultEventEnabled:maxNumberOfSimilarEventsInStorage:iosTouchIdChangedEventEnabled:iosDeviceJailbreakEventEnabled:iosFingerprintEventEnabled:iosScreenRecordingEventEnabled:iosScreenRecordingEventRetryInterval:iosScreenRecordingEventRetryAttempts:)"))) __attribute__((objc_designated_initializer));
- (KMKConfig *)doCopySecureDeviceTagUrl:(NSString *)secureDeviceTagUrl statisticsUrl:(NSString *)statisticsUrl configUpdateUrl:(NSString *)configUpdateUrl clientId:(NSString *)clientId configUpdateInterval:(int64_t)configUpdateInterval logFileKeepInterval:(int64_t)logFileKeepInterval kavSdkScanInterval:(int64_t)kavSdkScanInterval kavSdkBasesUpdateInterval:(int64_t)kavSdkBasesUpdateInterval netstatInfoTimeInterval:(int64_t)netstatInfoTimeInterval screenShareCheckInterval:(int64_t)screenShareCheckInterval execSessionIdRefreshInterval:(int64_t)execSessionIdRefreshInterval androidWebViewEventEnabled:(BOOL)androidWebViewEventEnabled androidDeviceEventEnabled:(BOOL)androidDeviceEventEnabled androidSettingsEventEnabled:(BOOL)androidSettingsEventEnabled processListEventEnabled:(BOOL)processListEventEnabled applicationInfoEventEnabled:(BOOL)applicationInfoEventEnabled geoLocationEventEnabled:(BOOL)geoLocationEventEnabled imsiForDeviceEventEnabled:(BOOL)imsiForDeviceEventEnabled deviceRootDetectionEventEnabled:(BOOL)deviceRootDetectionEventEnabled passiveBiometricsEventEnabled:(BOOL)passiveBiometricsEventEnabled callInfoEventEnabled:(BOOL)callInfoEventEnabled callsPhoneNumberSendEnabled:(BOOL)callsPhoneNumberSendEnabled applicationSignatureEventEnabled:(BOOL)applicationSignatureEventEnabled installedApplicationListEventEnabled:(BOOL)installedApplicationListEventEnabled installedApplicationHashesEventEnabled:(BOOL)installedApplicationHashesEventEnabled installedApplicationAllEventEnabled:(BOOL)installedApplicationAllEventEnabled configEventEnabled:(BOOL)configEventEnabled logDataEventEnabled:(BOOL)logDataEventEnabled screenShareEventEnabled:(BOOL)screenShareEventEnabled screenshotEventEnabled:(BOOL)screenshotEventEnabled connectionsEventEnabled:(BOOL)connectionsEventEnabled sensorRate:(int32_t)sensorRate keepLogsInFileEnabled:(BOOL)keepLogsInFileEnabled writeLogsToFileEnabled:(BOOL)writeLogsToFileEnabled kavSdkEnabled:(BOOL)kavSdkEnabled kavSdkRegardRiskwareAsMalware:(BOOL)kavSdkRegardRiskwareAsMalware whoCallsSdkEnabled:(BOOL)whoCallsSdkEnabled whoCallsEventEnabled:(BOOL)whoCallsEventEnabled whoCallsPhoneNumberSendEnabled:(BOOL)whoCallsPhoneNumberSendEnabled installedApplicationListScanPartSize:(int32_t)installedApplicationListScanPartSize installedApplicationHashesScanPartSize:(int32_t)installedApplicationHashesScanPartSize installedApplicationHashesScanRefreshInterval:(int64_t)installedApplicationHashesScanRefreshInterval installedApplicationAllScanPartSize:(int32_t)installedApplicationAllScanPartSize installedApplicationAllScanRefreshInterval:(int64_t)installedApplicationAllScanRefreshInterval installedApplicationListScanRegex:(NSString *)installedApplicationListScanRegex installedApplicationListScanRegexBase64:(NSString *)installedApplicationListScanRegexBase64 androidRatKeyEventEnabled:(BOOL)androidRatKeyEventEnabled androidRatKeyDetectInterval:(int64_t)androidRatKeyDetectInterval androidRatMotionEventEnabled:(BOOL)androidRatMotionEventEnabled androidRatMotionDetectInterval:(int64_t)androidRatMotionDetectInterval vpnEventEnabled:(BOOL)vpnEventEnabled callActiveStateCheckCount:(int32_t)callActiveStateCheckCount callActiveStateCheckInterval:(int64_t)callActiveStateCheckInterval voipEventEnabled:(BOOL)voipEventEnabled voipScanRate:(int32_t)voipScanRate voipScanInterval:(int64_t)voipScanInterval passiveBiometricsMotionEventPartSize:(int32_t)passiveBiometricsMotionEventPartSize passiveBiometricsMotionEventSleepInterval:(int64_t)passiveBiometricsMotionEventSleepInterval passiveBiometricsMotionEventTouchInterval:(int64_t)passiveBiometricsMotionEventTouchInterval passiveBiometricsMotionEventTailInterval:(int64_t)passiveBiometricsMotionEventTailInterval passiveBiometricsMotionEventRegex:(NSString *)passiveBiometricsMotionEventRegex sessionIdEventEnabled:(BOOL)sessionIdEventEnabled uiNavigationEventEnabled:(BOOL)uiNavigationEventEnabled userLoginEventEnabled:(BOOL)userLoginEventEnabled userLogoutEventEnabled:(BOOL)userLogoutEventEnabled getInstalledApplicationApiEnabled:(BOOL)getInstalledApplicationApiEnabled avScanResultEventEnabled:(BOOL)avScanResultEventEnabled maxNumberOfSimilarEventsInStorage:(int32_t)maxNumberOfSimilarEventsInStorage iosTouchIdChangedEventEnabled:(BOOL)iosTouchIdChangedEventEnabled iosDeviceJailbreakEventEnabled:(BOOL)iosDeviceJailbreakEventEnabled iosFingerprintEventEnabled:(BOOL)iosFingerprintEventEnabled iosScreenRecordingEventEnabled:(BOOL)iosScreenRecordingEventEnabled iosScreenRecordingEventRetryInterval:(int64_t)iosScreenRecordingEventRetryInterval iosScreenRecordingEventRetryAttempts:(int32_t)iosScreenRecordingEventRetryAttempts __attribute__((swift_name("doCopy(secureDeviceTagUrl:statisticsUrl:configUpdateUrl:clientId:configUpdateInterval:logFileKeepInterval:kavSdkScanInterval:kavSdkBasesUpdateInterval:netstatInfoTimeInterval:screenShareCheckInterval:execSessionIdRefreshInterval:androidWebViewEventEnabled:androidDeviceEventEnabled:androidSettingsEventEnabled:processListEventEnabled:applicationInfoEventEnabled:geoLocationEventEnabled:imsiForDeviceEventEnabled:deviceRootDetectionEventEnabled:passiveBiometricsEventEnabled:callInfoEventEnabled:callsPhoneNumberSendEnabled:applicationSignatureEventEnabled:installedApplicationListEventEnabled:installedApplicationHashesEventEnabled:installedApplicationAllEventEnabled:configEventEnabled:logDataEventEnabled:screenShareEventEnabled:screenshotEventEnabled:connectionsEventEnabled:sensorRate:keepLogsInFileEnabled:writeLogsToFileEnabled:kavSdkEnabled:kavSdkRegardRiskwareAsMalware:whoCallsSdkEnabled:whoCallsEventEnabled:whoCallsPhoneNumberSendEnabled:installedApplicationListScanPartSize:installedApplicationHashesScanPartSize:installedApplicationHashesScanRefreshInterval:installedApplicationAllScanPartSize:installedApplicationAllScanRefreshInterval:installedApplicationListScanRegex:installedApplicationListScanRegexBase64:androidRatKeyEventEnabled:androidRatKeyDetectInterval:androidRatMotionEventEnabled:androidRatMotionDetectInterval:vpnEventEnabled:callActiveStateCheckCount:callActiveStateCheckInterval:voipEventEnabled:voipScanRate:voipScanInterval:passiveBiometricsMotionEventPartSize:passiveBiometricsMotionEventSleepInterval:passiveBiometricsMotionEventTouchInterval:passiveBiometricsMotionEventTailInterval:passiveBiometricsMotionEventRegex:sessionIdEventEnabled:uiNavigationEventEnabled:userLoginEventEnabled:userLogoutEventEnabled:getInstalledApplicationApiEnabled:avScanResultEventEnabled:maxNumberOfSimilarEventsInStorage:iosTouchIdChangedEventEnabled:iosDeviceJailbreakEventEnabled:iosFingerprintEventEnabled:iosScreenRecordingEventEnabled:iosScreenRecordingEventRetryInterval:iosScreenRecordingEventRetryAttempts:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KMKBoolean *androidDeviceEventEnabled __attribute__((swift_name("androidDeviceEventEnabled")));
@property (readonly) id androidRatKeyDetectInterval __attribute__((swift_name("androidRatKeyDetectInterval")));
@property (readonly) KMKBoolean *androidRatKeyEventEnabled __attribute__((swift_name("androidRatKeyEventEnabled")));
@property (readonly) id androidRatMotionDetectInterval __attribute__((swift_name("androidRatMotionDetectInterval")));
@property (readonly) KMKBoolean *androidRatMotionEventEnabled __attribute__((swift_name("androidRatMotionEventEnabled")));
@property (readonly) KMKBoolean *androidSettingsEventEnabled __attribute__((swift_name("androidSettingsEventEnabled")));
@property (readonly) KMKBoolean *androidWebViewEventEnabled __attribute__((swift_name("androidWebViewEventEnabled")));
@property (readonly) KMKBoolean *applicationInfoEventEnabled __attribute__((swift_name("applicationInfoEventEnabled")));
@property (readonly) KMKBoolean *applicationSignatureEventEnabled __attribute__((swift_name("applicationSignatureEventEnabled")));
@property (readonly) KMKBoolean *avScanResultEventEnabled __attribute__((swift_name("avScanResultEventEnabled")));
@property (readonly) KMKInt *callActiveStateCheckCount __attribute__((swift_name("callActiveStateCheckCount")));
@property (readonly) id callActiveStateCheckInterval __attribute__((swift_name("callActiveStateCheckInterval")));
@property (readonly) KMKBoolean *callInfoEventEnabled __attribute__((swift_name("callInfoEventEnabled")));
@property (readonly) KMKBoolean *callsPhoneNumberSendEnabled __attribute__((swift_name("callsPhoneNumberSendEnabled")));
@property (readonly) NSString *clientId __attribute__((swift_name("clientId")));
@property (readonly) KMKBoolean *configEventEnabled __attribute__((swift_name("configEventEnabled")));
@property (readonly) id configUpdateInterval __attribute__((swift_name("configUpdateInterval")));
@property (readonly) NSString *configUpdateUrl __attribute__((swift_name("configUpdateUrl")));
@property (readonly) KMKBoolean *connectionsEventEnabled __attribute__((swift_name("connectionsEventEnabled")));
@property (readonly) KMKBoolean *deviceRootDetectionEventEnabled __attribute__((swift_name("deviceRootDetectionEventEnabled")));
@property (readonly) id execSessionIdRefreshInterval __attribute__((swift_name("execSessionIdRefreshInterval")));
@property (readonly) KMKBoolean *geoLocationEventEnabled __attribute__((swift_name("geoLocationEventEnabled")));
@property (readonly) KMKBoolean *getInstalledApplicationApiEnabled __attribute__((swift_name("getInstalledApplicationApiEnabled")));
@property (readonly) KMKBoolean *imsiForDeviceEventEnabled __attribute__((swift_name("imsiForDeviceEventEnabled")));
@property (readonly) KMKBoolean *installedApplicationAllEventEnabled __attribute__((swift_name("installedApplicationAllEventEnabled")));
@property (readonly) KMKInt *installedApplicationAllScanPartSize __attribute__((swift_name("installedApplicationAllScanPartSize")));
@property (readonly) id installedApplicationAllScanRefreshInterval __attribute__((swift_name("installedApplicationAllScanRefreshInterval")));
@property (readonly) KMKBoolean *installedApplicationHashesEventEnabled __attribute__((swift_name("installedApplicationHashesEventEnabled")));
@property (readonly) KMKInt *installedApplicationHashesScanPartSize __attribute__((swift_name("installedApplicationHashesScanPartSize")));
@property (readonly) id installedApplicationHashesScanRefreshInterval __attribute__((swift_name("installedApplicationHashesScanRefreshInterval")));
@property (readonly) KMKBoolean *installedApplicationListEventEnabled __attribute__((swift_name("installedApplicationListEventEnabled")));
@property (readonly) KMKInt *installedApplicationListScanPartSize __attribute__((swift_name("installedApplicationListScanPartSize")));
@property (readonly) NSString *installedApplicationListScanRegex __attribute__((swift_name("installedApplicationListScanRegex")));
@property (readonly) NSString *installedApplicationListScanRegexBase64 __attribute__((swift_name("installedApplicationListScanRegexBase64")));
@property (readonly) KMKBoolean *iosDeviceJailbreakEventEnabled __attribute__((swift_name("iosDeviceJailbreakEventEnabled")));
@property (readonly) KMKBoolean *iosFingerprintEventEnabled __attribute__((swift_name("iosFingerprintEventEnabled")));
@property (readonly) KMKBoolean *iosScreenRecordingEventEnabled __attribute__((swift_name("iosScreenRecordingEventEnabled")));
@property (readonly) KMKInt *iosScreenRecordingEventRetryAttempts __attribute__((swift_name("iosScreenRecordingEventRetryAttempts")));
@property (readonly) id iosScreenRecordingEventRetryInterval __attribute__((swift_name("iosScreenRecordingEventRetryInterval")));
@property (readonly) KMKBoolean *iosTouchIdChangedEventEnabled __attribute__((swift_name("iosTouchIdChangedEventEnabled")));
@property (readonly) id kavSdkBasesUpdateInterval __attribute__((swift_name("kavSdkBasesUpdateInterval")));
@property (readonly) KMKBoolean *kavSdkEnabled __attribute__((swift_name("kavSdkEnabled")));
@property (readonly) KMKBoolean *kavSdkRegardRiskwareAsMalware __attribute__((swift_name("kavSdkRegardRiskwareAsMalware")));
@property (readonly) id kavSdkScanInterval __attribute__((swift_name("kavSdkScanInterval")));
@property (readonly) KMKBoolean *keepLogsInFileEnabled __attribute__((swift_name("keepLogsInFileEnabled")));
@property (readonly) KMKBoolean *logDataEventEnabled __attribute__((swift_name("logDataEventEnabled")));
@property (readonly) id logFileKeepInterval __attribute__((swift_name("logFileKeepInterval")));
@property (readonly) KMKInt *maxNumberOfSimilarEventsInStorage __attribute__((swift_name("maxNumberOfSimilarEventsInStorage")));
@property (readonly) id netstatInfoTimeInterval __attribute__((swift_name("netstatInfoTimeInterval")));
@property (readonly) KMKBoolean *passiveBiometricsEventEnabled __attribute__((swift_name("passiveBiometricsEventEnabled")));
@property (readonly) KMKInt *passiveBiometricsMotionEventPartSize __attribute__((swift_name("passiveBiometricsMotionEventPartSize")));
@property (readonly) NSString *passiveBiometricsMotionEventRegex __attribute__((swift_name("passiveBiometricsMotionEventRegex")));
@property (readonly) id passiveBiometricsMotionEventSleepInterval __attribute__((swift_name("passiveBiometricsMotionEventSleepInterval")));
@property (readonly) id passiveBiometricsMotionEventTailInterval __attribute__((swift_name("passiveBiometricsMotionEventTailInterval")));
@property (readonly) id passiveBiometricsMotionEventTouchInterval __attribute__((swift_name("passiveBiometricsMotionEventTouchInterval")));
@property (readonly) KMKBoolean *processListEventEnabled __attribute__((swift_name("processListEventEnabled")));
@property (readonly) id screenShareCheckInterval __attribute__((swift_name("screenShareCheckInterval")));
@property (readonly) KMKBoolean *screenShareEventEnabled __attribute__((swift_name("screenShareEventEnabled")));
@property (readonly) KMKBoolean *screenshotEventEnabled __attribute__((swift_name("screenshotEventEnabled")));
@property (readonly) NSString *secureDeviceTagUrl __attribute__((swift_name("secureDeviceTagUrl")));
@property (readonly) KMKInt *sensorRate __attribute__((swift_name("sensorRate")));
@property (readonly) KMKBoolean *sessionIdEventEnabled __attribute__((swift_name("sessionIdEventEnabled")));
@property (readonly) NSString *statisticsUrl __attribute__((swift_name("statisticsUrl")));
@property (readonly) KMKBoolean *uiNavigationEventEnabled __attribute__((swift_name("uiNavigationEventEnabled")));
@property (readonly) KMKBoolean *userLoginEventEnabled __attribute__((swift_name("userLoginEventEnabled")));
@property (readonly) KMKBoolean *userLogoutEventEnabled __attribute__((swift_name("userLogoutEventEnabled")));
@property (readonly) KMKBoolean *voipEventEnabled __attribute__((swift_name("voipEventEnabled")));
@property (readonly) id voipScanInterval __attribute__((swift_name("voipScanInterval")));
@property (readonly) KMKInt *voipScanRate __attribute__((swift_name("voipScanRate")));
@property (readonly) KMKBoolean *vpnEventEnabled __attribute__((swift_name("vpnEventEnabled")));
@property (readonly) KMKBoolean *whoCallsEventEnabled __attribute__((swift_name("whoCallsEventEnabled")));
@property (readonly) KMKBoolean *whoCallsPhoneNumberSendEnabled __attribute__((swift_name("whoCallsPhoneNumberSendEnabled")));
@property (readonly) KMKBoolean *whoCallsSdkEnabled __attribute__((swift_name("whoCallsSdkEnabled")));
@property (readonly) KMKBoolean *writeLogsToFileEnabled __attribute__((swift_name("writeLogsToFileEnabled")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DurationNullableSerializer")))
@interface KMKDurationNullableSerializer : KMKBase <KMKKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)durationNullableSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKDurationNullableSerializer *shared __attribute__((swift_name("shared")));
- (id _Nullable)deserializeDecoder:(id<KMKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<KMKKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<KMKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DurationSerializer")))
@interface KMKDurationSerializer : KMKBase <KMKKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)durationSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKDurationSerializer *shared __attribute__((swift_name("shared")));
- (id)deserializeDecoder:(id<KMKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<KMKKotlinx_serialization_coreEncoder>)encoder value:(id)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<KMKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExternalConfig")))
@interface KMKExternalConfig : KMKBase <KMKIConfig>
- (instancetype)initWithSecureDeviceTagUrl:(NSString * _Nullable)secureDeviceTagUrl statisticsUrl:(NSString * _Nullable)statisticsUrl configUpdateUrl:(NSString * _Nullable)configUpdateUrl clientId:(NSString * _Nullable)clientId configUpdateInterval:(id _Nullable)configUpdateInterval execSessionIdRefreshInterval:(id _Nullable)execSessionIdRefreshInterval logFileKeepInterval:(id _Nullable)logFileKeepInterval keepLogsInFileEnabled:(KMKBoolean * _Nullable)keepLogsInFileEnabled writeLogsToFileEnabled:(KMKBoolean * _Nullable)writeLogsToFileEnabled configEventEnabled:(KMKBoolean * _Nullable)configEventEnabled logDataEventEnabled:(KMKBoolean * _Nullable)logDataEventEnabled applicationInfoEventEnabled:(KMKBoolean * _Nullable)applicationInfoEventEnabled sessionIdEventEnabled:(KMKBoolean * _Nullable)sessionIdEventEnabled uiNavigationEventEnabled:(KMKBoolean * _Nullable)uiNavigationEventEnabled userLoginEventEnabled:(KMKBoolean * _Nullable)userLoginEventEnabled userLogoutEventEnabled:(KMKBoolean * _Nullable)userLogoutEventEnabled vpnEventEnabled:(KMKBoolean * _Nullable)vpnEventEnabled screenshotEventEnabled:(KMKBoolean * _Nullable)screenshotEventEnabled iosScreenshotEventEnabled:(KMKBoolean * _Nullable)iosScreenshotEventEnabled geoLocationEventEnabled:(KMKBoolean * _Nullable)geoLocationEventEnabled iosGeoLocationEventEnabled:(KMKBoolean * _Nullable)iosGeoLocationEventEnabled applicationSignatureEventEnabled:(KMKBoolean * _Nullable)applicationSignatureEventEnabled iosApplicationSignatureEventEnabled:(KMKBoolean * _Nullable)iosApplicationSignatureEventEnabled callInfoEventEnabled:(KMKBoolean * _Nullable)callInfoEventEnabled iosCallInfoEventEnabled:(KMKBoolean * _Nullable)iosCallInfoEventEnabled callActiveStateCheckCount:(KMKInt * _Nullable)callActiveStateCheckCount iosCallActiveStateCheckCount:(KMKInt * _Nullable)iosCallActiveStateCheckCount callActiveStateCheckInterval:(id _Nullable)callActiveStateCheckInterval iosCallActiveStateCheckInterval:(id _Nullable)iosCallActiveStateCheckInterval kavSdkScanInterval:(id _Nullable)kavSdkScanInterval kavSdkBasesUpdateInterval:(id _Nullable)kavSdkBasesUpdateInterval netstatInfoTimeInterval:(id _Nullable)netstatInfoTimeInterval screenShareCheckInterval:(id _Nullable)screenShareCheckInterval androidWebViewEventEnabled:(KMKBoolean * _Nullable)androidWebViewEventEnabled androidDeviceEventEnabled:(KMKBoolean * _Nullable)androidDeviceEventEnabled androidSettingsEventEnabled:(KMKBoolean * _Nullable)androidSettingsEventEnabled processListEventEnabled:(KMKBoolean * _Nullable)processListEventEnabled imsiForDeviceEventEnabled:(KMKBoolean * _Nullable)imsiForDeviceEventEnabled deviceRootDetectionEventEnabled:(KMKBoolean * _Nullable)deviceRootDetectionEventEnabled passiveBiometricsEventEnabled:(KMKBoolean * _Nullable)passiveBiometricsEventEnabled callsPhoneNumberSendEnabled:(KMKBoolean * _Nullable)callsPhoneNumberSendEnabled installedApplicationListEventEnabled:(KMKBoolean * _Nullable)installedApplicationListEventEnabled installedApplicationHashesEventEnabled:(KMKBoolean * _Nullable)installedApplicationHashesEventEnabled installedApplicationAllEventEnabled:(KMKBoolean * _Nullable)installedApplicationAllEventEnabled screenShareEventEnabled:(KMKBoolean * _Nullable)screenShareEventEnabled connectionsEventEnabled:(KMKBoolean * _Nullable)connectionsEventEnabled sensorRate:(KMKInt * _Nullable)sensorRate kavSdkEnabled:(KMKBoolean * _Nullable)kavSdkEnabled kavSdkRegardRiskwareAsMalware:(KMKBoolean * _Nullable)kavSdkRegardRiskwareAsMalware whoCallsSdkEnabled:(KMKBoolean * _Nullable)whoCallsSdkEnabled whoCallsEventEnabled:(KMKBoolean * _Nullable)whoCallsEventEnabled whoCallsPhoneNumberSendEnabled:(KMKBoolean * _Nullable)whoCallsPhoneNumberSendEnabled installedApplicationListScanPartSize:(KMKInt * _Nullable)installedApplicationListScanPartSize installedApplicationHashesScanPartSize:(KMKInt * _Nullable)installedApplicationHashesScanPartSize installedApplicationHashesScanRefreshInterval:(id _Nullable)installedApplicationHashesScanRefreshInterval installedApplicationAllScanPartSize:(KMKInt * _Nullable)installedApplicationAllScanPartSize installedApplicationAllScanRefreshInterval:(id _Nullable)installedApplicationAllScanRefreshInterval installedApplicationListScanRegex:(NSString * _Nullable)installedApplicationListScanRegex installedApplicationListScanRegexBase64:(NSString * _Nullable)installedApplicationListScanRegexBase64 androidRatKeyEventEnabled:(KMKBoolean * _Nullable)androidRatKeyEventEnabled androidRatKeyDetectInterval:(id _Nullable)androidRatKeyDetectInterval androidRatMotionEventEnabled:(KMKBoolean * _Nullable)androidRatMotionEventEnabled androidRatMotionDetectInterval:(id _Nullable)androidRatMotionDetectInterval voipEventEnabled:(KMKBoolean * _Nullable)voipEventEnabled voipScanRate:(KMKInt * _Nullable)voipScanRate voipScanInterval:(id _Nullable)voipScanInterval passiveBiometricsMotionEventPartSize:(KMKInt * _Nullable)passiveBiometricsMotionEventPartSize passiveBiometricsMotionEventSleepInterval:(id _Nullable)passiveBiometricsMotionEventSleepInterval passiveBiometricsMotionEventTouchInterval:(id _Nullable)passiveBiometricsMotionEventTouchInterval passiveBiometricsMotionEventTailInterval:(id _Nullable)passiveBiometricsMotionEventTailInterval passiveBiometricsMotionEventRegex:(NSString * _Nullable)passiveBiometricsMotionEventRegex getInstalledApplicationApiEnabled:(KMKBoolean * _Nullable)getInstalledApplicationApiEnabled avScanResultEventEnabled:(KMKBoolean * _Nullable)avScanResultEventEnabled maxNumberOfSimilarEventsInStorage:(KMKInt * _Nullable)maxNumberOfSimilarEventsInStorage iosTouchIdChangedEventEnabled:(KMKBoolean * _Nullable)iosTouchIdChangedEventEnabled iosDeviceJailbreakEventEnabled:(KMKBoolean * _Nullable)iosDeviceJailbreakEventEnabled iosFingerprintEventEnabled:(KMKBoolean * _Nullable)iosFingerprintEventEnabled iosScreenRecordingEventEnabled:(KMKBoolean * _Nullable)iosScreenRecordingEventEnabled iosScreenRecordingEventRetryInterval:(id _Nullable)iosScreenRecordingEventRetryInterval iosScreenRecordingEventRetryAttempts:(KMKInt * _Nullable)iosScreenRecordingEventRetryAttempts __attribute__((swift_name("init(secureDeviceTagUrl:statisticsUrl:configUpdateUrl:clientId:configUpdateInterval:execSessionIdRefreshInterval:logFileKeepInterval:keepLogsInFileEnabled:writeLogsToFileEnabled:configEventEnabled:logDataEventEnabled:applicationInfoEventEnabled:sessionIdEventEnabled:uiNavigationEventEnabled:userLoginEventEnabled:userLogoutEventEnabled:vpnEventEnabled:screenshotEventEnabled:iosScreenshotEventEnabled:geoLocationEventEnabled:iosGeoLocationEventEnabled:applicationSignatureEventEnabled:iosApplicationSignatureEventEnabled:callInfoEventEnabled:iosCallInfoEventEnabled:callActiveStateCheckCount:iosCallActiveStateCheckCount:callActiveStateCheckInterval:iosCallActiveStateCheckInterval:kavSdkScanInterval:kavSdkBasesUpdateInterval:netstatInfoTimeInterval:screenShareCheckInterval:androidWebViewEventEnabled:androidDeviceEventEnabled:androidSettingsEventEnabled:processListEventEnabled:imsiForDeviceEventEnabled:deviceRootDetectionEventEnabled:passiveBiometricsEventEnabled:callsPhoneNumberSendEnabled:installedApplicationListEventEnabled:installedApplicationHashesEventEnabled:installedApplicationAllEventEnabled:screenShareEventEnabled:connectionsEventEnabled:sensorRate:kavSdkEnabled:kavSdkRegardRiskwareAsMalware:whoCallsSdkEnabled:whoCallsEventEnabled:whoCallsPhoneNumberSendEnabled:installedApplicationListScanPartSize:installedApplicationHashesScanPartSize:installedApplicationHashesScanRefreshInterval:installedApplicationAllScanPartSize:installedApplicationAllScanRefreshInterval:installedApplicationListScanRegex:installedApplicationListScanRegexBase64:androidRatKeyEventEnabled:androidRatKeyDetectInterval:androidRatMotionEventEnabled:androidRatMotionDetectInterval:voipEventEnabled:voipScanRate:voipScanInterval:passiveBiometricsMotionEventPartSize:passiveBiometricsMotionEventSleepInterval:passiveBiometricsMotionEventTouchInterval:passiveBiometricsMotionEventTailInterval:passiveBiometricsMotionEventRegex:getInstalledApplicationApiEnabled:avScanResultEventEnabled:maxNumberOfSimilarEventsInStorage:iosTouchIdChangedEventEnabled:iosDeviceJailbreakEventEnabled:iosFingerprintEventEnabled:iosScreenRecordingEventEnabled:iosScreenRecordingEventRetryInterval:iosScreenRecordingEventRetryAttempts:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMKExternalConfigCompanion *companion __attribute__((swift_name("companion")));
- (KMKExternalConfig *)doCopySecureDeviceTagUrl:(NSString * _Nullable)secureDeviceTagUrl statisticsUrl:(NSString * _Nullable)statisticsUrl configUpdateUrl:(NSString * _Nullable)configUpdateUrl clientId:(NSString * _Nullable)clientId configUpdateInterval:(id _Nullable)configUpdateInterval execSessionIdRefreshInterval:(id _Nullable)execSessionIdRefreshInterval logFileKeepInterval:(id _Nullable)logFileKeepInterval keepLogsInFileEnabled:(KMKBoolean * _Nullable)keepLogsInFileEnabled writeLogsToFileEnabled:(KMKBoolean * _Nullable)writeLogsToFileEnabled configEventEnabled:(KMKBoolean * _Nullable)configEventEnabled logDataEventEnabled:(KMKBoolean * _Nullable)logDataEventEnabled applicationInfoEventEnabled:(KMKBoolean * _Nullable)applicationInfoEventEnabled sessionIdEventEnabled:(KMKBoolean * _Nullable)sessionIdEventEnabled uiNavigationEventEnabled:(KMKBoolean * _Nullable)uiNavigationEventEnabled userLoginEventEnabled:(KMKBoolean * _Nullable)userLoginEventEnabled userLogoutEventEnabled:(KMKBoolean * _Nullable)userLogoutEventEnabled vpnEventEnabled:(KMKBoolean * _Nullable)vpnEventEnabled screenshotEventEnabled:(KMKBoolean * _Nullable)screenshotEventEnabled iosScreenshotEventEnabled:(KMKBoolean * _Nullable)iosScreenshotEventEnabled geoLocationEventEnabled:(KMKBoolean * _Nullable)geoLocationEventEnabled iosGeoLocationEventEnabled:(KMKBoolean * _Nullable)iosGeoLocationEventEnabled applicationSignatureEventEnabled:(KMKBoolean * _Nullable)applicationSignatureEventEnabled iosApplicationSignatureEventEnabled:(KMKBoolean * _Nullable)iosApplicationSignatureEventEnabled callInfoEventEnabled:(KMKBoolean * _Nullable)callInfoEventEnabled iosCallInfoEventEnabled:(KMKBoolean * _Nullable)iosCallInfoEventEnabled callActiveStateCheckCount:(KMKInt * _Nullable)callActiveStateCheckCount iosCallActiveStateCheckCount:(KMKInt * _Nullable)iosCallActiveStateCheckCount callActiveStateCheckInterval:(id _Nullable)callActiveStateCheckInterval iosCallActiveStateCheckInterval:(id _Nullable)iosCallActiveStateCheckInterval kavSdkScanInterval:(id _Nullable)kavSdkScanInterval kavSdkBasesUpdateInterval:(id _Nullable)kavSdkBasesUpdateInterval netstatInfoTimeInterval:(id _Nullable)netstatInfoTimeInterval screenShareCheckInterval:(id _Nullable)screenShareCheckInterval androidWebViewEventEnabled:(KMKBoolean * _Nullable)androidWebViewEventEnabled androidDeviceEventEnabled:(KMKBoolean * _Nullable)androidDeviceEventEnabled androidSettingsEventEnabled:(KMKBoolean * _Nullable)androidSettingsEventEnabled processListEventEnabled:(KMKBoolean * _Nullable)processListEventEnabled imsiForDeviceEventEnabled:(KMKBoolean * _Nullable)imsiForDeviceEventEnabled deviceRootDetectionEventEnabled:(KMKBoolean * _Nullable)deviceRootDetectionEventEnabled passiveBiometricsEventEnabled:(KMKBoolean * _Nullable)passiveBiometricsEventEnabled callsPhoneNumberSendEnabled:(KMKBoolean * _Nullable)callsPhoneNumberSendEnabled installedApplicationListEventEnabled:(KMKBoolean * _Nullable)installedApplicationListEventEnabled installedApplicationHashesEventEnabled:(KMKBoolean * _Nullable)installedApplicationHashesEventEnabled installedApplicationAllEventEnabled:(KMKBoolean * _Nullable)installedApplicationAllEventEnabled screenShareEventEnabled:(KMKBoolean * _Nullable)screenShareEventEnabled connectionsEventEnabled:(KMKBoolean * _Nullable)connectionsEventEnabled sensorRate:(KMKInt * _Nullable)sensorRate kavSdkEnabled:(KMKBoolean * _Nullable)kavSdkEnabled kavSdkRegardRiskwareAsMalware:(KMKBoolean * _Nullable)kavSdkRegardRiskwareAsMalware whoCallsSdkEnabled:(KMKBoolean * _Nullable)whoCallsSdkEnabled whoCallsEventEnabled:(KMKBoolean * _Nullable)whoCallsEventEnabled whoCallsPhoneNumberSendEnabled:(KMKBoolean * _Nullable)whoCallsPhoneNumberSendEnabled installedApplicationListScanPartSize:(KMKInt * _Nullable)installedApplicationListScanPartSize installedApplicationHashesScanPartSize:(KMKInt * _Nullable)installedApplicationHashesScanPartSize installedApplicationHashesScanRefreshInterval:(id _Nullable)installedApplicationHashesScanRefreshInterval installedApplicationAllScanPartSize:(KMKInt * _Nullable)installedApplicationAllScanPartSize installedApplicationAllScanRefreshInterval:(id _Nullable)installedApplicationAllScanRefreshInterval installedApplicationListScanRegex:(NSString * _Nullable)installedApplicationListScanRegex installedApplicationListScanRegexBase64:(NSString * _Nullable)installedApplicationListScanRegexBase64 androidRatKeyEventEnabled:(KMKBoolean * _Nullable)androidRatKeyEventEnabled androidRatKeyDetectInterval:(id _Nullable)androidRatKeyDetectInterval androidRatMotionEventEnabled:(KMKBoolean * _Nullable)androidRatMotionEventEnabled androidRatMotionDetectInterval:(id _Nullable)androidRatMotionDetectInterval voipEventEnabled:(KMKBoolean * _Nullable)voipEventEnabled voipScanRate:(KMKInt * _Nullable)voipScanRate voipScanInterval:(id _Nullable)voipScanInterval passiveBiometricsMotionEventPartSize:(KMKInt * _Nullable)passiveBiometricsMotionEventPartSize passiveBiometricsMotionEventSleepInterval:(id _Nullable)passiveBiometricsMotionEventSleepInterval passiveBiometricsMotionEventTouchInterval:(id _Nullable)passiveBiometricsMotionEventTouchInterval passiveBiometricsMotionEventTailInterval:(id _Nullable)passiveBiometricsMotionEventTailInterval passiveBiometricsMotionEventRegex:(NSString * _Nullable)passiveBiometricsMotionEventRegex getInstalledApplicationApiEnabled:(KMKBoolean * _Nullable)getInstalledApplicationApiEnabled avScanResultEventEnabled:(KMKBoolean * _Nullable)avScanResultEventEnabled maxNumberOfSimilarEventsInStorage:(KMKInt * _Nullable)maxNumberOfSimilarEventsInStorage iosTouchIdChangedEventEnabled:(KMKBoolean * _Nullable)iosTouchIdChangedEventEnabled iosDeviceJailbreakEventEnabled:(KMKBoolean * _Nullable)iosDeviceJailbreakEventEnabled iosFingerprintEventEnabled:(KMKBoolean * _Nullable)iosFingerprintEventEnabled iosScreenRecordingEventEnabled:(KMKBoolean * _Nullable)iosScreenRecordingEventEnabled iosScreenRecordingEventRetryInterval:(id _Nullable)iosScreenRecordingEventRetryInterval iosScreenRecordingEventRetryAttempts:(KMKInt * _Nullable)iosScreenRecordingEventRetryAttempts __attribute__((swift_name("doCopy(secureDeviceTagUrl:statisticsUrl:configUpdateUrl:clientId:configUpdateInterval:execSessionIdRefreshInterval:logFileKeepInterval:keepLogsInFileEnabled:writeLogsToFileEnabled:configEventEnabled:logDataEventEnabled:applicationInfoEventEnabled:sessionIdEventEnabled:uiNavigationEventEnabled:userLoginEventEnabled:userLogoutEventEnabled:vpnEventEnabled:screenshotEventEnabled:iosScreenshotEventEnabled:geoLocationEventEnabled:iosGeoLocationEventEnabled:applicationSignatureEventEnabled:iosApplicationSignatureEventEnabled:callInfoEventEnabled:iosCallInfoEventEnabled:callActiveStateCheckCount:iosCallActiveStateCheckCount:callActiveStateCheckInterval:iosCallActiveStateCheckInterval:kavSdkScanInterval:kavSdkBasesUpdateInterval:netstatInfoTimeInterval:screenShareCheckInterval:androidWebViewEventEnabled:androidDeviceEventEnabled:androidSettingsEventEnabled:processListEventEnabled:imsiForDeviceEventEnabled:deviceRootDetectionEventEnabled:passiveBiometricsEventEnabled:callsPhoneNumberSendEnabled:installedApplicationListEventEnabled:installedApplicationHashesEventEnabled:installedApplicationAllEventEnabled:screenShareEventEnabled:connectionsEventEnabled:sensorRate:kavSdkEnabled:kavSdkRegardRiskwareAsMalware:whoCallsSdkEnabled:whoCallsEventEnabled:whoCallsPhoneNumberSendEnabled:installedApplicationListScanPartSize:installedApplicationHashesScanPartSize:installedApplicationHashesScanRefreshInterval:installedApplicationAllScanPartSize:installedApplicationAllScanRefreshInterval:installedApplicationListScanRegex:installedApplicationListScanRegexBase64:androidRatKeyEventEnabled:androidRatKeyDetectInterval:androidRatMotionEventEnabled:androidRatMotionDetectInterval:voipEventEnabled:voipScanRate:voipScanInterval:passiveBiometricsMotionEventPartSize:passiveBiometricsMotionEventSleepInterval:passiveBiometricsMotionEventTouchInterval:passiveBiometricsMotionEventTailInterval:passiveBiometricsMotionEventRegex:getInstalledApplicationApiEnabled:avScanResultEventEnabled:maxNumberOfSimilarEventsInStorage:iosTouchIdChangedEventEnabled:iosDeviceJailbreakEventEnabled:iosFingerprintEventEnabled:iosScreenRecordingEventEnabled:iosScreenRecordingEventRetryInterval:iosScreenRecordingEventRetryAttempts:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/InvertBooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="androidDeviceEventDisabled")
*/
@property (readonly) KMKBoolean * _Nullable androidDeviceEventEnabled __attribute__((swift_name("androidDeviceEventEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/DurationNullableSerializer))
 *   kotlinx.serialization.SerialName(value="androidRatKeyDetectInterval2")
*/
@property (readonly) id _Nullable androidRatKeyDetectInterval __attribute__((swift_name("androidRatKeyDetectInterval")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/InvertBooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="androidRatKeyEventDisabled2")
*/
@property (readonly) KMKBoolean * _Nullable androidRatKeyEventEnabled __attribute__((swift_name("androidRatKeyEventEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/DurationNullableSerializer))
 *   kotlinx.serialization.SerialName(value="androidRatMotionDetectInterval2")
*/
@property (readonly) id _Nullable androidRatMotionDetectInterval __attribute__((swift_name("androidRatMotionDetectInterval")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/InvertBooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="androidRatMotionEventDisabled2")
*/
@property (readonly) KMKBoolean * _Nullable androidRatMotionEventEnabled __attribute__((swift_name("androidRatMotionEventEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/InvertBooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="androidSettingsEventDisabled")
*/
@property (readonly) KMKBoolean * _Nullable androidSettingsEventEnabled __attribute__((swift_name("androidSettingsEventEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/InvertBooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="androidWebViewEventDisabled")
*/
@property (readonly) KMKBoolean * _Nullable androidWebViewEventEnabled __attribute__((swift_name("androidWebViewEventEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/InvertBooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="applicationInfoEventDisabled")
*/
@property (readonly) KMKBoolean * _Nullable applicationInfoEventEnabled __attribute__((swift_name("applicationInfoEventEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/InvertBooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="androidApplicationSignatureEventDisabled")
*/
@property (readonly) KMKBoolean * _Nullable applicationSignatureEventEnabled __attribute__((swift_name("applicationSignatureEventEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/InvertBooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="avScanResultEventDisabled")
*/
@property (readonly) KMKBoolean * _Nullable avScanResultEventEnabled __attribute__((swift_name("avScanResultEventEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/IntFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="callActiveStateCheckCount")
*/
@property (readonly) KMKInt * _Nullable callActiveStateCheckCount __attribute__((swift_name("callActiveStateCheckCount")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/DurationNullableSerializer))
 *   kotlinx.serialization.SerialName(value="callActiveStateCheckInterval")
*/
@property (readonly) id _Nullable callActiveStateCheckInterval __attribute__((swift_name("callActiveStateCheckInterval")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/InvertBooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="callsDetectionEventDisabled")
*/
@property (readonly) KMKBoolean * _Nullable callInfoEventEnabled __attribute__((swift_name("callInfoEventEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/InvertBooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="callsPhonenumberSendDisabled")
*/
@property (readonly) KMKBoolean * _Nullable callsPhoneNumberSendEnabled __attribute__((swift_name("callsPhoneNumberSendEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="clientId")
*/
@property (readonly) NSString * _Nullable clientId __attribute__((swift_name("clientId")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/InvertBooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="configEventDisabled")
*/
@property (readonly) KMKBoolean * _Nullable configEventEnabled __attribute__((swift_name("configEventEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/DurationNullableSerializer))
 *   kotlinx.serialization.SerialName(value="configUpdateInterval")
*/
@property (readonly) id _Nullable configUpdateInterval __attribute__((swift_name("configUpdateInterval")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="configUpdateUrl")
*/
@property (readonly) NSString * _Nullable configUpdateUrl __attribute__((swift_name("configUpdateUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/InvertBooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="connectionsEventDisabled")
*/
@property (readonly) KMKBoolean * _Nullable connectionsEventEnabled __attribute__((swift_name("connectionsEventEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/InvertBooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="deviceRootDetectionEventDisabled")
*/
@property (readonly) KMKBoolean * _Nullable deviceRootDetectionEventEnabled __attribute__((swift_name("deviceRootDetectionEventEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/DurationNullableSerializer))
 *   kotlinx.serialization.SerialName(value="execSessionTimeout")
*/
@property (readonly) id _Nullable execSessionIdRefreshInterval __attribute__((swift_name("execSessionIdRefreshInterval")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/InvertBooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="androidGeoLocationEventDisabled")
*/
@property (readonly) KMKBoolean * _Nullable geoLocationEventEnabled __attribute__((swift_name("geoLocationEventEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/InvertBooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="getInstalledApplicationApiDisabled")
*/
@property (readonly) KMKBoolean * _Nullable getInstalledApplicationApiEnabled __attribute__((swift_name("getInstalledApplicationApiEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/InvertBooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="imsiForDeviceEventDisabled")
*/
@property (readonly) KMKBoolean * _Nullable imsiForDeviceEventEnabled __attribute__((swift_name("imsiForDeviceEventEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/InvertBooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="installedApplicationAllEventDisabled")
*/
@property (readonly) KMKBoolean * _Nullable installedApplicationAllEventEnabled __attribute__((swift_name("installedApplicationAllEventEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/IntFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="installedApplicationAllScanPartSize")
*/
@property (readonly) KMKInt * _Nullable installedApplicationAllScanPartSize __attribute__((swift_name("installedApplicationAllScanPartSize")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/DurationNullableSerializer))
 *   kotlinx.serialization.SerialName(value="installedApplicationAllScanRefreshInterval")
*/
@property (readonly) id _Nullable installedApplicationAllScanRefreshInterval __attribute__((swift_name("installedApplicationAllScanRefreshInterval")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/InvertBooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="installedApplicationHashesEventDisabled")
*/
@property (readonly) KMKBoolean * _Nullable installedApplicationHashesEventEnabled __attribute__((swift_name("installedApplicationHashesEventEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/IntFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="installedApplicationHashesScanPartSize")
*/
@property (readonly) KMKInt * _Nullable installedApplicationHashesScanPartSize __attribute__((swift_name("installedApplicationHashesScanPartSize")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/DurationNullableSerializer))
 *   kotlinx.serialization.SerialName(value="installedApplicationHashesScanRefreshInterval")
*/
@property (readonly) id _Nullable installedApplicationHashesScanRefreshInterval __attribute__((swift_name("installedApplicationHashesScanRefreshInterval")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/InvertBooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="installedApplicationListEventDisabled")
*/
@property (readonly) KMKBoolean * _Nullable installedApplicationListEventEnabled __attribute__((swift_name("installedApplicationListEventEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/IntFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="installedApplicationListScanPartSize")
*/
@property (readonly) KMKInt * _Nullable installedApplicationListScanPartSize __attribute__((swift_name("installedApplicationListScanPartSize")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="installedApplicationListRegex")
*/
@property (readonly) NSString * _Nullable installedApplicationListScanRegex __attribute__((swift_name("installedApplicationListScanRegex")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="installedApplicationListRegexBase64")
*/
@property (readonly) NSString * _Nullable installedApplicationListScanRegexBase64 __attribute__((swift_name("installedApplicationListScanRegexBase64")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/InvertBooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="iosApplicationSignatureEventDisabled")
*/
@property (readonly) KMKBoolean * _Nullable iosApplicationSignatureEventEnabled __attribute__((swift_name("iosApplicationSignatureEventEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/IntFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="iosCallActiveStateCheckCount")
*/
@property (readonly) KMKInt * _Nullable iosCallActiveStateCheckCount __attribute__((swift_name("iosCallActiveStateCheckCount")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/DurationNullableSerializer))
 *   kotlinx.serialization.SerialName(value="iosCallActiveStateCheckInterval")
*/
@property (readonly) id _Nullable iosCallActiveStateCheckInterval __attribute__((swift_name("iosCallActiveStateCheckInterval")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/InvertBooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="iosCallInfoEventDisabled")
*/
@property (readonly) KMKBoolean * _Nullable iosCallInfoEventEnabled __attribute__((swift_name("iosCallInfoEventEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/InvertBooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="deviceJailbreakEventDisabled")
*/
@property (readonly) KMKBoolean * _Nullable iosDeviceJailbreakEventEnabled __attribute__((swift_name("iosDeviceJailbreakEventEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/InvertBooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="iosFingerprintEventDisabled")
*/
@property (readonly) KMKBoolean * _Nullable iosFingerprintEventEnabled __attribute__((swift_name("iosFingerprintEventEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/InvertBooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="iosGeoLocationEventDisabled")
*/
@property (readonly) KMKBoolean * _Nullable iosGeoLocationEventEnabled __attribute__((swift_name("iosGeoLocationEventEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/InvertBooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="screenRecordingEventDisabled")
*/
@property (readonly) KMKBoolean * _Nullable iosScreenRecordingEventEnabled __attribute__((swift_name("iosScreenRecordingEventEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/IntFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="screenRecordingEventRetryAttempts")
*/
@property (readonly) KMKInt * _Nullable iosScreenRecordingEventRetryAttempts __attribute__((swift_name("iosScreenRecordingEventRetryAttempts")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/DurationNullableSerializer))
 *   kotlinx.serialization.SerialName(value="screenRecordingEventRetryInterval")
*/
@property (readonly) id _Nullable iosScreenRecordingEventRetryInterval __attribute__((swift_name("iosScreenRecordingEventRetryInterval")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/InvertBooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="iosScreenshotEventDisabled")
*/
@property (readonly) KMKBoolean * _Nullable iosScreenshotEventEnabled __attribute__((swift_name("iosScreenshotEventEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/InvertBooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="touchIdChangedEventDisabled")
*/
@property (readonly) KMKBoolean * _Nullable iosTouchIdChangedEventEnabled __attribute__((swift_name("iosTouchIdChangedEventEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/DurationNullableSerializer))
 *   kotlinx.serialization.SerialName(value="kavSdkBasesUpdateInterval")
*/
@property (readonly) id _Nullable kavSdkBasesUpdateInterval __attribute__((swift_name("kavSdkBasesUpdateInterval")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/BooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="kavSdkEnabled")
*/
@property (readonly) KMKBoolean * _Nullable kavSdkEnabled __attribute__((swift_name("kavSdkEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/BooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="kavSdkRegardRiskwareAsMalware")
*/
@property (readonly) KMKBoolean * _Nullable kavSdkRegardRiskwareAsMalware __attribute__((swift_name("kavSdkRegardRiskwareAsMalware")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/DurationNullableSerializer))
 *   kotlinx.serialization.SerialName(value="kavSdkScanInterval")
*/
@property (readonly) id _Nullable kavSdkScanInterval __attribute__((swift_name("kavSdkScanInterval")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/BooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="keepLogsInFile")
*/
@property (readonly) KMKBoolean * _Nullable keepLogsInFileEnabled __attribute__((swift_name("keepLogsInFileEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/InvertBooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="logDataEventDisabled")
*/
@property (readonly) KMKBoolean * _Nullable logDataEventEnabled __attribute__((swift_name("logDataEventEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/DurationNullableSerializer))
 *   kotlinx.serialization.SerialName(value="logFileKeepInterval")
*/
@property (readonly) id _Nullable logFileKeepInterval __attribute__((swift_name("logFileKeepInterval")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/IntFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="maxNumberOfSimilarEventsInStorage")
*/
@property (readonly) KMKInt * _Nullable maxNumberOfSimilarEventsInStorage __attribute__((swift_name("maxNumberOfSimilarEventsInStorage")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/DurationNullableSerializer))
 *   kotlinx.serialization.SerialName(value="netstatInfoTimeInterval")
*/
@property (readonly) id _Nullable netstatInfoTimeInterval __attribute__((swift_name("netstatInfoTimeInterval")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/InvertBooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="passiveBiometricsEventDisabled")
*/
@property (readonly) KMKBoolean * _Nullable passiveBiometricsEventEnabled __attribute__((swift_name("passiveBiometricsEventEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/IntFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="passiveBiometricsMotionEventPartSize")
*/
@property (readonly) KMKInt * _Nullable passiveBiometricsMotionEventPartSize __attribute__((swift_name("passiveBiometricsMotionEventPartSize")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="passiveBiometricsMotionEventRegex")
*/
@property (readonly) NSString * _Nullable passiveBiometricsMotionEventRegex __attribute__((swift_name("passiveBiometricsMotionEventRegex")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/DurationNullableSerializer))
 *   kotlinx.serialization.SerialName(value="passiveBiometricsMotionEventSleepInterval")
*/
@property (readonly) id _Nullable passiveBiometricsMotionEventSleepInterval __attribute__((swift_name("passiveBiometricsMotionEventSleepInterval")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/DurationNullableSerializer))
 *   kotlinx.serialization.SerialName(value="passiveBiometricsMotionEventTailInterval")
*/
@property (readonly) id _Nullable passiveBiometricsMotionEventTailInterval __attribute__((swift_name("passiveBiometricsMotionEventTailInterval")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/DurationNullableSerializer))
 *   kotlinx.serialization.SerialName(value="passiveBiometricsMotionEventInterval")
*/
@property (readonly) id _Nullable passiveBiometricsMotionEventTouchInterval __attribute__((swift_name("passiveBiometricsMotionEventTouchInterval")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/InvertBooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="processListEventDisabled")
*/
@property (readonly) KMKBoolean * _Nullable processListEventEnabled __attribute__((swift_name("processListEventEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/DurationNullableSerializer))
 *   kotlinx.serialization.SerialName(value="screenShareCheckInterval")
*/
@property (readonly) id _Nullable screenShareCheckInterval __attribute__((swift_name("screenShareCheckInterval")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/InvertBooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="screenShareEventDisabled2")
*/
@property (readonly) KMKBoolean * _Nullable screenShareEventEnabled __attribute__((swift_name("screenShareEventEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/InvertBooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="androidScreenshotEventDisabled")
*/
@property (readonly) KMKBoolean * _Nullable screenshotEventEnabled __attribute__((swift_name("screenshotEventEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mobileUuid")
*/
@property (readonly) NSString * _Nullable secureDeviceTagUrl __attribute__((swift_name("secureDeviceTagUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/IntFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="sensorRate")
*/
@property (readonly) KMKInt * _Nullable sensorRate __attribute__((swift_name("sensorRate")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/InvertBooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="sessionIdEventDisabled")
*/
@property (readonly) KMKBoolean * _Nullable sessionIdEventEnabled __attribute__((swift_name("sessionIdEventEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="statisticsUrl")
*/
@property (readonly) NSString * _Nullable statisticsUrl __attribute__((swift_name("statisticsUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/InvertBooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="uiNavigationEventDisabled")
*/
@property (readonly) KMKBoolean * _Nullable uiNavigationEventEnabled __attribute__((swift_name("uiNavigationEventEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/InvertBooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="userLoginEventDisabled")
*/
@property (readonly) KMKBoolean * _Nullable userLoginEventEnabled __attribute__((swift_name("userLoginEventEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/InvertBooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="userLogoutEventDisabled")
*/
@property (readonly) KMKBoolean * _Nullable userLogoutEventEnabled __attribute__((swift_name("userLogoutEventEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/InvertBooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="voipEventDisabled")
*/
@property (readonly) KMKBoolean * _Nullable voipEventEnabled __attribute__((swift_name("voipEventEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/DurationNullableSerializer))
 *   kotlinx.serialization.SerialName(value="voipScanInterval")
*/
@property (readonly) id _Nullable voipScanInterval __attribute__((swift_name("voipScanInterval")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/IntFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="voipScanRate")
*/
@property (readonly) KMKInt * _Nullable voipScanRate __attribute__((swift_name("voipScanRate")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/InvertBooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="vpnEventDisabled")
*/
@property (readonly) KMKBoolean * _Nullable vpnEventEnabled __attribute__((swift_name("vpnEventEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/InvertBooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="whoCallsEventDisabled")
*/
@property (readonly) KMKBoolean * _Nullable whoCallsEventEnabled __attribute__((swift_name("whoCallsEventEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/InvertBooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="whoCallsPhonenumberSendDisabled")
*/
@property (readonly) KMKBoolean * _Nullable whoCallsPhoneNumberSendEnabled __attribute__((swift_name("whoCallsPhoneNumberSendEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/BooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="whoCallsSdkEnabled")
*/
@property (readonly) KMKBoolean * _Nullable whoCallsSdkEnabled __attribute__((swift_name("whoCallsSdkEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/kaspersky/kfp/mobile_kit/domain/config/BooleanFromStringSerializer))
 *   kotlinx.serialization.SerialName(value="writeLogsToFile")
*/
@property (readonly) KMKBoolean * _Nullable writeLogsToFileEnabled __attribute__((swift_name("writeLogsToFileEnabled")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExternalConfig.Companion")))
@interface KMKExternalConfigCompanion : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKExternalConfigCompanion *shared __attribute__((swift_name("shared")));
- (KMKExternalConfig *)empty __attribute__((swift_name("empty()")));
- (id<KMKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IntFromStringSerializer")))
@interface KMKIntFromStringSerializer : KMKBase <KMKKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)intFromStringSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKIntFromStringSerializer *shared __attribute__((swift_name("shared")));
- (KMKInt * _Nullable)deserializeDecoder:(id<KMKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<KMKKotlinx_serialization_coreEncoder>)encoder value:(KMKInt * _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<KMKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InvertBooleanFromStringSerializer")))
@interface KMKInvertBooleanFromStringSerializer : KMKBase <KMKKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)invertBooleanFromStringSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKInvertBooleanFromStringSerializer *shared __attribute__((swift_name("shared")));
- (KMKBoolean * _Nullable)deserializeDecoder:(id<KMKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<KMKKotlinx_serialization_coreEncoder>)encoder value:(KMKBoolean * _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<KMKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InvertBooleanSerializer")))
@interface KMKInvertBooleanSerializer : KMKBase <KMKKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)invertBooleanSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKInvertBooleanSerializer *shared __attribute__((swift_name("shared")));
- (KMKBoolean *)deserializeDecoder:(id<KMKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<KMKKotlinx_serialization_coreEncoder>)encoder value:(KMKBoolean *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<KMKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JwsDeviceTagModel")))
@interface KMKJwsDeviceTagModel : KMKBase
- (instancetype)initWithUuid:(NSString * _Nullable)uuid refreshInterval:(id _Nullable)refreshInterval __attribute__((swift_name("init(uuid:refreshInterval:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMKJwsDeviceTagModelCompanion *companion __attribute__((swift_name("companion")));
- (KMKJwsDeviceTagModel *)doCopyUuid:(NSString * _Nullable)uuid refreshInterval:(id _Nullable)refreshInterval __attribute__((swift_name("doCopy(uuid:refreshInterval:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="i")
*/
@property (readonly) id _Nullable refreshInterval __attribute__((swift_name("refreshInterval")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="uuid")
*/
@property (readonly) NSString * _Nullable uuid __attribute__((swift_name("uuid")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JwsDeviceTagModel.Companion")))
@interface KMKJwsDeviceTagModelCompanion : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKJwsDeviceTagModelCompanion *shared __attribute__((swift_name("shared")));
- (id<KMKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventPriority")))
@interface KMKEventPriority : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eventPriority __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKEventPriority *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t CRITICAL __attribute__((swift_name("CRITICAL")));
@property (readonly) int32_t HIGH __attribute__((swift_name("HIGH")));
@property (readonly) int32_t LOW __attribute__((swift_name("LOW")));
@property (readonly) int32_t MIDDLE __attribute__((swift_name("MIDDLE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventType")))
@interface KMKEventType : KMKKotlinEnum<KMKEventType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KMKEventTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KMKEventType *androidcallinfoevent __attribute__((swift_name("androidcallinfoevent")));
@property (class, readonly) KMKEventType *ioscallinfoevent __attribute__((swift_name("ioscallinfoevent")));
@property (class, readonly) KMKEventType *voipevent __attribute__((swift_name("voipevent")));
@property (class, readonly) KMKEventType *whocallsevent __attribute__((swift_name("whocallsevent")));
@property (class, readonly) KMKEventType *androidgeolocationevent __attribute__((swift_name("androidgeolocationevent")));
@property (class, readonly) KMKEventType *iosgeolocationevent __attribute__((swift_name("iosgeolocationevent")));
@property (class, readonly) KMKEventType *userloginevent __attribute__((swift_name("userloginevent")));
@property (class, readonly) KMKEventType *userlogoutevent __attribute__((swift_name("userlogoutevent")));
@property (class, readonly) KMKEventType *sessionidevent __attribute__((swift_name("sessionidevent")));
@property (class, readonly) KMKEventType *uinavigationevent __attribute__((swift_name("uinavigationevent")));
@property (class, readonly) KMKEventType *connectionsevent __attribute__((swift_name("connectionsevent")));
@property (class, readonly) KMKEventType *screenshareevent __attribute__((swift_name("screenshareevent")));
@property (class, readonly) KMKEventType *installedapplicationhashesevent __attribute__((swift_name("installedapplicationhashesevent")));
@property (class, readonly) KMKEventType *installedapplicationlistevent __attribute__((swift_name("installedapplicationlistevent")));
@property (class, readonly) KMKEventType *avscanresultevent __attribute__((swift_name("avscanresultevent")));
@property (class, readonly) KMKEventType *androidapplicationsignatureevent __attribute__((swift_name("androidapplicationsignatureevent")));
@property (class, readonly) KMKEventType *iosapplicationsignatureevent __attribute__((swift_name("iosapplicationsignatureevent")));
@property (class, readonly) KMKEventType *androiddevicedataevent __attribute__((swift_name("androiddevicedataevent")));
@property (class, readonly) KMKEventType *androidpropertiesevent __attribute__((swift_name("androidpropertiesevent")));
@property (class, readonly) KMKEventType *androidratkeyevent __attribute__((swift_name("androidratkeyevent")));
@property (class, readonly) KMKEventType *androidratmotionevent __attribute__((swift_name("androidratmotionevent")));
@property (class, readonly) KMKEventType *androidscreenshotevent __attribute__((swift_name("androidscreenshotevent")));
@property (class, readonly) KMKEventType *iosscreenshotevent __attribute__((swift_name("iosscreenshotevent")));
@property (class, readonly) KMKEventType *applicationinfoevent __attribute__((swift_name("applicationinfoevent")));
@property (class, readonly) KMKEventType *biometricsevent __attribute__((swift_name("biometricsevent")));
@property (class, readonly) KMKEventType *configevent __attribute__((swift_name("configevent")));
@property (class, readonly) KMKEventType *imsifordeviceevent __attribute__((swift_name("imsifordeviceevent")));
@property (class, readonly) KMKEventType *installedapplicationallevent __attribute__((swift_name("installedapplicationallevent")));
@property (class, readonly) KMKEventType *logdataevent __attribute__((swift_name("logdataevent")));
@property (class, readonly) KMKEventType *processlistevent __attribute__((swift_name("processlistevent")));
@property (class, readonly) KMKEventType *rootdetectorevent __attribute__((swift_name("rootdetectorevent")));
@property (class, readonly) KMKEventType *vpnevent __attribute__((swift_name("vpnevent")));
@property (class, readonly) KMKEventType *devicejailbreakevent __attribute__((swift_name("devicejailbreakevent")));
@property (class, readonly) KMKEventType *iosfingerprintevent __attribute__((swift_name("iosfingerprintevent")));
@property (class, readonly) KMKEventType *iosscreenrecordingevent __attribute__((swift_name("iosscreenrecordingevent")));
@property (class, readonly) KMKEventType *iostouchidchangedevent __attribute__((swift_name("iostouchidchangedevent")));
@property (class, readonly) KMKEventType *unknown __attribute__((swift_name("unknown")));
+ (KMKKotlinArray<KMKEventType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KMKEventType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t eventPriority __attribute__((swift_name("eventPriority")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventType.Companion")))
@interface KMKEventTypeCompanion : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKEventTypeCompanion *shared __attribute__((swift_name("shared")));
- (KMKEventType *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((swift_name("AndroidPropertiesResult")))
@interface KMKAndroidPropertiesResult : KMKKfpResult
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AndroidPropertiesResult.AlreadyInit")))
@interface KMKAndroidPropertiesResultAlreadyInit : KMKAndroidPropertiesResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)alreadyInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKAndroidPropertiesResultAlreadyInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AndroidPropertiesResult.AlreadySent")))
@interface KMKAndroidPropertiesResultAlreadySent : KMKAndroidPropertiesResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)alreadySent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKAndroidPropertiesResultAlreadySent *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AndroidPropertiesResult.Init")))
@interface KMKAndroidPropertiesResultInit : KMKAndroidPropertiesResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKAndroidPropertiesResultInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AndroidPropertiesResult.NotEnabled")))
@interface KMKAndroidPropertiesResultNotEnabled : KMKAndroidPropertiesResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notEnabled __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKAndroidPropertiesResultNotEnabled *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AndroidPropertiesResult.ResendAfterNetworkError")))
@interface KMKAndroidPropertiesResultResendAfterNetworkError : KMKAndroidPropertiesResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)resendAfterNetworkError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKAndroidPropertiesResultResendAfterNetworkError *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AndroidPropertiesResult.Success")))
@interface KMKAndroidPropertiesResultSuccess : KMKAndroidPropertiesResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKAndroidPropertiesResultSuccess *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KavSdkResult")))
@interface KMKKavSdkResult : KMKKfpResult
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("KavSdkResult.Failure")))
@interface KMKKavSdkResultFailure : KMKKfpResultKfpError
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KavSdkResult.FailureAlreadyInit")))
@interface KMKKavSdkResultFailureAlreadyInit : KMKKfpResultKfpError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)alreadyInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKavSdkResultFailureAlreadyInit *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KavSdkResult.FailureAntivirusError")))
@interface KMKKavSdkResultFailureAntivirusError : KMKKavSdkResultFailure
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)antivirusError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKavSdkResultFailureAntivirusError *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KavSdkResult.FailureInitSdkError")))
@interface KMKKavSdkResultFailureInitSdkError : KMKKavSdkResultFailure
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getInitSdkError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKavSdkResultFailureInitSdkError *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KavSdkResult.FailureLicenseError")))
@interface KMKKavSdkResultFailureLicenseError : KMKKavSdkResultFailure
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)licenseError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKavSdkResultFailureLicenseError *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KavSdkResult.FailureNotEnabled")))
@interface KMKKavSdkResultFailureNotEnabled : KMKKfpResultKfpError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)notEnabled __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKavSdkResultFailureNotEnabled *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KavSdkResult.FailureNotSupported")))
@interface KMKKavSdkResultFailureNotSupported : KMKKfpResultKfpError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)notSupported __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKavSdkResultFailureNotSupported *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KavSdkResult.Success")))
@interface KMKKavSdkResultSuccess : KMKKfpResultKfpSuccess
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKavSdkResultSuccess *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("ApplicationInfoResult")))
@interface KMKApplicationInfoResult : KMKKfpResult
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApplicationInfoResult.AlreadyInit")))
@interface KMKApplicationInfoResultAlreadyInit : KMKApplicationInfoResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)alreadyInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKApplicationInfoResultAlreadyInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApplicationInfoResult.AlreadySent")))
@interface KMKApplicationInfoResultAlreadySent : KMKApplicationInfoResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)alreadySent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKApplicationInfoResultAlreadySent *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApplicationInfoResult.Init")))
@interface KMKApplicationInfoResultInit : KMKApplicationInfoResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKApplicationInfoResultInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApplicationInfoResult.NotEnabled")))
@interface KMKApplicationInfoResultNotEnabled : KMKApplicationInfoResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notEnabled __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKApplicationInfoResultNotEnabled *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApplicationInfoResult.ResendAfterNetworkError")))
@interface KMKApplicationInfoResultResendAfterNetworkError : KMKApplicationInfoResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)resendAfterNetworkError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKApplicationInfoResultResendAfterNetworkError *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApplicationInfoResult.Success")))
@interface KMKApplicationInfoResultSuccess : KMKApplicationInfoResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKApplicationInfoResultSuccess *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApplicationScanInfo")))
@interface KMKApplicationScanInfo : KMKBase
- (instancetype)initWithPackageName:(NSString *)packageName baseApkPath:(NSString *)baseApkPath md5:(NSString * _Nullable)md5 sha256:(NSString * _Nullable)sha256 timestamp:(int64_t)timestamp __attribute__((swift_name("init(packageName:baseApkPath:md5:sha256:timestamp:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMKApplicationScanInfoCompanion *companion __attribute__((swift_name("companion")));
- (KMKApplicationScanInfo *)doCopyPackageName:(NSString *)packageName baseApkPath:(NSString *)baseApkPath md5:(NSString * _Nullable)md5 sha256:(NSString * _Nullable)sha256 timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(packageName:baseApkPath:md5:sha256:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="base_apk_path")
*/
@property (readonly) NSString *baseApkPath __attribute__((swift_name("baseApkPath")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="md5")
*/
@property (readonly) NSString * _Nullable md5 __attribute__((swift_name("md5")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="package_name")
*/
@property (readonly) NSString *packageName __attribute__((swift_name("packageName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sha256")
*/
@property (readonly) NSString * _Nullable sha256 __attribute__((swift_name("sha256")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="timestamp")
*/
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApplicationScanInfo.Companion")))
@interface KMKApplicationScanInfoCompanion : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKApplicationScanInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<KMKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("AppSignatureInfo")))
@protocol KMKAppSignatureInfo
@required
@property (readonly) NSString *certificateSerialNumber __attribute__((swift_name("certificateSerialNumber")));
@property (readonly) NSArray<NSString *> *extendedKeyUsage __attribute__((swift_name("extendedKeyUsage")));
@property (readonly) NSString *issuerDnName __attribute__((swift_name("issuerDnName")));
@property (readonly) NSString *notAfter __attribute__((swift_name("notAfter")));
@property (readonly) NSString *notBefore __attribute__((swift_name("notBefore")));
@property (readonly) NSString *sigAlgName __attribute__((swift_name("sigAlgName")));
@property (readonly) NSString *sigAlgOId __attribute__((swift_name("sigAlgOId")));
@property (readonly) NSString *sigAlgParams __attribute__((swift_name("sigAlgParams")));
@property (readonly) NSString *signature __attribute__((swift_name("signature")));
@property (readonly) NSString *subjectDnName __attribute__((swift_name("subjectDnName")));
@property (readonly) NSString *tbsCertificate __attribute__((swift_name("tbsCertificate")));
@end

__attribute__((swift_name("AppSignatureResult")))
@interface KMKAppSignatureResult : KMKKfpResult
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppSignatureResult.AlreadyInit")))
@interface KMKAppSignatureResultAlreadyInit : KMKAppSignatureResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)alreadyInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKAppSignatureResultAlreadyInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppSignatureResult.AlreadySent")))
@interface KMKAppSignatureResultAlreadySent : KMKAppSignatureResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)alreadySent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKAppSignatureResultAlreadySent *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppSignatureResult.Init")))
@interface KMKAppSignatureResultInit : KMKAppSignatureResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKAppSignatureResultInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppSignatureResult.NotEnabled")))
@interface KMKAppSignatureResultNotEnabled : KMKAppSignatureResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notEnabled __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKAppSignatureResultNotEnabled *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppSignatureResult.ResendAfterNetworkError")))
@interface KMKAppSignatureResultResendAfterNetworkError : KMKAppSignatureResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)resendAfterNetworkError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKAppSignatureResultResendAfterNetworkError *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppSignatureResult.Success")))
@interface KMKAppSignatureResultSuccess : KMKAppSignatureResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKAppSignatureResultSuccess *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("BiometricsResult")))
@interface KMKBiometricsResult : KMKKfpResult
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BiometricsResult.AlreadyInit")))
@interface KMKBiometricsResultAlreadyInit : KMKBiometricsResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)alreadyInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKBiometricsResultAlreadyInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BiometricsResult.Init")))
@interface KMKBiometricsResultInit : KMKBiometricsResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKBiometricsResultInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BiometricsResult.NotEnabled")))
@interface KMKBiometricsResultNotEnabled : KMKBiometricsResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notEnabled __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKBiometricsResultNotEnabled *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BiometricsResult.NotSupported")))
@interface KMKBiometricsResultNotSupported : KMKBiometricsResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notSupported __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKBiometricsResultNotSupported *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BiometricsResult.ResendAfterNetworkError")))
@interface KMKBiometricsResultResendAfterNetworkError : KMKBiometricsResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)resendAfterNetworkError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKBiometricsResultResendAfterNetworkError *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BiometricsResult.Success")))
@interface KMKBiometricsResultSuccess : KMKBiometricsResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKBiometricsResultSuccess *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("CallInfoResult")))
@interface KMKCallInfoResult : KMKKfpResult
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallInfoResult.AlreadyInit")))
@interface KMKCallInfoResultAlreadyInit : KMKCallInfoResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)alreadyInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKCallInfoResultAlreadyInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallInfoResult.Failure")))
@interface KMKCallInfoResultFailure : KMKCallInfoResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)failure __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKCallInfoResultFailure *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallInfoResult.FailurePermissionDenied")))
@interface KMKCallInfoResultFailurePermissionDenied : KMKKfpResultKfpError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)permissionDenied __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKCallInfoResultFailurePermissionDenied *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallInfoResult.Init")))
@interface KMKCallInfoResultInit : KMKCallInfoResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKCallInfoResultInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallInfoResult.NotEnabled")))
@interface KMKCallInfoResultNotEnabled : KMKCallInfoResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notEnabled __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKCallInfoResultNotEnabled *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallInfoResult.NotSupported")))
@interface KMKCallInfoResultNotSupported : KMKCallInfoResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notSupported __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKCallInfoResultNotSupported *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallInfoResult.ResendAfterNetworkError")))
@interface KMKCallInfoResultResendAfterNetworkError : KMKCallInfoResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)resendAfterNetworkError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKCallInfoResultResendAfterNetworkError *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallInfoResult.Success")))
@interface KMKCallInfoResultSuccess : KMKCallInfoResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKCallInfoResultSuccess *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("EnvironmentData")))
@protocol KMKEnvironmentData
@required
@property (readonly) NSString *applicationId __attribute__((swift_name("applicationId")));
@property (readonly) int64_t applicationInstallTime __attribute__((swift_name("applicationInstallTime")));
@property (readonly) NSString *applicationVersion __attribute__((swift_name("applicationVersion")));
@property (readonly) NSString *deviceTag __attribute__((swift_name("deviceTag")));
@property (readonly) NSString *gsfId __attribute__((swift_name("gsfId")));
@property (readonly) NSString *osName __attribute__((swift_name("osName")));
@property (readonly) NSString *osVersion __attribute__((swift_name("osVersion")));
@property (readonly) NSString *productName __attribute__((swift_name("productName")));
@property (readonly) NSString *productVersion __attribute__((swift_name("productVersion")));
@property (readonly) int64_t startDateTime __attribute__((swift_name("startDateTime")));
@property (readonly) int64_t uptime __attribute__((swift_name("uptime")));
@end

__attribute__((swift_name("ConfigEventResult")))
@interface KMKConfigEventResult : KMKKfpResult
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigEventResult.AlreadyInit")))
@interface KMKConfigEventResultAlreadyInit : KMKConfigEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)alreadyInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKConfigEventResultAlreadyInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigEventResult.Init")))
@interface KMKConfigEventResultInit : KMKConfigEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKConfigEventResultInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigEventResult.NotEnabled")))
@interface KMKConfigEventResultNotEnabled : KMKConfigEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notEnabled __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKConfigEventResultNotEnabled *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigEventResult.ResendAfterNetworkError")))
@interface KMKConfigEventResultResendAfterNetworkError : KMKConfigEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)resendAfterNetworkError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKConfigEventResultResendAfterNetworkError *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigEventResult.Success")))
@interface KMKConfigEventResultSuccess : KMKConfigEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKConfigEventResultSuccess *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("ConnectionsEventResult")))
@interface KMKConnectionsEventResult : KMKKfpResult
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectionsEventResult.AlreadyInit")))
@interface KMKConnectionsEventResultAlreadyInit : KMKConnectionsEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)alreadyInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKConnectionsEventResultAlreadyInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectionsEventResult.AlreadySent")))
@interface KMKConnectionsEventResultAlreadySent : KMKConnectionsEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)alreadySent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKConnectionsEventResultAlreadySent *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectionsEventResult.Init")))
@interface KMKConnectionsEventResultInit : KMKConnectionsEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKConnectionsEventResultInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectionsEventResult.NoTime")))
@interface KMKConnectionsEventResultNoTime : KMKConnectionsEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)noTime __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKConnectionsEventResultNoTime *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectionsEventResult.NotEnabled")))
@interface KMKConnectionsEventResultNotEnabled : KMKConnectionsEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notEnabled __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKConnectionsEventResultNotEnabled *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectionsEventResult.ResendAfterNetworkError")))
@interface KMKConnectionsEventResultResendAfterNetworkError : KMKConnectionsEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)resendAfterNetworkError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKConnectionsEventResultResendAfterNetworkError *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectionsEventResult.SdkNotSupported")))
@interface KMKConnectionsEventResultSdkNotSupported : KMKConnectionsEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sdkNotSupported __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKConnectionsEventResultSdkNotSupported *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectionsEventResult.Success")))
@interface KMKConnectionsEventResultSuccess : KMKConnectionsEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKConnectionsEventResultSuccess *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("DeviceDataResult")))
@interface KMKDeviceDataResult : KMKKfpResult
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceDataResult.AlreadyInit")))
@interface KMKDeviceDataResultAlreadyInit : KMKDeviceDataResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)alreadyInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKDeviceDataResultAlreadyInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceDataResult.AlreadySent")))
@interface KMKDeviceDataResultAlreadySent : KMKDeviceDataResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)alreadySent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKDeviceDataResultAlreadySent *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceDataResult.Init")))
@interface KMKDeviceDataResultInit : KMKDeviceDataResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKDeviceDataResultInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceDataResult.NotEnabled")))
@interface KMKDeviceDataResultNotEnabled : KMKDeviceDataResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notEnabled __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKDeviceDataResultNotEnabled *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceDataResult.ResendAfterNetworkError")))
@interface KMKDeviceDataResultResendAfterNetworkError : KMKDeviceDataResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)resendAfterNetworkError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKDeviceDataResultResendAfterNetworkError *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceDataResult.Success")))
@interface KMKDeviceDataResultSuccess : KMKDeviceDataResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKDeviceDataResultSuccess *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("DeviceJailbreakEventResult")))
@interface KMKDeviceJailbreakEventResult : KMKKfpResult
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceJailbreakEventResult.AlreadyInit")))
@interface KMKDeviceJailbreakEventResultAlreadyInit : KMKDeviceJailbreakEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)alreadyInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKDeviceJailbreakEventResultAlreadyInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceJailbreakEventResult.AlreadySent")))
@interface KMKDeviceJailbreakEventResultAlreadySent : KMKDeviceJailbreakEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)alreadySent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKDeviceJailbreakEventResultAlreadySent *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceJailbreakEventResult.Init")))
@interface KMKDeviceJailbreakEventResultInit : KMKDeviceJailbreakEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKDeviceJailbreakEventResultInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceJailbreakEventResult.NotEnabled")))
@interface KMKDeviceJailbreakEventResultNotEnabled : KMKDeviceJailbreakEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notEnabled __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKDeviceJailbreakEventResultNotEnabled *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceJailbreakEventResult.NotSupported")))
@interface KMKDeviceJailbreakEventResultNotSupported : KMKDeviceJailbreakEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notSupported __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKDeviceJailbreakEventResultNotSupported *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceJailbreakEventResult.ResendAfterNetworkError")))
@interface KMKDeviceJailbreakEventResultResendAfterNetworkError : KMKDeviceJailbreakEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)resendAfterNetworkError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKDeviceJailbreakEventResultResendAfterNetworkError *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceJailbreakEventResult.Success")))
@interface KMKDeviceJailbreakEventResultSuccess : KMKDeviceJailbreakEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKDeviceJailbreakEventResultSuccess *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("DeviceRootDetectionResult")))
@interface KMKDeviceRootDetectionResult : KMKKfpResult
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceRootDetectionResult.AlreadyInit")))
@interface KMKDeviceRootDetectionResultAlreadyInit : KMKDeviceRootDetectionResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)alreadyInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKDeviceRootDetectionResultAlreadyInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceRootDetectionResult.AlreadySent")))
@interface KMKDeviceRootDetectionResultAlreadySent : KMKDeviceRootDetectionResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)alreadySent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKDeviceRootDetectionResultAlreadySent *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceRootDetectionResult.Init")))
@interface KMKDeviceRootDetectionResultInit : KMKDeviceRootDetectionResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKDeviceRootDetectionResultInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceRootDetectionResult.NotEnabled")))
@interface KMKDeviceRootDetectionResultNotEnabled : KMKDeviceRootDetectionResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notEnabled __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKDeviceRootDetectionResultNotEnabled *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceRootDetectionResult.ResendAfterNetworkError")))
@interface KMKDeviceRootDetectionResultResendAfterNetworkError : KMKDeviceRootDetectionResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)resendAfterNetworkError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKDeviceRootDetectionResultResendAfterNetworkError *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceRootDetectionResult.Success")))
@interface KMKDeviceRootDetectionResultSuccess : KMKDeviceRootDetectionResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKDeviceRootDetectionResultSuccess *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("FingerprintResult")))
@interface KMKFingerprintResult : KMKKfpResult
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FingerprintResult.AlreadyInit")))
@interface KMKFingerprintResultAlreadyInit : KMKFingerprintResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)alreadyInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKFingerprintResultAlreadyInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FingerprintResult.AlreadySent")))
@interface KMKFingerprintResultAlreadySent : KMKFingerprintResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)alreadySent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKFingerprintResultAlreadySent *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FingerprintResult.Init")))
@interface KMKFingerprintResultInit : KMKFingerprintResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKFingerprintResultInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FingerprintResult.NotEnabled")))
@interface KMKFingerprintResultNotEnabled : KMKFingerprintResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notEnabled __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKFingerprintResultNotEnabled *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FingerprintResult.NotSupported")))
@interface KMKFingerprintResultNotSupported : KMKFingerprintResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notSupported __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKFingerprintResultNotSupported *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FingerprintResult.ResendAfterNetworkError")))
@interface KMKFingerprintResultResendAfterNetworkError : KMKFingerprintResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)resendAfterNetworkError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKFingerprintResultResendAfterNetworkError *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FingerprintResult.Success")))
@interface KMKFingerprintResultSuccess : KMKFingerprintResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKFingerprintResultSuccess *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("ImsiForDeviceResult")))
@interface KMKImsiForDeviceResult : KMKKfpResult
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImsiForDeviceResult.AlreadyInit")))
@interface KMKImsiForDeviceResultAlreadyInit : KMKImsiForDeviceResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)alreadyInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKImsiForDeviceResultAlreadyInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImsiForDeviceResult.AlreadySent")))
@interface KMKImsiForDeviceResultAlreadySent : KMKImsiForDeviceResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)alreadySent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKImsiForDeviceResultAlreadySent *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImsiForDeviceResult.Init")))
@interface KMKImsiForDeviceResultInit : KMKImsiForDeviceResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKImsiForDeviceResultInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImsiForDeviceResult.NotEnabled")))
@interface KMKImsiForDeviceResultNotEnabled : KMKImsiForDeviceResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notEnabled __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKImsiForDeviceResultNotEnabled *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImsiForDeviceResult.ResendAfterNetworkError")))
@interface KMKImsiForDeviceResultResendAfterNetworkError : KMKImsiForDeviceResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)resendAfterNetworkError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKImsiForDeviceResultResendAfterNetworkError *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImsiForDeviceResult.Success")))
@interface KMKImsiForDeviceResultSuccess : KMKImsiForDeviceResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKImsiForDeviceResultSuccess *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("InstalledApplicationAllResult")))
@interface KMKInstalledApplicationAllResult : KMKKfpResult
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstalledApplicationAllResult.AlreadyInit")))
@interface KMKInstalledApplicationAllResultAlreadyInit : KMKInstalledApplicationAllResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)alreadyInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKInstalledApplicationAllResultAlreadyInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstalledApplicationAllResult.Init")))
@interface KMKInstalledApplicationAllResultInit : KMKInstalledApplicationAllResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKInstalledApplicationAllResultInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstalledApplicationAllResult.NoChanges")))
@interface KMKInstalledApplicationAllResultNoChanges : KMKInstalledApplicationAllResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)noChanges __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKInstalledApplicationAllResultNoChanges *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstalledApplicationAllResult.NotEnabled")))
@interface KMKInstalledApplicationAllResultNotEnabled : KMKInstalledApplicationAllResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notEnabled __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKInstalledApplicationAllResultNotEnabled *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstalledApplicationAllResult.ResendAfterNetworkError")))
@interface KMKInstalledApplicationAllResultResendAfterNetworkError : KMKInstalledApplicationAllResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)resendAfterNetworkError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKInstalledApplicationAllResultResendAfterNetworkError *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstalledApplicationAllResult.SendNotRequired")))
@interface KMKInstalledApplicationAllResultSendNotRequired : KMKInstalledApplicationAllResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sendNotRequired __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKInstalledApplicationAllResultSendNotRequired *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstalledApplicationAllResult.Success")))
@interface KMKInstalledApplicationAllResultSuccess : KMKInstalledApplicationAllResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKInstalledApplicationAllResultSuccess *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("InstalledApplicationHashesResult")))
@interface KMKInstalledApplicationHashesResult : KMKKfpResult
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstalledApplicationHashesResult.AlreadyInit")))
@interface KMKInstalledApplicationHashesResultAlreadyInit : KMKInstalledApplicationHashesResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)alreadyInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKInstalledApplicationHashesResultAlreadyInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstalledApplicationHashesResult.Init")))
@interface KMKInstalledApplicationHashesResultInit : KMKInstalledApplicationHashesResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKInstalledApplicationHashesResultInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstalledApplicationHashesResult.NoChanges")))
@interface KMKInstalledApplicationHashesResultNoChanges : KMKInstalledApplicationHashesResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)noChanges __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKInstalledApplicationHashesResultNoChanges *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstalledApplicationHashesResult.NotEnabled")))
@interface KMKInstalledApplicationHashesResultNotEnabled : KMKInstalledApplicationHashesResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notEnabled __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKInstalledApplicationHashesResultNotEnabled *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstalledApplicationHashesResult.ResendAfterNetworkError")))
@interface KMKInstalledApplicationHashesResultResendAfterNetworkError : KMKInstalledApplicationHashesResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)resendAfterNetworkError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKInstalledApplicationHashesResultResendAfterNetworkError *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstalledApplicationHashesResult.SendNotRequired")))
@interface KMKInstalledApplicationHashesResultSendNotRequired : KMKInstalledApplicationHashesResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sendNotRequired __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKInstalledApplicationHashesResultSendNotRequired *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstalledApplicationHashesResult.Success")))
@interface KMKInstalledApplicationHashesResultSuccess : KMKInstalledApplicationHashesResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKInstalledApplicationHashesResultSuccess *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("InstalledApplicationListResult")))
@interface KMKInstalledApplicationListResult : KMKKfpResult
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstalledApplicationListResult.AlreadyInit")))
@interface KMKInstalledApplicationListResultAlreadyInit : KMKInstalledApplicationListResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)alreadyInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKInstalledApplicationListResultAlreadyInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstalledApplicationListResult.Init")))
@interface KMKInstalledApplicationListResultInit : KMKInstalledApplicationListResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKInstalledApplicationListResultInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstalledApplicationListResult.NoChanges")))
@interface KMKInstalledApplicationListResultNoChanges : KMKInstalledApplicationListResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)noChanges __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKInstalledApplicationListResultNoChanges *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstalledApplicationListResult.NotEnabled")))
@interface KMKInstalledApplicationListResultNotEnabled : KMKInstalledApplicationListResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notEnabled __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKInstalledApplicationListResultNotEnabled *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstalledApplicationListResult.RegexError")))
@interface KMKInstalledApplicationListResultRegexError : KMKInstalledApplicationListResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)regexError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKInstalledApplicationListResultRegexError *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstalledApplicationListResult.ResendAfterNetworkError")))
@interface KMKInstalledApplicationListResultResendAfterNetworkError : KMKInstalledApplicationListResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)resendAfterNetworkError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKInstalledApplicationListResultResendAfterNetworkError *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstalledApplicationListResult.Success")))
@interface KMKInstalledApplicationListResultSuccess : KMKInstalledApplicationListResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKInstalledApplicationListResultSuccess *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VoipEventNames")))
@interface KMKVoipEventNames : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)voipEventNames __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKVoipEventNames *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *VOIP __attribute__((swift_name("VOIP")));
@property (readonly) NSString *VOIP_EVENT __attribute__((swift_name("VOIP_EVENT")));
@end

__attribute__((swift_name("ProcessListResult")))
@interface KMKProcessListResult : KMKKfpResult
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProcessListResult.AlreadyInit")))
@interface KMKProcessListResultAlreadyInit : KMKProcessListResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)alreadyInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKProcessListResultAlreadyInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProcessListResult.AlreadySent")))
@interface KMKProcessListResultAlreadySent : KMKProcessListResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)alreadySent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKProcessListResultAlreadySent *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProcessListResult.Init")))
@interface KMKProcessListResultInit : KMKProcessListResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKProcessListResultInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProcessListResult.NotEnabled")))
@interface KMKProcessListResultNotEnabled : KMKProcessListResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notEnabled __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKProcessListResultNotEnabled *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProcessListResult.NotSupported")))
@interface KMKProcessListResultNotSupported : KMKProcessListResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notSupported __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKProcessListResultNotSupported *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProcessListResult.ResendAfterNetworkError")))
@interface KMKProcessListResultResendAfterNetworkError : KMKProcessListResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)resendAfterNetworkError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKProcessListResultResendAfterNetworkError *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProcessListResult.Success")))
@interface KMKProcessListResultSuccess : KMKProcessListResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKProcessListResultSuccess *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("RatDetectResult")))
@interface KMKRatDetectResult : KMKKfpResult
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RatDetectResult.AlreadyInit")))
@interface KMKRatDetectResultAlreadyInit : KMKRatDetectResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)alreadyInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKRatDetectResultAlreadyInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RatDetectResult.Init")))
@interface KMKRatDetectResultInit : KMKRatDetectResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKRatDetectResultInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RatDetectResult.NotSupported")))
@interface KMKRatDetectResultNotSupported : KMKRatDetectResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notSupported __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKRatDetectResultNotSupported *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RatDetectResult.ResendAfterNetworkError")))
@interface KMKRatDetectResultResendAfterNetworkError : KMKRatDetectResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)resendAfterNetworkError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKRatDetectResultResendAfterNetworkError *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RatDetectResult.Success")))
@interface KMKRatDetectResultSuccess : KMKRatDetectResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKRatDetectResultSuccess *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("ScreenRecordingEventResult")))
@interface KMKScreenRecordingEventResult : KMKKfpResult
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenRecordingEventResult.AlreadyInit")))
@interface KMKScreenRecordingEventResultAlreadyInit : KMKScreenRecordingEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)alreadyInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKScreenRecordingEventResultAlreadyInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenRecordingEventResult.AlreadySent")))
@interface KMKScreenRecordingEventResultAlreadySent : KMKScreenRecordingEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)alreadySent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKScreenRecordingEventResultAlreadySent *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenRecordingEventResult.Init")))
@interface KMKScreenRecordingEventResultInit : KMKScreenRecordingEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKScreenRecordingEventResultInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenRecordingEventResult.NotEnabled")))
@interface KMKScreenRecordingEventResultNotEnabled : KMKScreenRecordingEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notEnabled __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKScreenRecordingEventResultNotEnabled *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenRecordingEventResult.NotSupported")))
@interface KMKScreenRecordingEventResultNotSupported : KMKScreenRecordingEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notSupported __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKScreenRecordingEventResultNotSupported *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenRecordingEventResult.ResendAfterNetworkError")))
@interface KMKScreenRecordingEventResultResendAfterNetworkError : KMKScreenRecordingEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)resendAfterNetworkError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKScreenRecordingEventResultResendAfterNetworkError *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenRecordingEventResult.Success")))
@interface KMKScreenRecordingEventResultSuccess : KMKScreenRecordingEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKScreenRecordingEventResultSuccess *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("ScreenShareResult")))
@interface KMKScreenShareResult : KMKKfpResult
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenShareResult.AlreadyInit")))
@interface KMKScreenShareResultAlreadyInit : KMKScreenShareResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)alreadyInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKScreenShareResultAlreadyInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenShareResult.Init")))
@interface KMKScreenShareResultInit : KMKScreenShareResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKScreenShareResultInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenShareResult.NoDisplayManager")))
@interface KMKScreenShareResultNoDisplayManager : KMKScreenShareResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)noDisplayManager __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKScreenShareResultNoDisplayManager *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenShareResult.NotEnabled")))
@interface KMKScreenShareResultNotEnabled : KMKScreenShareResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notEnabled __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKScreenShareResultNotEnabled *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenShareResult.NotSupported")))
@interface KMKScreenShareResultNotSupported : KMKScreenShareResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notSupported __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKScreenShareResultNotSupported *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenShareResult.ResendAfterNetworkError")))
@interface KMKScreenShareResultResendAfterNetworkError : KMKScreenShareResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)resendAfterNetworkError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKScreenShareResultResendAfterNetworkError *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenShareResult.Success")))
@interface KMKScreenShareResultSuccess : KMKScreenShareResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKScreenShareResultSuccess *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("ScreenshotResult")))
@interface KMKScreenshotResult : KMKKfpResult
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenshotResult.AlreadyInit")))
@interface KMKScreenshotResultAlreadyInit : KMKScreenshotResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)alreadyInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKScreenshotResultAlreadyInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenshotResult.Init")))
@interface KMKScreenshotResultInit : KMKScreenshotResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKScreenshotResultInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenshotResult.NotEnabled")))
@interface KMKScreenshotResultNotEnabled : KMKScreenshotResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notEnabled __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKScreenshotResultNotEnabled *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenshotResult.NotSupported")))
@interface KMKScreenshotResultNotSupported : KMKScreenshotResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notSupported __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKScreenshotResultNotSupported *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenshotResult.ResendAfterNetworkError")))
@interface KMKScreenshotResultResendAfterNetworkError : KMKScreenshotResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)resendAfterNetworkError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKScreenshotResultResendAfterNetworkError *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenshotResult.Success")))
@interface KMKScreenshotResultSuccess : KMKScreenshotResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKScreenshotResultSuccess *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("TouchIdChangedEventResult")))
@interface KMKTouchIdChangedEventResult : KMKKfpResult
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TouchIdChangedEventResult.AlreadyInit")))
@interface KMKTouchIdChangedEventResultAlreadyInit : KMKTouchIdChangedEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)alreadyInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKTouchIdChangedEventResultAlreadyInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TouchIdChangedEventResult.AlreadySent")))
@interface KMKTouchIdChangedEventResultAlreadySent : KMKTouchIdChangedEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)alreadySent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKTouchIdChangedEventResultAlreadySent *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TouchIdChangedEventResult.Init")))
@interface KMKTouchIdChangedEventResultInit : KMKTouchIdChangedEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKTouchIdChangedEventResultInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TouchIdChangedEventResult.NotEnabled")))
@interface KMKTouchIdChangedEventResultNotEnabled : KMKTouchIdChangedEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notEnabled __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKTouchIdChangedEventResultNotEnabled *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TouchIdChangedEventResult.NotSupported")))
@interface KMKTouchIdChangedEventResultNotSupported : KMKTouchIdChangedEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notSupported __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKTouchIdChangedEventResultNotSupported *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TouchIdChangedEventResult.ResendAfterNetworkError")))
@interface KMKTouchIdChangedEventResultResendAfterNetworkError : KMKTouchIdChangedEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)resendAfterNetworkError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKTouchIdChangedEventResultResendAfterNetworkError *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TouchIdChangedEventResult.Success")))
@interface KMKTouchIdChangedEventResultSuccess : KMKTouchIdChangedEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKTouchIdChangedEventResultSuccess *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TouchIdChangedEventResult.Unchanged")))
@interface KMKTouchIdChangedEventResultUnchanged : KMKTouchIdChangedEventResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unchanged __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKTouchIdChangedEventResultUnchanged *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("VoipCallResult")))
@interface KMKVoipCallResult : KMKKfpResult
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VoipCallResult.AlreadyInit")))
@interface KMKVoipCallResultAlreadyInit : KMKVoipCallResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)alreadyInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKVoipCallResultAlreadyInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VoipCallResult.Init")))
@interface KMKVoipCallResultInit : KMKVoipCallResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKVoipCallResultInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VoipCallResult.NotEnabled")))
@interface KMKVoipCallResultNotEnabled : KMKVoipCallResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notEnabled __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKVoipCallResultNotEnabled *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VoipCallResult.NotSupported")))
@interface KMKVoipCallResultNotSupported : KMKVoipCallResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notSupported __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKVoipCallResultNotSupported *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VoipCallResult.ResendAfterNetworkError")))
@interface KMKVoipCallResultResendAfterNetworkError : KMKVoipCallResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)resendAfterNetworkError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKVoipCallResultResendAfterNetworkError *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VoipCallResult.Success")))
@interface KMKVoipCallResultSuccess : KMKVoipCallResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKVoipCallResultSuccess *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("VpnConnectionResult")))
@interface KMKVpnConnectionResult : KMKKfpResult
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VpnConnectionResult.AlreadyInit")))
@interface KMKVpnConnectionResultAlreadyInit : KMKVpnConnectionResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)alreadyInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKVpnConnectionResultAlreadyInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VpnConnectionResult.AlreadySent")))
@interface KMKVpnConnectionResultAlreadySent : KMKVpnConnectionResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)alreadySent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKVpnConnectionResultAlreadySent *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VpnConnectionResult.Init")))
@interface KMKVpnConnectionResultInit : KMKVpnConnectionResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKVpnConnectionResultInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VpnConnectionResult.NotEnabled")))
@interface KMKVpnConnectionResultNotEnabled : KMKVpnConnectionResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notEnabled __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKVpnConnectionResultNotEnabled *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VpnConnectionResult.ResendAfterNetworkError")))
@interface KMKVpnConnectionResultResendAfterNetworkError : KMKVpnConnectionResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)resendAfterNetworkError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKVpnConnectionResultResendAfterNetworkError *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VpnConnectionResult.Success")))
@interface KMKVpnConnectionResultSuccess : KMKVpnConnectionResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKVpnConnectionResultSuccess *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallListenerState")))
@interface KMKCallListenerState : KMKKotlinEnum<KMKCallListenerState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KMKCallListenerState *incomingCall __attribute__((swift_name("incomingCall")));
@property (class, readonly) KMKCallListenerState *offhook __attribute__((swift_name("offhook")));
@property (class, readonly) KMKCallListenerState *incomingCallEnded __attribute__((swift_name("incomingCallEnded")));
+ (KMKKotlinArray<KMKCallListenerState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KMKCallListenerState *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface KMKKotlinThrowable : KMKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KMKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KMKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (KMKKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KMKKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface KMKKotlinException : KMKKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KMKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KMKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WhoCallsNotInitializedException")))
@interface KMKWhoCallsNotInitializedException : KMKKotlinException
- (instancetype)initWithDetailMessage:(NSString * _Nullable)detailMessage __attribute__((swift_name("init(detailMessage:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDetailMessage:(NSString * _Nullable)detailMessage throwable:(KMKKotlinThrowable * _Nullable)throwable __attribute__((swift_name("init(detailMessage:throwable:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(KMKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KMKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WhoCallsResult")))
@interface KMKWhoCallsResult : KMKKfpResult
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WhoCallsResult.AlreadyStarted")))
@interface KMKWhoCallsResultAlreadyStarted : KMKKfpResultKfpSuccess
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)alreadyStarted __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKWhoCallsResultAlreadyStarted *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("WhoCallsResult.Failure")))
@interface KMKWhoCallsResultFailure : KMKKfpResultKfpError
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WhoCallsResult.FailureAlreadyInit")))
@interface KMKWhoCallsResultFailureAlreadyInit : KMKWhoCallsResultFailure
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)alreadyInit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKWhoCallsResultFailureAlreadyInit *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WhoCallsResult.FailureInitSdkError")))
@interface KMKWhoCallsResultFailureInitSdkError : KMKWhoCallsResultFailure
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getInitSdkError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKWhoCallsResultFailureInitSdkError *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WhoCallsResult.FailureLicenseError")))
@interface KMKWhoCallsResultFailureLicenseError : KMKWhoCallsResultFailure
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)licenseError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKWhoCallsResultFailureLicenseError *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WhoCallsResult.FailureNotEnabled")))
@interface KMKWhoCallsResultFailureNotEnabled : KMKWhoCallsResultFailure
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notEnabled __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKWhoCallsResultFailureNotEnabled *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WhoCallsResult.FailureNotSupported")))
@interface KMKWhoCallsResultFailureNotSupported : KMKWhoCallsResultFailure
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notSupported __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKWhoCallsResultFailureNotSupported *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WhoCallsResult.FailurePermissionDenied")))
@interface KMKWhoCallsResultFailurePermissionDenied : KMKWhoCallsResultFailure
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)permissionDenied __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKWhoCallsResultFailurePermissionDenied *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WhoCallsResult.Success")))
@interface KMKWhoCallsResultSuccess : KMKKfpResultKfpSuccess
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKWhoCallsResultSuccess *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Headers")))
@interface KMKHeaders : KMKBase
- (instancetype)initWithCounter:(int32_t)counter deviceTag:(NSString *)deviceTag sessionId:(NSString *)sessionId __attribute__((swift_name("init(counter:deviceTag:sessionId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMKHeadersCompanion *companion __attribute__((swift_name("companion")));
- (KMKHeaders *)doCopyCounter:(int32_t)counter deviceTag:(NSString *)deviceTag sessionId:(NSString *)sessionId __attribute__((swift_name("doCopy(counter:deviceTag:sessionId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="counter")
*/
@property (readonly) int32_t counter __attribute__((swift_name("counter")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="device_tag")
*/
@property (readonly) NSString *deviceTag __attribute__((swift_name("deviceTag")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="session_id")
*/
@property (readonly) NSString *sessionId __attribute__((swift_name("sessionId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Headers.Companion")))
@interface KMKHeadersCompanion : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKHeadersCompanion *shared __attribute__((swift_name("shared")));
- (id<KMKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Packet")))
@interface KMKPacket : KMKBase
- (instancetype)initWithId:(NSString *)id eventType:(KMKEventType *)eventType eventPriority:(int32_t)eventPriority createTimestamp:(int64_t)createTimestamp content:(KMKKotlinByteArray *)content headers:(KMKHeaders *)headers activeDays:(int32_t)activeDays lastTryTimestamp:(int64_t)lastTryTimestamp __attribute__((swift_name("init(id:eventType:eventPriority:createTimestamp:content:headers:activeDays:lastTryTimestamp:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMKPacketCompanion *companion __attribute__((swift_name("companion")));
- (KMKPacket *)doCopyId:(NSString *)id eventType:(KMKEventType *)eventType eventPriority:(int32_t)eventPriority createTimestamp:(int64_t)createTimestamp content:(KMKKotlinByteArray *)content headers:(KMKHeaders *)headers activeDays:(int32_t)activeDays lastTryTimestamp:(int64_t)lastTryTimestamp __attribute__((swift_name("doCopy(id:eventType:eventPriority:createTimestamp:content:headers:activeDays:lastTryTimestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="active_days")
*/
@property (readonly) int32_t activeDays __attribute__((swift_name("activeDays")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="content")
*/
@property (readonly) KMKKotlinByteArray *content __attribute__((swift_name("content")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="create_timestamp")
*/
@property (readonly) int64_t createTimestamp __attribute__((swift_name("createTimestamp")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="event_priority")
*/
@property (readonly) int32_t eventPriority __attribute__((swift_name("eventPriority")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="event_type")
*/
@property (readonly) KMKEventType *eventType __attribute__((swift_name("eventType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="headers")
*/
@property (readonly) KMKHeaders *headers __attribute__((swift_name("headers")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property (readonly) NSString *id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="last_try_timestamp")
*/
@property (readonly) int64_t lastTryTimestamp __attribute__((swift_name("lastTryTimestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Packet.Companion")))
@interface KMKPacketCompanion : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKPacketCompanion *shared __attribute__((swift_name("shared")));
- (id<KMKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppContext")))
@interface KMKAppContext : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)appContext __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKAppContext *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("AppInfo")))
@protocol KMKAppInfo
@required
- (NSArray<id<KMKAppSignatureInfo>> *)getAppSignatureInfo __attribute__((swift_name("getAppSignatureInfo()")));
@property (readonly) int64_t applicationInstallTime __attribute__((swift_name("applicationInstallTime")));
@property (readonly) NSString *gsfId __attribute__((swift_name("gsfId")));
@property (readonly) NSString *packageName __attribute__((swift_name("packageName")));
@property (readonly) NSString *packageVersion __attribute__((swift_name("packageVersion")));
@property (readonly) NSString *publicSourceDir __attribute__((swift_name("publicSourceDir")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BuildWrapper")))
@interface KMKBuildWrapper : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)buildWrapper __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKBuildWrapper *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DateUtils")))
@interface KMKDateUtils : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dateUtils __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKDateUtils *shared __attribute__((swift_name("shared")));
- (NSString *)iso3339ExtendedTimestamp:(int64_t)receiver __attribute__((swift_name("iso3339ExtendedTimestamp(_:)")));
- (NSString *)iso3339Timestamp:(int64_t)receiver __attribute__((swift_name("iso3339Timestamp(_:)")));
- (int64_t)iso8601TimeMilliSeconds:(NSString *)receiver __attribute__((swift_name("iso8601TimeMilliSeconds(_:)")));
- (NSString *)toEventDateTimestamp:(int64_t)receiver __attribute__((swift_name("toEventDateTimestamp(_:)")));
- (NSString *)toLogDateTimestamp:(int64_t)receiver __attribute__((swift_name("toLogDateTimestamp(_:)")));
- (KMKLong * _Nullable)toServerTimeMillis:(NSString *)receiver __attribute__((swift_name("toServerTimeMillis(_:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyldImageDescriptor")))
@interface KMKDyldImageDescriptor : KMKBase
- (instancetype)initWithPath:(NSString *)path vmaddr:(int64_t)vmaddr __attribute__((swift_name("init(path:vmaddr:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMKDyldImageDescriptorCompanion *companion __attribute__((swift_name("companion")));
- (KMKDyldImageDescriptor *)doCopyPath:(NSString *)path vmaddr:(int64_t)vmaddr __attribute__((swift_name("doCopy(path:vmaddr:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="path")
*/
@property (readonly) NSString *path __attribute__((swift_name("path")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="vmaddr")
*/
@property (readonly) int64_t vmaddr __attribute__((swift_name("vmaddr")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DyldImageDescriptor.Companion")))
@interface KMKDyldImageDescriptorCompanion : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKDyldImageDescriptorCompanion *shared __attribute__((swift_name("shared")));
- (id<KMKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("JailbreakDetector")))
@protocol KMKJailbreakDetector
@required
@property (readonly) KMKBoolean * _Nullable isJailbroken __attribute__((swift_name("isJailbroken")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstalledApplicationsAll")))
@interface KMKInstalledApplicationsAll : KMKBase
- (instancetype)initWithId:(int64_t)id version:(NSString *)version installationTimestamp:(int64_t)installationTimestamp lastUpdateTimestamp:(int64_t)lastUpdateTimestamp packageName:(NSString *)packageName __attribute__((swift_name("init(id:version:installationTimestamp:lastUpdateTimestamp:packageName:)"))) __attribute__((objc_designated_initializer));
- (KMKInstalledApplicationsAll *)doCopyId:(int64_t)id version:(NSString *)version installationTimestamp:(int64_t)installationTimestamp lastUpdateTimestamp:(int64_t)lastUpdateTimestamp packageName:(NSString *)packageName __attribute__((swift_name("doCopy(id:version:installationTimestamp:lastUpdateTimestamp:packageName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) int64_t installationTimestamp __attribute__((swift_name("installationTimestamp")));
@property (readonly) int64_t lastUpdateTimestamp __attribute__((swift_name("lastUpdateTimestamp")));
@property (readonly) NSString *packageName __attribute__((swift_name("packageName")));
@property (readonly) NSString *version __attribute__((swift_name("version")));
@end

__attribute__((swift_name("RuntimeBaseTransacterImpl")))
@interface KMKRuntimeBaseTransacterImpl : KMKBase
- (instancetype)initWithDriver:(id<KMKRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)createArgumentsCount:(int32_t)count __attribute__((swift_name("createArguments(count:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)notifyQueriesIdentifier:(int32_t)identifier tableProvider:(void (^)(KMKKotlinUnit *(^)(NSString *)))tableProvider __attribute__((swift_name("notifyQueries(identifier:tableProvider:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id _Nullable)postTransactionCleanupTransaction:(KMKRuntimeTransacterTransaction *)transaction enclosing:(KMKRuntimeTransacterTransaction * _Nullable)enclosing thrownException:(KMKKotlinThrowable * _Nullable)thrownException returnValue:(id _Nullable)returnValue __attribute__((swift_name("postTransactionCleanup(transaction:enclosing:thrownException:returnValue:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<KMKRuntimeSqlDriver> driver __attribute__((swift_name("driver")));
@end

__attribute__((swift_name("RuntimeTransacterImpl")))
@interface KMKRuntimeTransacterImpl : KMKRuntimeBaseTransacterImpl <KMKRuntimeTransacter>
- (instancetype)initWithDriver:(id<KMKRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<KMKRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<KMKRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PacketCacheQueries")))
@interface KMKPacketCacheQueries : KMKRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<KMKRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (KMKRuntimeQuery<KMKLong *> *)countRows __attribute__((swift_name("countRows()")));
- (void)deleteAllInstalledApps __attribute__((swift_name("deleteAllInstalledApps()")));
- (void)deleteAllPackets __attribute__((swift_name("deleteAllPackets()")));
- (void)deleteAllScannedApps __attribute__((swift_name("deleteAllScannedApps()")));
- (void)deleteInstalledAppPackageName:(NSString *)packageName __attribute__((swift_name("deleteInstalledApp(packageName:)")));
- (void)deleteOldest __attribute__((swift_name("deleteOldest()")));
- (void)deleteOldestByTypeType:(NSString *)type __attribute__((swift_name("deleteOldestByType(type:)")));
- (void)deletePacketId:(NSString *)id __attribute__((swift_name("deletePacket(id:)")));
- (void)deleteScannedAppPackageName:(NSString *)packageName __attribute__((swift_name("deleteScannedApp(packageName:)")));
- (KMKRuntimeQuery<KMKInstalledApplicationsAll *> *)getAllInstalledApps __attribute__((swift_name("getAllInstalledApps()")));
- (KMKRuntimeQuery<id> *)getAllInstalledAppsMapper:(id (^)(KMKLong *, NSString *, KMKLong *, KMKLong *, NSString *))mapper __attribute__((swift_name("getAllInstalledApps(mapper:)")));
- (KMKRuntimeQuery<KMKScannedApplications *> *)getAllScannedApps __attribute__((swift_name("getAllScannedApps()")));
- (KMKRuntimeQuery<id> *)getAllScannedAppsMapper:(id (^)(KMKLong *, KMKLong *, NSString *, NSString *, NSString *, NSString *))mapper __attribute__((swift_name("getAllScannedApps(mapper:)")));
- (KMKRuntimeQuery<KMKLong *> *)getCountByTypeType:(NSString *)type __attribute__((swift_name("getCountByType(type:)")));
- (KMKRuntimeQuery<KMKInstalledApplicationsAll *> *)getInstalledAppPackageName:(NSString *)packageName __attribute__((swift_name("getInstalledApp(packageName:)")));
- (KMKRuntimeQuery<id> *)getInstalledAppPackageName:(NSString *)packageName mapper:(id (^)(KMKLong *, NSString *, KMKLong *, KMKLong *, NSString *))mapper __attribute__((swift_name("getInstalledApp(packageName:mapper:)")));
- (KMKRuntimeQuery<KMKStatisticsCache *> *)getLastPacketByPriorityPriority:(int64_t)priority __attribute__((swift_name("getLastPacketByPriority(priority:)")));
- (KMKRuntimeQuery<id> *)getLastPacketByPriorityPriority:(int64_t)priority mapper:(id (^)(NSString *, NSString *, KMKLong *, KMKKotlinByteArray *, KMKLong *, KMKLong *, KMKLong *, NSString *, NSString *, KMKLong *))mapper __attribute__((swift_name("getLastPacketByPriority(priority:mapper:)")));
- (KMKRuntimeQuery<KMKStatisticsCache *> *)getLastPacketOrderByPriorityAsc __attribute__((swift_name("getLastPacketOrderByPriorityAsc()")));
- (KMKRuntimeQuery<id> *)getLastPacketOrderByPriorityAscMapper:(id (^)(NSString *, NSString *, KMKLong *, KMKKotlinByteArray *, KMKLong *, KMKLong *, KMKLong *, NSString *, NSString *, KMKLong *))mapper __attribute__((swift_name("getLastPacketOrderByPriorityAsc(mapper:)")));
- (KMKRuntimeQuery<KMKStatisticsCache *> *)getOldestPacketByPriorityPriority:(int64_t)priority __attribute__((swift_name("getOldestPacketByPriority(priority:)")));
- (KMKRuntimeQuery<id> *)getOldestPacketByPriorityPriority:(int64_t)priority mapper:(id (^)(NSString *, NSString *, KMKLong *, KMKKotlinByteArray *, KMKLong *, KMKLong *, KMKLong *, NSString *, NSString *, KMKLong *))mapper __attribute__((swift_name("getOldestPacketByPriority(priority:mapper:)")));
- (KMKRuntimeQuery<KMKStatisticsCache *> *)getOldestPacketOrderByPriorityDesc __attribute__((swift_name("getOldestPacketOrderByPriorityDesc()")));
- (KMKRuntimeQuery<id> *)getOldestPacketOrderByPriorityDescMapper:(id (^)(NSString *, NSString *, KMKLong *, KMKKotlinByteArray *, KMKLong *, KMKLong *, KMKLong *, NSString *, NSString *, KMKLong *))mapper __attribute__((swift_name("getOldestPacketOrderByPriorityDesc(mapper:)")));
- (KMKRuntimeQuery<KMKStatisticsCache *> *)getPacketByIdId:(NSString *)id __attribute__((swift_name("getPacketById(id:)")));
- (KMKRuntimeQuery<id> *)getPacketByIdId:(NSString *)id mapper:(id (^)(NSString *, NSString *, KMKLong *, KMKKotlinByteArray *, KMKLong *, KMKLong *, KMKLong *, NSString *, NSString *, KMKLong *))mapper __attribute__((swift_name("getPacketById(id:mapper:)")));
- (KMKRuntimeQuery<KMKScannedApplications *> *)getScannedAppPackageName:(NSString *)packageName __attribute__((swift_name("getScannedApp(packageName:)")));
- (KMKRuntimeQuery<id> *)getScannedAppPackageName:(NSString *)packageName mapper:(id (^)(KMKLong *, KMKLong *, NSString *, NSString *, NSString *, NSString *))mapper __attribute__((swift_name("getScannedApp(packageName:mapper:)")));
- (KMKRuntimeQuery<KMKScannedApplications *> *)getScannedAppsPackageName:(id)packageName __attribute__((swift_name("getScannedApps(packageName:)")));
- (KMKRuntimeQuery<id> *)getScannedAppsPackageName:(id)packageName mapper:(id (^)(KMKLong *, KMKLong *, NSString *, NSString *, NSString *, NSString *))mapper __attribute__((swift_name("getScannedApps(packageName:mapper:)")));
- (void)insertInstalledAppVersion:(NSString *)version installationTimestamp:(int64_t)installationTimestamp lastUpdateTimestamp:(int64_t)lastUpdateTimestamp packageName:(NSString *)packageName __attribute__((swift_name("insertInstalledApp(version:installationTimestamp:lastUpdateTimestamp:packageName:)")));
- (void)insertPacketId:(NSString *)id type:(NSString *)type priority:(int64_t)priority content:(KMKKotlinByteArray *)content createTimestamp:(int64_t)createTimestamp lastTryTimestamp:(int64_t)lastTryTimestamp counter:(int64_t)counter deviceTag:(NSString *)deviceTag sessionId:(NSString *)sessionId activeDays:(int64_t)activeDays __attribute__((swift_name("insertPacket(id:type:priority:content:createTimestamp:lastTryTimestamp:counter:deviceTag:sessionId:activeDays:)")));
- (void)insertScannedAppCreatedAt:(int64_t)createdAt md5:(NSString *)md5 sha256:(NSString *)sha256 packageName:(NSString *)packageName sourceDir:(NSString *)sourceDir __attribute__((swift_name("insertScannedApp(createdAt:md5:sha256:packageName:sourceDir:)")));
- (KMKRuntimeQuery<KMKStatisticsCache *> *)selectAllPackets __attribute__((swift_name("selectAllPackets()")));
- (KMKRuntimeQuery<id> *)selectAllPacketsMapper:(id (^)(NSString *, NSString *, KMKLong *, KMKKotlinByteArray *, KMKLong *, KMKLong *, KMKLong *, NSString *, NSString *, KMKLong *))mapper __attribute__((swift_name("selectAllPackets(mapper:)")));
- (void)updateTimeStampLastTryTimestamp:(int64_t)lastTryTimestamp id:(NSString *)id __attribute__((swift_name("updateTimeStamp(lastTryTimestamp:id:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScannedApplications")))
@interface KMKScannedApplications : KMKBase
- (instancetype)initWithId:(int64_t)id createdAt:(int64_t)createdAt md5:(NSString *)md5 sha256:(NSString *)sha256 packageName:(NSString *)packageName sourceDir:(NSString *)sourceDir __attribute__((swift_name("init(id:createdAt:md5:sha256:packageName:sourceDir:)"))) __attribute__((objc_designated_initializer));
- (KMKScannedApplications *)doCopyId:(int64_t)id createdAt:(int64_t)createdAt md5:(NSString *)md5 sha256:(NSString *)sha256 packageName:(NSString *)packageName sourceDir:(NSString *)sourceDir __attribute__((swift_name("doCopy(id:createdAt:md5:sha256:packageName:sourceDir:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t createdAt __attribute__((swift_name("createdAt")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSString *md5 __attribute__((swift_name("md5")));
@property (readonly) NSString *packageName __attribute__((swift_name("packageName")));
@property (readonly) NSString *sha256 __attribute__((swift_name("sha256")));
@property (readonly) NSString *sourceDir __attribute__((swift_name("sourceDir")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StatisticsCache")))
@interface KMKStatisticsCache : KMKBase
- (instancetype)initWithId:(NSString *)id type:(NSString *)type priority:(int64_t)priority content:(KMKKotlinByteArray *)content createTimestamp:(int64_t)createTimestamp lastTryTimestamp:(int64_t)lastTryTimestamp counter:(int64_t)counter deviceTag:(NSString *)deviceTag sessionId:(NSString *)sessionId activeDays:(int64_t)activeDays __attribute__((swift_name("init(id:type:priority:content:createTimestamp:lastTryTimestamp:counter:deviceTag:sessionId:activeDays:)"))) __attribute__((objc_designated_initializer));
- (KMKStatisticsCache *)doCopyId:(NSString *)id type:(NSString *)type priority:(int64_t)priority content:(KMKKotlinByteArray *)content createTimestamp:(int64_t)createTimestamp lastTryTimestamp:(int64_t)lastTryTimestamp counter:(int64_t)counter deviceTag:(NSString *)deviceTag sessionId:(NSString *)sessionId activeDays:(int64_t)activeDays __attribute__((swift_name("doCopy(id:type:priority:content:createTimestamp:lastTryTimestamp:counter:deviceTag:sessionId:activeDays:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t activeDays __attribute__((swift_name("activeDays")));
@property (readonly) KMKKotlinByteArray *content __attribute__((swift_name("content")));
@property (readonly) int64_t counter __attribute__((swift_name("counter")));
@property (readonly) int64_t createTimestamp __attribute__((swift_name("createTimestamp")));
@property (readonly) NSString *deviceTag __attribute__((swift_name("deviceTag")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) int64_t lastTryTimestamp __attribute__((swift_name("lastTryTimestamp")));
@property (readonly) int64_t priority __attribute__((swift_name("priority")));
@property (readonly) NSString *sessionId __attribute__((swift_name("sessionId")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DateUtilsKt")))
@interface KMKDateUtilsKt : KMKBase
+ (int64_t)elapsedRealtime __attribute__((swift_name("elapsedRealtime()")));
+ (NSString *)millisToStringUsingFormat:(int64_t)receiver format:(NSString *)format __attribute__((swift_name("millisToStringUsingFormat(_:format:)")));
+ (KMKLong * _Nullable)parseDateTimeUsingFormat:(NSString *)receiver format:(NSString *)format __attribute__((swift_name("parseDateTimeUsingFormat(_:format:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetClientKt")))
@interface KMKNetClientKt : KMKBase
+ (KMKKtor_client_coreHttpClient *)httpClientConfig:(void (^)(KMKKtor_client_coreHttpClientConfig<id> *))config __attribute__((swift_name("httpClient(config:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrintExtKt")))
@interface KMKPrintExtKt : KMKBase
+ (NSString *)blueLine:(id _Nullable)receiver __attribute__((swift_name("blueLine(_:)")));
+ (NSString *)brightBlueLine:(id _Nullable)receiver __attribute__((swift_name("brightBlueLine(_:)")));
+ (NSString *)brightCyanLine:(id _Nullable)receiver __attribute__((swift_name("brightCyanLine(_:)")));
+ (NSString *)brightGrayLine:(id _Nullable)receiver __attribute__((swift_name("brightGrayLine(_:)")));
+ (NSString *)brightGreenLine:(id _Nullable)receiver __attribute__((swift_name("brightGreenLine(_:)")));
+ (NSString *)brightMagentaLine:(id _Nullable)receiver __attribute__((swift_name("brightMagentaLine(_:)")));
+ (NSString *)brightRedLine:(id _Nullable)receiver __attribute__((swift_name("brightRedLine(_:)")));
+ (NSString *)brightYellowLine:(id _Nullable)receiver __attribute__((swift_name("brightYellowLine(_:)")));
+ (NSString *)cyanLine:(id _Nullable)receiver __attribute__((swift_name("cyanLine(_:)")));
+ (NSString *)getTimeToPrint __attribute__((swift_name("getTimeToPrint()")));
+ (NSString *)grayLine:(id _Nullable)receiver __attribute__((swift_name("grayLine(_:)")));
+ (NSString *)greenLine:(id _Nullable)receiver __attribute__((swift_name("greenLine(_:)")));
+ (NSString *)magentaLine:(id _Nullable)receiver __attribute__((swift_name("magentaLine(_:)")));
+ (NSString *)redLine:(id _Nullable)receiver __attribute__((swift_name("redLine(_:)")));
+ (NSString *)yellowLine:(id _Nullable)receiver __attribute__((swift_name("yellowLine(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface KMKKotlinEnumCompanion : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface KMKKotlinArray<T> : KMKBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(KMKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<KMKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("RuntimeTransactionCallbacks")))
@protocol KMKRuntimeTransactionCallbacks
@required
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
@end

__attribute__((swift_name("RuntimeTransactionWithoutReturn")))
@protocol KMKRuntimeTransactionWithoutReturn <KMKRuntimeTransactionCallbacks>
@required
- (void)rollback __attribute__((swift_name("rollback()")));
- (void)transactionBody:(void (^)(id<KMKRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(body:)")));
@end

__attribute__((swift_name("RuntimeTransactionWithReturn")))
@protocol KMKRuntimeTransactionWithReturn <KMKRuntimeTransactionCallbacks>
@required
- (void)rollbackReturnValue:(id _Nullable)returnValue __attribute__((swift_name("rollback(returnValue:)")));
- (id _Nullable)transactionBody_:(id _Nullable (^)(id<KMKRuntimeTransactionWithReturn>))body __attribute__((swift_name("transaction(body_:)")));
@end

__attribute__((swift_name("RuntimeCloseable")))
@protocol KMKRuntimeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("RuntimeSqlDriver")))
@protocol KMKRuntimeSqlDriver <KMKRuntimeCloseable>
@required
- (void)addListenerQueryKeys:(KMKKotlinArray<NSString *> *)queryKeys listener:(id<KMKRuntimeQueryListener>)listener __attribute__((swift_name("addListener(queryKeys:listener:)")));
- (KMKRuntimeTransacterTransaction * _Nullable)currentTransaction __attribute__((swift_name("currentTransaction()")));
- (id<KMKRuntimeQueryResult>)executeIdentifier:(KMKInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<KMKRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("execute(identifier:sql:parameters:binders:)")));
- (id<KMKRuntimeQueryResult>)executeQueryIdentifier:(KMKInt * _Nullable)identifier sql:(NSString *)sql mapper:(id<KMKRuntimeQueryResult> (^)(id<KMKRuntimeSqlCursor>))mapper parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<KMKRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("executeQuery(identifier:sql:mapper:parameters:binders:)")));
- (id<KMKRuntimeQueryResult>)doNewTransaction __attribute__((swift_name("doNewTransaction()")));
- (void)notifyListenersQueryKeys:(KMKKotlinArray<NSString *> *)queryKeys __attribute__((swift_name("notifyListeners(queryKeys:)")));
- (void)removeListenerQueryKeys:(KMKKotlinArray<NSString *> *)queryKeys listener:(id<KMKRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(queryKeys:listener:)")));
@end

__attribute__((swift_name("RuntimeSqlSchema")))
@protocol KMKRuntimeSqlSchema
@required
- (id<KMKRuntimeQueryResult>)createDriver:(id<KMKRuntimeSqlDriver>)driver __attribute__((swift_name("create(driver:)")));
- (id<KMKRuntimeQueryResult>)migrateDriver:(id<KMKRuntimeSqlDriver>)driver oldVersion:(int64_t)oldVersion newVersion:(int64_t)newVersion callbacks:(KMKKotlinArray<KMKRuntimeAfterVersion *> *)callbacks __attribute__((swift_name("migrate(driver:oldVersion:newVersion:callbacks:)")));
@property (readonly) int64_t version __attribute__((swift_name("version")));
@end

__attribute__((swift_name("Multiplatform_settingsSettings")))
@protocol KMKMultiplatform_settingsSettings
@required
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)getBooleanKey:(NSString *)key defaultValue:(BOOL)defaultValue __attribute__((swift_name("getBoolean(key:defaultValue:)")));
- (KMKBoolean * _Nullable)getBooleanOrNullKey:(NSString *)key __attribute__((swift_name("getBooleanOrNull(key:)")));
- (double)getDoubleKey:(NSString *)key defaultValue:(double)defaultValue __attribute__((swift_name("getDouble(key:defaultValue:)")));
- (KMKDouble * _Nullable)getDoubleOrNullKey:(NSString *)key __attribute__((swift_name("getDoubleOrNull(key:)")));
- (float)getFloatKey:(NSString *)key defaultValue:(float)defaultValue __attribute__((swift_name("getFloat(key:defaultValue:)")));
- (KMKFloat * _Nullable)getFloatOrNullKey:(NSString *)key __attribute__((swift_name("getFloatOrNull(key:)")));
- (int32_t)getIntKey:(NSString *)key defaultValue:(int32_t)defaultValue __attribute__((swift_name("getInt(key:defaultValue:)")));
- (KMKInt * _Nullable)getIntOrNullKey:(NSString *)key __attribute__((swift_name("getIntOrNull(key:)")));
- (int64_t)getLongKey:(NSString *)key defaultValue:(int64_t)defaultValue __attribute__((swift_name("getLong(key:defaultValue:)")));
- (KMKLong * _Nullable)getLongOrNullKey:(NSString *)key __attribute__((swift_name("getLongOrNull(key:)")));
- (NSString *)getStringKey:(NSString *)key defaultValue:(NSString *)defaultValue __attribute__((swift_name("getString(key:defaultValue:)")));
- (NSString * _Nullable)getStringOrNullKey:(NSString *)key __attribute__((swift_name("getStringOrNull(key:)")));
- (BOOL)hasKeyKey:(NSString *)key __attribute__((swift_name("hasKey(key:)")));
- (void)putBooleanKey:(NSString *)key value:(BOOL)value __attribute__((swift_name("putBoolean(key:value:)")));
- (void)putDoubleKey:(NSString *)key value:(double)value __attribute__((swift_name("putDouble(key:value:)")));
- (void)putFloatKey:(NSString *)key value:(float)value __attribute__((swift_name("putFloat(key:value:)")));
- (void)putIntKey:(NSString *)key value:(int32_t)value __attribute__((swift_name("putInt(key:value:)")));
- (void)putLongKey:(NSString *)key value:(int64_t)value __attribute__((swift_name("putLong(key:value:)")));
- (void)putStringKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("putString(key:value:)")));
- (void)removeKey:(NSString *)key __attribute__((swift_name("remove(key:)")));
@property (readonly) NSSet<NSString *> *keys __attribute__((swift_name("keys")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol KMKKotlinx_serialization_coreEncoder
@required
- (id<KMKKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<KMKKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<KMKKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<KMKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<KMKKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<KMKKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<KMKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<KMKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<KMKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) KMKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol KMKKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<KMKKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KMKKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<KMKKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) KMKKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol KMKKotlinx_serialization_coreDecoder
@required
- (id<KMKKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<KMKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<KMKKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<KMKKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<KMKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (KMKKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<KMKKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<KMKKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) KMKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface KMKKotlinByteArray : KMKBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(KMKByte *(^)(KMKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (KMKKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface KMKKotlinUnit : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("RuntimeTransacterTransaction")))
@interface KMKRuntimeTransacterTransaction : KMKBase <KMKRuntimeTransactionCallbacks>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id<KMKRuntimeQueryResult>)endTransactionSuccessful:(BOOL)successful __attribute__((swift_name("endTransaction(successful:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) KMKRuntimeTransacterTransaction * _Nullable enclosingTransaction __attribute__((swift_name("enclosingTransaction")));
@end

__attribute__((swift_name("RuntimeExecutableQuery")))
@interface KMKRuntimeExecutableQuery<__covariant RowType> : KMKBase
- (instancetype)initWithMapper:(RowType (^)(id<KMKRuntimeSqlCursor>))mapper __attribute__((swift_name("init(mapper:)"))) __attribute__((objc_designated_initializer));
- (id<KMKRuntimeQueryResult>)executeMapper:(id<KMKRuntimeQueryResult> (^)(id<KMKRuntimeSqlCursor>))mapper __attribute__((swift_name("execute(mapper:)")));
- (NSArray<RowType> *)executeAsList __attribute__((swift_name("executeAsList()")));
- (RowType)executeAsOne __attribute__((swift_name("executeAsOne()")));
- (RowType _Nullable)executeAsOneOrNull __attribute__((swift_name("executeAsOneOrNull()")));
@property (readonly) RowType (^mapper)(id<KMKRuntimeSqlCursor>) __attribute__((swift_name("mapper")));
@end

__attribute__((swift_name("RuntimeQuery")))
@interface KMKRuntimeQuery<__covariant RowType> : KMKRuntimeExecutableQuery<RowType>
- (instancetype)initWithMapper:(RowType (^)(id<KMKRuntimeSqlCursor>))mapper __attribute__((swift_name("init(mapper:)"))) __attribute__((objc_designated_initializer));
- (void)addListenerListener:(id<KMKRuntimeQueryListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (void)removeListenerListener:(id<KMKRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol KMKKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<KMKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol KMKKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface KMKKtor_client_coreHttpClient : KMKBase <KMKKotlinx_coroutines_coreCoroutineScope, KMKKtor_ioCloseable>
- (instancetype)initWithEngine:(id<KMKKtor_client_coreHttpClientEngine>)engine userConfig:(KMKKtor_client_coreHttpClientConfig<KMKKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (KMKKtor_client_coreHttpClient *)configBlock:(void (^)(KMKKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<KMKKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KMKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<KMKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<KMKKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) KMKKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) KMKKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) KMKKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) KMKKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) KMKKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) KMKKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface KMKKtor_client_coreHttpClientConfig<T> : KMKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KMKKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(KMKKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<KMKKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(KMKKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(KMKKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol KMKKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("RuntimeQueryListener")))
@protocol KMKRuntimeQueryListener
@required
- (void)queryResultsChanged __attribute__((swift_name("queryResultsChanged()")));
@end

__attribute__((swift_name("RuntimeQueryResult")))
@protocol KMKRuntimeQueryResult
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("await(completionHandler:)")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("RuntimeSqlPreparedStatement")))
@protocol KMKRuntimeSqlPreparedStatement
@required
- (void)bindBooleanIndex:(int32_t)index boolean:(KMKBoolean * _Nullable)boolean __attribute__((swift_name("bindBoolean(index:boolean:)")));
- (void)bindBytesIndex:(int32_t)index bytes:(KMKKotlinByteArray * _Nullable)bytes __attribute__((swift_name("bindBytes(index:bytes:)")));
- (void)bindDoubleIndex:(int32_t)index double:(KMKDouble * _Nullable)double_ __attribute__((swift_name("bindDouble(index:double:)")));
- (void)bindLongIndex:(int32_t)index long:(KMKLong * _Nullable)long_ __attribute__((swift_name("bindLong(index:long:)")));
- (void)bindStringIndex:(int32_t)index string:(NSString * _Nullable)string __attribute__((swift_name("bindString(index:string:)")));
@end

__attribute__((swift_name("RuntimeSqlCursor")))
@protocol KMKRuntimeSqlCursor
@required
- (KMKBoolean * _Nullable)getBooleanIndex:(int32_t)index __attribute__((swift_name("getBoolean(index:)")));
- (KMKKotlinByteArray * _Nullable)getBytesIndex:(int32_t)index __attribute__((swift_name("getBytes(index:)")));
- (KMKDouble * _Nullable)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));
- (KMKLong * _Nullable)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));
- (NSString * _Nullable)getStringIndex:(int32_t)index __attribute__((swift_name("getString(index:)")));
- (id<KMKRuntimeQueryResult>)next __attribute__((swift_name("next()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RuntimeAfterVersion")))
@interface KMKRuntimeAfterVersion : KMKBase
- (instancetype)initWithAfterVersion:(int64_t)afterVersion block:(void (^)(id<KMKRuntimeSqlDriver>))block __attribute__((swift_name("init(afterVersion:block:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int64_t afterVersion __attribute__((swift_name("afterVersion")));
@property (readonly) void (^block)(id<KMKRuntimeSqlDriver>) __attribute__((swift_name("block")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol KMKKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<KMKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<KMKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<KMKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<KMKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<KMKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<KMKKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<KMKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<KMKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<KMKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<KMKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KMKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<KMKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KMKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<KMKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<KMKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<KMKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<KMKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) KMKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface KMKKotlinx_serialization_coreSerializersModule : KMKBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<KMKKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KMKKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<KMKKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<KMKKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KMKKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KMKKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KMKKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KMKKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol KMKKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface KMKKotlinx_serialization_coreSerialKind : KMKBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol KMKKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<KMKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<KMKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<KMKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<KMKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<KMKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<KMKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<KMKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<KMKKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<KMKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<KMKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<KMKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<KMKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KMKKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<KMKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KMKKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<KMKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<KMKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<KMKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) KMKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface KMKKotlinNothing : KMKBase
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface KMKKotlinByteIterator : KMKBase <KMKKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KMKByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol KMKKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<KMKKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<KMKKotlinCoroutineContextElement> _Nullable)getKey:(id<KMKKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<KMKKotlinCoroutineContext>)minusKeyKey:(id<KMKKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<KMKKotlinCoroutineContext>)plusContext:(id<KMKKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol KMKKtor_client_coreHttpClientEngine <KMKKotlinx_coroutines_coreCoroutineScope, KMKKtor_ioCloseable>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(KMKKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(KMKKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(KMKKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) KMKKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) KMKKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<KMKKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface KMKKtor_client_coreHttpClientEngineConfig : KMKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property KMKKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol KMKKtor_client_coreHttpClientEngineCapability
@required
@end

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol KMKKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(KMKKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(KMKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(KMKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(KMKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(KMKKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey_:(KMKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key_:)")));
- (id)takeKey:(KMKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(KMKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<KMKKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface KMKKtor_eventsEvents : KMKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(KMKKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<KMKKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(KMKKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(KMKKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface KMKKtor_utilsPipeline<TSubject, TContext> : KMKBase
- (instancetype)initWithPhases:(KMKKotlinArray<KMKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(KMKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<KMKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(KMKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(KMKKtor_utilsPipelinePhase *)reference phase:(KMKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(KMKKtor_utilsPipelinePhase *)reference phase:(KMKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(KMKKtor_utilsPipelinePhase *)phase block:(id<KMKKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<KMKKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(KMKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(KMKKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(KMKKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(KMKKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
@property (readonly) id<KMKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<KMKKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface KMKKtor_client_coreHttpReceivePipeline : KMKKtor_utilsPipeline<KMKKtor_client_coreHttpResponse *, KMKKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(KMKKotlinArray<KMKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(KMKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<KMKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KMKKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface KMKKtor_client_coreHttpRequestPipeline : KMKKtor_utilsPipeline<id, KMKKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(KMKKotlinArray<KMKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(KMKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<KMKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KMKKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface KMKKtor_client_coreHttpResponsePipeline : KMKKtor_utilsPipeline<KMKKtor_client_coreHttpResponseContainer *, KMKKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(KMKKotlinArray<KMKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(KMKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<KMKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KMKKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface KMKKtor_client_coreHttpSendPipeline : KMKKtor_utilsPipeline<id, KMKKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(KMKKotlinArray<KMKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(KMKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<KMKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KMKKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol KMKKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(KMKKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) KMKKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface KMKKotlinRuntimeException : KMKKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KMKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KMKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface KMKKotlinIllegalStateException : KMKKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KMKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KMKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface KMKKotlinCancellationException : KMKKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KMKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KMKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol KMKKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<KMKKotlinKClass>)kClass provider:(id<KMKKotlinx_serialization_coreKSerializer> (^)(NSArray<id<KMKKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<KMKKotlinKClass>)kClass serializer:(id<KMKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<KMKKotlinKClass>)baseClass actualClass:(id<KMKKotlinKClass>)actualClass actualSerializer:(id<KMKKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<KMKKotlinKClass>)baseClass defaultDeserializerProvider:(id<KMKKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<KMKKotlinKClass>)baseClass defaultDeserializerProvider:(id<KMKKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<KMKKotlinKClass>)baseClass defaultSerializerProvider:(id<KMKKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol KMKKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol KMKKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol KMKKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol KMKKotlinKClass <KMKKotlinKDeclarationContainer, KMKKotlinKAnnotatedElement, KMKKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol KMKKotlinCoroutineContextElement <KMKKotlinCoroutineContext>
@required
@property (readonly) id<KMKKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol KMKKotlinCoroutineContextKey
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface KMKKtor_client_coreHttpRequestData : KMKBase
- (instancetype)initWithUrl:(KMKKtor_httpUrl *)url method:(KMKKtor_httpHttpMethod *)method headers:(id<KMKKtor_httpHeaders>)headers body:(KMKKtor_httpOutgoingContent *)body executionContext:(id<KMKKotlinx_coroutines_coreJob>)executionContext attributes:(id<KMKKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<KMKKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KMKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) KMKKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<KMKKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<KMKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) KMKKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) KMKKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface KMKKtor_client_coreHttpResponseData : KMKBase
- (instancetype)initWithStatusCode:(KMKKtor_httpHttpStatusCode *)statusCode requestTime:(KMKKtor_utilsGMTDate *)requestTime headers:(id<KMKKtor_httpHeaders>)headers version:(KMKKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<KMKKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<KMKKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<KMKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) KMKKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) KMKKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) KMKKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) KMKKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface KMKKotlinAbstractCoroutineContextElement : KMKBase <KMKKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<KMKKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<KMKKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol KMKKotlinContinuationInterceptor <KMKKotlinCoroutineContextElement>
@required
- (id<KMKKotlinContinuation>)interceptContinuationContinuation:(id<KMKKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<KMKKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface KMKKotlinx_coroutines_coreCoroutineDispatcher : KMKKotlinAbstractCoroutineContextElement <KMKKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<KMKKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KMKKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<KMKKotlinCoroutineContext>)context block:(id<KMKKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<KMKKotlinCoroutineContext>)context block:(id<KMKKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<KMKKotlinContinuation>)interceptContinuationContinuation:(id<KMKKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<KMKKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (KMKKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (KMKKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(KMKKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<KMKKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface KMKKtor_client_coreProxyConfig : KMKBase
- (instancetype)initWithUrl:(KMKKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KMKKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface KMKKtor_utilsAttributeKey<T> : KMKBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface KMKKtor_eventsEventDefinition<T> : KMKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol KMKKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface KMKKtor_utilsPipelinePhase : KMKBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol KMKKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol KMKKotlinSuspendFunction2 <KMKKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface KMKKtor_client_coreHttpReceivePipelinePhases : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) KMKKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) KMKKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) KMKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol KMKKtor_httpHttpMessage
@required
@property (readonly) id<KMKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface KMKKtor_client_coreHttpResponse : KMKBase <KMKKtor_httpHttpMessage, KMKKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KMKKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<KMKKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) KMKKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) KMKKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) KMKKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) KMKKtor_httpHttpProtocolVersion *version_ __attribute__((swift_name("version_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface KMKKtor_client_coreHttpRequestPipelinePhases : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) KMKKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) KMKKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) KMKKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) KMKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) KMKKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol KMKKtor_httpHttpMessageBuilder
@required
@property (readonly) KMKKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface KMKKtor_client_coreHttpRequestBuilder : KMKBase <KMKKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KMKKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (KMKKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<KMKKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<KMKKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<KMKKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (KMKKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(KMKKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (KMKKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(KMKKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(KMKKtor_httpURLBuilder *, KMKKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<KMKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property KMKKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<KMKKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) KMKKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property KMKKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) KMKKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface KMKKtor_client_coreHttpResponsePipelinePhases : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) KMKKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) KMKKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) KMKKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) KMKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) KMKKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface KMKKtor_client_coreHttpResponseContainer : KMKBase
- (instancetype)initWithExpectedType:(KMKKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (KMKKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(KMKKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KMKKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface KMKKtor_client_coreHttpClientCall : KMKBase <KMKKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(KMKKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(KMKKtor_client_coreHttpClient *)client requestData:(KMKKtor_client_coreHttpRequestData *)requestData responseData:(KMKKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMKKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(KMKKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(KMKKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<KMKKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<KMKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) KMKKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<KMKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<KMKKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property KMKKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface KMKKtor_client_coreHttpSendPipelinePhases : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) KMKKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) KMKKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) KMKKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) KMKKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) KMKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface KMKKtor_httpUrl : KMKBase
@property (class, readonly, getter=companion) KMKKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<KMKKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) KMKKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface KMKKtor_httpHttpMethod : KMKBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMKKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (KMKKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol KMKKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<KMKKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol KMKKtor_httpHeaders <KMKKtor_utilsStringValues>
@required
@end

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface KMKKtor_httpOutgoingContent : KMKBase
- (id _Nullable)getPropertyKey:(KMKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(KMKKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<KMKKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) KMKLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) KMKKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<KMKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) KMKKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol KMKKotlinx_coroutines_coreJob <KMKKotlinCoroutineContextElement>
@required
- (id<KMKKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<KMKKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(KMKKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (KMKKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<KMKKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(KMKKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));
- (id<KMKKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(KMKKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<KMKKotlinx_coroutines_coreJob>)plusOther_:(id<KMKKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<KMKKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<KMKKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) id<KMKKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface KMKKtor_httpHttpStatusCode : KMKBase <KMKKotlinComparable>
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMKKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(KMKKtor_httpHttpStatusCode *)other __attribute__((swift_name("compareTo(other:)")));
- (KMKKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (KMKKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface KMKKtor_utilsGMTDate : KMKBase <KMKKotlinComparable>
@property (class, readonly, getter=companion) KMKKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(KMKKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (KMKKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(KMKKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(KMKKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) KMKKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) KMKKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface KMKKtor_httpHttpProtocolVersion : KMKBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMKKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (KMKKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol KMKKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<KMKKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface KMKKotlinAbstractCoroutineContextKey<B, E> : KMKBase <KMKKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<KMKKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<KMKKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface KMKKotlinx_coroutines_coreCoroutineDispatcherKey : KMKKotlinAbstractCoroutineContextKey<id<KMKKotlinContinuationInterceptor>, KMKKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<KMKKotlinCoroutineContextKey>)baseKey safeCast:(id<KMKKotlinCoroutineContextElement> _Nullable (^)(id<KMKKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol KMKKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol KMKKtor_ioByteReadChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(completionHandler:)")));
- (BOOL)cancelCause_:(KMKKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(KMKLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(KMKKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(KMKLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(KMKKtor_ioChunkBuffer *)dst completionHandler:(void (^)(KMKInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));
- (int32_t)readAvailableMin:(int32_t)min block:(void (^)(KMKKtor_ioBuffer *))block __attribute__((swift_name("readAvailable(min:block:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(KMKKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(KMKInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(KMKInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(KMKInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(KMKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(KMKByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(KMKDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(KMKFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(KMKKtor_ioChunkBuffer *)dst n:(int32_t)n completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(KMKKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(KMKInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(KMKLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size completionHandler:(void (^)(KMKKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit completionHandler:(void (^)(KMKKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<KMKKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(KMKShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<KMKKotlinSuspendFunction1>)consumer completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<KMKKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(KMKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) KMKKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol KMKKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<KMKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<KMKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<KMKKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<KMKKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface KMKKtor_utilsStringValuesBuilderImpl : KMKBase <KMKKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<KMKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<KMKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<KMKKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<KMKKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) KMKMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface KMKKtor_httpHeadersBuilder : KMKKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<KMKKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface KMKKtor_client_coreHttpRequestBuilderCompanion : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface KMKKtor_httpURLBuilder : KMKBase
- (instancetype)initWithProtocol:(KMKKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<KMKKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMKKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (KMKKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<KMKKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<KMKKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property KMKKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface KMKKtor_utilsTypeInfo : KMKBase
- (instancetype)initWithType:(id<KMKKotlinKClass>)type reifiedType:(id<KMKKotlinKType>)reifiedType kotlinType:(id<KMKKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (KMKKtor_utilsTypeInfo *)doCopyType:(id<KMKKotlinKClass>)type reifiedType:(id<KMKKotlinKType>)reifiedType kotlinType:(id<KMKKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KMKKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<KMKKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<KMKKotlinKClass> type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface KMKKtor_client_coreHttpClientCallCompanion : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) KMKKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((unavailable("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
@end

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol KMKKtor_client_coreHttpRequest <KMKKtor_httpHttpMessage, KMKKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<KMKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) KMKKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) KMKKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) KMKKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) KMKKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface KMKKtor_httpUrlCompanion : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParameters")))
@protocol KMKKtor_httpParameters <KMKKtor_utilsStringValues>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface KMKKtor_httpURLProtocol : KMKBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMKKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (KMKKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface KMKKtor_httpHttpMethodCompanion : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (KMKKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<KMKKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) KMKKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) KMKKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) KMKKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) KMKKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) KMKKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) KMKKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) KMKKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol KMKKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface KMKKtor_httpHeaderValueWithParameters : KMKBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<KMKKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMKKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<KMKKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface KMKKtor_httpContentType : KMKKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<KMKKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<KMKKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KMKKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(KMKKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (KMKKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (KMKKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol KMKKotlinx_coroutines_coreChildHandle <KMKKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(KMKKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<KMKKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol KMKKotlinx_coroutines_coreChildJob <KMKKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<KMKKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol KMKKotlinSequence
@required
- (id<KMKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause")))
@protocol KMKKotlinx_coroutines_coreSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) KMKKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<KMKKotlinx_coroutines_coreSelectInstance>, id _Nullable, id _Nullable))(KMKKotlinThrowable *) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id, id _Nullable, id _Nullable) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id, id<KMKKotlinx_coroutines_coreSelectInstance>, id _Nullable) __attribute__((swift_name("regFunc")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol KMKKotlinx_coroutines_coreSelectClause0 <KMKKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface KMKKtor_httpHttpStatusCodeCompanion : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (KMKKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) KMKKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) KMKKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) KMKKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) KMKKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) KMKKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) KMKKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) KMKKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) KMKKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) KMKKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) KMKKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) KMKKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) KMKKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) KMKKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) KMKKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) KMKKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) KMKKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) KMKKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) KMKKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) KMKKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) KMKKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) KMKKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) KMKKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) KMKKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) KMKKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) KMKKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) KMKKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) KMKKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) KMKKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) KMKKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) KMKKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) KMKKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) KMKKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) KMKKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) KMKKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) KMKKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) KMKKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) KMKKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) KMKKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) KMKKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) KMKKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) KMKKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) KMKKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) KMKKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) KMKKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) KMKKtor_httpHttpStatusCode *TooEarly __attribute__((swift_name("TooEarly")));
@property (readonly) KMKKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) KMKKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) KMKKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) KMKKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) KMKKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) KMKKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) KMKKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) KMKKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<KMKKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface KMKKtor_utilsGMTDateCompanion : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) KMKKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface KMKKtor_utilsWeekDay : KMKKotlinEnum<KMKKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KMKKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KMKKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) KMKKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) KMKKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) KMKKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) KMKKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) KMKKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) KMKKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (KMKKotlinArray<KMKKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface KMKKtor_utilsMonth : KMKKotlinEnum<KMKKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KMKKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KMKKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) KMKKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) KMKKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) KMKKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) KMKKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) KMKKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) KMKKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) KMKKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) KMKKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) KMKKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) KMKKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) KMKKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (KMKKotlinArray<KMKKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface KMKKtor_httpHttpProtocolVersionCompanion : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (KMKKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (KMKKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) KMKKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) KMKKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) KMKKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) KMKKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) KMKKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface KMKKtor_ioMemory : KMKBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMKKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyToDestination:(KMKKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(KMKKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (KMKKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (KMKKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end

__attribute__((swift_name("Ktor_ioBuffer")))
@interface KMKKtor_ioBuffer : KMKBase
- (instancetype)initWithMemory:(KMKKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMKKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (KMKKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)duplicateToCopy:(KMKKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)reserveEndGapEndGap:(int32_t)endGap __attribute__((swift_name("reserveEndGap(endGap:)")));
- (void)reserveStartGapStartGap:(int32_t)startGap __attribute__((swift_name("reserveStartGap(startGap:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)rewindCount:(int32_t)count __attribute__((swift_name("rewind(count:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeekByte __attribute__((swift_name("tryPeekByte()")));
- (int32_t)tryReadByte __attribute__((swift_name("tryReadByte()")));
- (void)writeByteValue:(int8_t)value __attribute__((swift_name("writeByte(value:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) int32_t endGap __attribute__((swift_name("endGap")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) KMKKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface KMKKtor_ioChunkBuffer : KMKKtor_ioBuffer
- (instancetype)initWithMemory:(KMKKtor_ioMemory *)memory origin:(KMKKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<KMKKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMemory:(KMKKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KMKKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
- (KMKKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (KMKKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<KMKKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next_) KMKKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) KMKKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end

__attribute__((swift_name("Ktor_ioInput")))
@interface KMKKtor_ioInput : KMKBase <KMKKtor_ioCloseable>
- (instancetype)initWithHead:(KMKKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<KMKKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMKKtor_ioInputCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)discardN_:(int64_t)n __attribute__((swift_name("discard(n_:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (KMKKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(KMKKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int32_t)peekToBuffer:(KMKKtor_ioChunkBuffer *)buffer __attribute__((swift_name("peekTo(buffer:)")));
- (int64_t)peekToDestination:(KMKKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<KMKKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<KMKKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<KMKKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface KMKKtor_ioByteReadPacket : KMKKtor_ioInput
- (instancetype)initWithHead:(KMKKtor_ioChunkBuffer *)head pool:(id<KMKKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(KMKKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<KMKKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KMKKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (KMKKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (KMKKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(KMKKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol KMKKtor_ioReadSession
@required
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (KMKKtor_ioChunkBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol KMKKotlinSuspendFunction1 <KMKKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end

__attribute__((swift_name("KotlinAppendable")))
@protocol KMKKotlinAppendable
@required
- (id<KMKKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<KMKKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<KMKKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface KMKKtor_httpURLBuilderCompanion : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol KMKKtor_httpParametersBuilder <KMKKtor_utilsStringValuesBuilder>
@required
@end

__attribute__((swift_name("KotlinKType")))
@protocol KMKKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<KMKKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<KMKKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface KMKKtor_httpURLProtocolCompanion : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (KMKKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) KMKKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) KMKKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) KMKKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) KMKKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) KMKKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, KMKKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface KMKKtor_httpHeaderValueParam : KMKBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (KMKKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface KMKKtor_httpHeaderValueWithParametersCompanion : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<KMKKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface KMKKtor_httpContentTypeCompanion : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (KMKKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) KMKKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol KMKKotlinx_coroutines_coreParentJob <KMKKotlinx_coroutines_coreJob>
@required
- (KMKKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol KMKKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnCompletionDisposableHandle:(id<KMKKotlinx_coroutines_coreDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));
@property (readonly) id<KMKKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface KMKKtor_utilsWeekDayCompanion : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (KMKKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (KMKKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface KMKKtor_utilsMonthCompanion : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (KMKKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (KMKKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface KMKKtor_ioMemoryCompanion : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) KMKKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface KMKKtor_ioBufferCompanion : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) KMKKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol KMKKtor_ioObjectPool <KMKKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface KMKKtor_ioChunkBufferCompanion : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) KMKKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<KMKKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<KMKKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioInput.Companion")))
@interface KMKKtor_ioInputCompanion : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKtor_ioInputCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface KMKKtor_ioByteReadPacketCompanion : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) KMKKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface KMKKotlinKTypeProjection : KMKBase
- (instancetype)initWithVariance:(KMKKotlinKVariance * _Nullable)variance type:(id<KMKKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMKKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (KMKKotlinKTypeProjection *)doCopyVariance:(KMKKotlinKVariance * _Nullable)variance type:(id<KMKKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KMKKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) KMKKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface KMKKotlinKVariance : KMKKotlinEnum<KMKKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KMKKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) KMKKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) KMKKotlinKVariance *out __attribute__((swift_name("out")));
+ (KMKKotlinArray<KMKKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KMKKotlinKVariance *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface KMKKotlinKTypeProjectionCompanion : KMKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMKKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (KMKKotlinKTypeProjection *)contravariantType:(id<KMKKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (KMKKotlinKTypeProjection *)covariantType:(id<KMKKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (KMKKotlinKTypeProjection *)invariantType:(id<KMKKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) KMKKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
