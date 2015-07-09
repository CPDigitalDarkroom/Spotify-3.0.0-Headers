//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDataDelegate.h"
#import "SPTCancellationTokenDelegate.h"
#import "SPTDataLoaderRequestResponseHandlerDelegate.h"

@class NSMapTable, NSMutableArray, NSOperationQueue, NSString, NSURLSession, SPTDataLoaderRateLimiter, SPTDataLoaderResolver;

@interface SPTDataLoaderService : NSObject <SPTDataLoaderRequestResponseHandlerDelegate, SPTCancellationTokenDelegate, NSURLSessionDataDelegate>
{
    SPTDataLoaderRateLimiter *_rateLimiter;
    SPTDataLoaderResolver *_resolver;
    id <SPTCancellationTokenFactory> _cancellationTokenFactory;
    NSURLSession *_session;
    NSOperationQueue *_sessionQueue;
    NSMutableArray *_handlers;
    NSMapTable *_consumptionObservers;
}

+ (id)dataLoaderServiceWithUserAgent:(id)arg1 rateLimiter:(id)arg2 resolver:(id)arg3;
@property(retain, nonatomic) NSMapTable *consumptionObservers; // @synthesize consumptionObservers=_consumptionObservers;
@property(retain, nonatomic) NSMutableArray *handlers; // @synthesize handlers=_handlers;
@property(retain, nonatomic) NSOperationQueue *sessionQueue; // @synthesize sessionQueue=_sessionQueue;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) id <SPTCancellationTokenFactory> cancellationTokenFactory; // @synthesize cancellationTokenFactory=_cancellationTokenFactory;
@property(retain, nonatomic) SPTDataLoaderResolver *resolver; // @synthesize resolver=_resolver;
@property(retain, nonatomic) SPTDataLoaderRateLimiter *rateLimiter; // @synthesize rateLimiter=_rateLimiter;
- (void).cxx_destruct;
- (void)dealloc;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cancellationTokenDidCancel:(id)arg1;
- (void)requestResponseHandler:(id)arg1 failedToAuthoriseRequest:(id)arg2 error:(id)arg3;
- (void)requestResponseHandler:(id)arg1 authorisedRequest:(id)arg2;
- (id)requestResponseHandler:(id)arg1 performRequest:(id)arg2;
- (void)cancelAllLoads;
- (void)performRequest:(id)arg1 requestResponseHandler:(id)arg2;
- (id)handlerForTask:(id)arg1;
- (void)removeConsumptionObserver:(id)arg1;
- (void)addConsumptionObserver:(id)arg1 on:(id)arg2;
- (id)createDataLoaderFactoryWithAuthorisers:(id)arg1;
- (id)initWithUserAgent:(id)arg1 rateLimiter:(id)arg2 resolver:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

