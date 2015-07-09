//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADURLConnectionDelegate.h"

@class GADAd, GADRequest, GADTiming, GADURLConnection, NSRecursiveLock;

@interface GADAdFetcher : NSObject <GADURLConnectionDelegate>
{
    _Bool _hasStartedFetch;
    _Bool _hasNotifiedDelegate;
    _Bool _adConnectionHasCompleted;
    NSRecursiveLock *_recursiveLock;
    GADAd *_ad;
    GADRequest *_request;
    id <GADAdFetcherDelegate> _delegate;
    GADTiming *_timer;
    GADURLConnection *_adConnection;
}

@property(nonatomic) _Bool adConnectionHasCompleted; // @synthesize adConnectionHasCompleted=_adConnectionHasCompleted;
@property(retain, nonatomic) GADURLConnection *adConnection; // @synthesize adConnection=_adConnection;
@property(retain, nonatomic) GADTiming *timer; // @synthesize timer=_timer;
@property(nonatomic) __weak id <GADAdFetcherDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GADRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) GADAd *ad; // @synthesize ad=_ad;
@property(retain, nonatomic) NSRecursiveLock *recursiveLock; // @synthesize recursiveLock=_recursiveLock;
- (void).cxx_destruct;
- (void)connection:(id)arg1 loadDidFail:(id)arg2 httpStatusCode:(long long)arg3;
- (void)connection:(id)arg1 loadDidFinish:(id)arg2 baseURL:(id)arg3;
- (void)connection:(id)arg1 loadDidReceiveCachedResponse:(id)arg2;
- (_Bool)connection:(id)arg1 loadShouldUseCachedResponse:(id)arg2;
- (void)connection:(id)arg1 loadDidReceiveRedirectResponse:(id)arg2;
- (id)connection:(id)arg1 shouldRedirectToURL:(id)arg2;
- (unsigned long long)adResponseTypeFromHeaders:(id)arg1 requestError:(id *)arg2;
- (void)processHTTPHeaders:(id)arg1;
- (void)resourceFailedToLoadWithError:(id)arg1 responseCode:(unsigned long long)arg2;
- (void)markFetchComplete;
- (void)markFetchStart;
- (void)completedURLConnection;
- (_Bool)startFetchWithRequestURL:(id)arg1 responseHeaders:(id)arg2 error:(id *)arg3;
- (_Bool)fetchRequestURL:(id)arg1 delegate:(id)arg2 responseHeaders:(id)arg3 responseAd:(id)arg4 error:(id *)arg5;
- (_Bool)fetchRequestURL:(id)arg1 delegate:(id)arg2 error:(id *)arg3;
- (_Bool)fetchRemainingContentForAd:(id)arg1 headers:(id)arg2 delegate:(id)arg3 request:(id)arg4 error:(id *)arg5;
- (void)cancel;
- (void)dealloc;
- (id)init;

@end
