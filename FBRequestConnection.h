//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBLogger, FBRequest, FBRequestConnectionRetryManager, FBURLConnection, NSHTTPURLResponse, NSMutableArray, NSMutableURLRequest;

@interface FBRequestConnection : NSObject
{
    BOOL _errorBehavior;
    BOOL _isResultFromCache;
    NSHTTPURLResponse *_urlResponse;
    FBURLConnection *_connection;
    NSMutableArray *_requests;
    int _state;
    NSMutableURLRequest *_internalUrlRequest;
    FBRequest *_deprecatedRequest;
    FBLogger *_logger;
    unsigned long _requestStartTime;
    FBRequestConnectionRetryManager *_retryManager;
    double _timeout;
}

+ (void)addRequestToRefreshPermissionsSession:(id)arg1 connection:(id)arg2;
+ (void)addRequestToExtendTokenForSession:(id)arg1 connection:(id)arg2;
+ (id)userAgent;
+ (void)processGraphObject:(id)arg1 forPath:(id)arg2 withAction:(CDUnknownBlockType)arg3;
+ (void)processGraphObjectPropertyKey:(id)arg1 value:(id)arg2 action:(CDUnknownBlockType)arg3 passByValue:(BOOL)arg4;
+ (id)startForUploadStagingResourceWithImage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)startForUpdateOpenGraphObjectWithId:(id)arg1 title:(id)arg2 image:(id)arg3 url:(id)arg4 description:(id)arg5 objectProperties:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
+ (id)startForUpdateOpenGraphObject:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)startForPostOpenGraphObjectWithType:(id)arg1 title:(id)arg2 image:(id)arg3 url:(id)arg4 description:(id)arg5 objectProperties:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
+ (id)startForPostOpenGraphObject:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)startWithGraphPath:(id)arg1 parameters:(id)arg2 HTTPMethod:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)startForPostWithGraphPath:(id)arg1 graphObject:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)startForDeleteObject:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)startWithGraphPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)startForCustomAudienceThirdPartyID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)startForPlacesSearchAtCoordinate:(CDStruct_2c43369c)arg1 radiusInMeters:(int)arg2 resultsLimit:(int)arg3 searchText:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (id)startForPostStatusUpdate:(id)arg1 place:(id)arg2 tags:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)startForPostStatusUpdate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)startForUploadPhoto:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)startForMyFriendsWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)startForMeWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) FBRequestConnectionRetryManager *retryManager; // @synthesize retryManager=_retryManager;
@property(readonly, nonatomic) BOOL isResultFromCache; // @synthesize isResultFromCache=_isResultFromCache;
@property(nonatomic) unsigned long requestStartTime; // @synthesize requestStartTime=_requestStartTime;
@property(retain, nonatomic) FBLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) FBRequest *deprecatedRequest; // @synthesize deprecatedRequest=_deprecatedRequest;
@property(retain, nonatomic) NSMutableURLRequest *internalUrlRequest; // @synthesize internalUrlRequest=_internalUrlRequest;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) NSMutableArray *requests; // @synthesize requests=_requests;
@property(retain, nonatomic) FBURLConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSHTTPURLResponse *urlResponse; // @synthesize urlResponse=_urlResponse;
- (id)description;
- (id)getRequestMetadata:(id)arg1;
- (void)addPiggybackRequests;
- (void)registerTokenToOmitFromLog:(id)arg1;
- (BOOL)isExpiredTokenError:(id)arg1 resultIndex:(unsigned int)arg2;
- (BOOL)isPasswordChangeError:(id)arg1 resultIndex:(unsigned int)arg2;
- (BOOL)isInvalidSessionError:(id)arg1 resultIndex:(unsigned int)arg2;
- (BOOL)isInsufficientPermissionError:(id)arg1 resultIndex:(unsigned int)arg2;
- (id)checkConnectionError:(id)arg1 statusCode:(int)arg2 parsedJSONResponse:(id)arg3;
- (id)errorWithCode:(int)arg1 statusCode:(int)arg2 parsedJSONResponse:(id)arg3 innerError:(id)arg4 message:(id)arg5;
- (id)errorFromResult:(id)arg1;
- (void)completeWithResults:(id)arg1 orError:(id)arg2;
- (BOOL)shouldCloseRequestSession:(id)arg1;
- (id)unpackIndividualJSONResponseError:(id)arg1;
- (void)completeDeprecatedWithData:(id)arg1 results:(id)arg2 orError:(id)arg3;
- (id)parseJSONOrOtherwise:(id)arg1 error:(id *)arg2;
- (id)parseJSONResponse:(id)arg1 error:(id *)arg2 statusCode:(int)arg3;
- (void)completeWithResponse:(id)arg1 data:(id)arg2 orError:(id)arg3;
- (void)appendAttachments:(id)arg1 toBody:(id)arg2 addFormData:(BOOL)arg3 logger:(id)arg4;
- (BOOL)isAttachment:(id)arg1;
- (void)addRequest:(id)arg1 toBatch:(id)arg2 attachments:(id)arg3;
- (void)appendJSONRequests:(id)arg1 toBody:(id)arg2 andNameAttachments:(id)arg3 logger:(id)arg4;
- (id)getBatchAppID:(id)arg1;
- (id)urlStringForSingleRequest:(id)arg1 forBatch:(BOOL)arg2;
- (void)logRequest:(id)arg1 bodyLength:(unsigned int)arg2 bodyLogger:(id)arg3 attachmentLogger:(id)arg4;
- (id)requestWithBatch:(id)arg1 timeout:(double)arg2;
- (id)newFBURLConnection;
- (void)startURLConnectionWithRequest:(id)arg1 skipRoundTripIfCached:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)startWithCacheIdentity:(id)arg1 skipRoundtripIfCached:(BOOL)arg2;
- (void)cancel;
- (void)start;
- (void)addRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 batchParameters:(id)arg3 behavior:(int)arg4;
- (void)addRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 batchParameters:(id)arg3;
- (void)addRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 batchEntryName:(id)arg3;
- (void)addRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithMetadata:(id)arg1;
- (id)initWithTimeout:(double)arg1;
- (id)init;
@property(nonatomic) int errorBehavior;
@property(retain, nonatomic) NSMutableURLRequest *urlRequest;

@end

