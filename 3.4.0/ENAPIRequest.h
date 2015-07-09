//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDataDelegate.h"
#import "NSURLConnectionDelegate.h"

@class NSData, NSDictionary, NSError, NSHTTPURLResponse, NSMutableDictionary, NSString, NSURL, NSURLConnection;

@interface ENAPIRequest : NSObject <NSURLConnectionDelegate, NSURLConnectionDataDelegate>
{
    NSDictionary *_response;
    NSMutableDictionary *_parameters;
    NSString *_endpoint;
    CDUnknownBlockType _completionBlock;
    NSURL *_url;
    NSError *_error;
    NSData *_data;
    NSHTTPURLResponse *_urlResponse;
    NSURLConnection *_connection;
}

+ (id)securedEndpoints;
+ (void)addSecuredEndpoint:(id)arg1;
+ (_Bool)isSecuredEndpoint:(id)arg1;
+ (void)setSharedSecret:(id)arg1;
+ (id)sharedSecret;
+ (void)setConsumerKey:(id)arg1;
+ (id)consumerKey;
+ (id)apiKey;
+ (void)setApiKey:(id)arg1 andConsumerKey:(id)arg2 andSharedSecret:(id)arg3;
+ (void)setApiKey:(id)arg1;
+ (id)POSTWithEndpoint:(id)arg1 andParameters:(id)arg2 andCompletionBlock:(CDUnknownBlockType)arg3;
+ (id)GETWithEndpoint:(id)arg1 andParameters:(id)arg2 andCompletionBlock:(CDUnknownBlockType)arg3;
+ (void)cancelAllRequests;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSHTTPURLResponse *urlResponse; // @synthesize urlResponse=_urlResponse;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly) NSString *endpoint; // @synthesize endpoint=_endpoint;
- (void).cxx_destruct;
- (_Bool)connectionShouldUseCredentialStorage:(id)arg1;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (_Bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (id)connection:(id)arg1 needNewBodyStream:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
@property(readonly) NSString *errorMessage;
@property(readonly) _Bool completedSuccessfully;
@property(readonly) NSString *echonestStatusMessage;
@property(readonly) long long echonestStatusCode;
@property(readonly) long long httpResponseCode;
@property(readonly) NSDictionary *response;
@property(readonly) NSMutableDictionary *parameters;
- (void)initiatePostRequest;
- (void)initiateGetRequest;
- (void)executeCompletionBlock;
- (void)didSendCancelNotification:(id)arg1;
- (void)cancelRequest;
- (void)includeOAuthParams;
- (id)constructBaseSignatureForOAuth;
- (id)generateNonce:(long long)arg1;
- (long long)generateTimestamp;
- (id)constructURL;
- (id)initWithEndpoint:(id)arg1 andParameters:(id)arg2 andCompletionBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
