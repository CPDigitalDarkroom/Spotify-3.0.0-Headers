//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADSDKCoreGMSGHandlerDelegate.h"
#import "GADSDKCoreWebViewNotification.h"

@class GADSDKCoreWebView, NSArray, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface GADSDKCoreController : NSObject <GADSDKCoreWebViewNotification, GADSDKCoreGMSGHandlerDelegate>
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSObject<OS_dispatch_queue> *_requestURLQueue;
    NSMutableArray *_pendingActiveWebViewLoadDelegates;
    NSMutableArray *_activeViewSDKCoreWebViews;
    unsigned long long _lastWebViewRefreshTimestamp;
    unsigned long long _requestID;
    unsigned long long _activeViewUnloadCacheMaxSize;
    _Bool _SDKCoreUpdateHandled;
    GADSDKCoreWebView *_activeViewSDKCoreWebView;
    _Bool _useNewWebViewsForActiveViewProcessing;
    double _activeViewSamplingInterval;
    double _swipeToViewSamplingInterval;
    _Bool _SDKConstantsNeedReload;
    NSArray *_activeViewMonitorRefreshIntervals;
    GADSDKCoreWebView *_activeSDKCoreWebView;
    NSMutableDictionary *_pendingBuildAdURLDelegates;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *pendingBuildAdURLDelegates; // @synthesize pendingBuildAdURLDelegates=_pendingBuildAdURLDelegates;
@property(retain, nonatomic) GADSDKCoreWebView *activeSDKCoreWebView; // @synthesize activeSDKCoreWebView=_activeSDKCoreWebView;
@property(copy) NSArray *activeViewMonitorRefreshIntervals; // @synthesize activeViewMonitorRefreshIntervals=_activeViewMonitorRefreshIntervals;
- (void).cxx_destruct;
- (void)SDKCoreGMSGHandlerDidReceiveSDKCoreUpdateNotification:(id)arg1;
- (void)SDKCoreGMSGHandler:(id)arg1 didReceiveInvalidAdWithRequestID:(id)arg2 parameters:(id)arg3;
- (void)SDKCoreGMSGHandler:(id)arg1 loadAdWithRequestID:(id)arg2 parameters:(id)arg3;
- (void)SDKCoreGMSGHandler:(id)arg1 loadAdURLWithRequestID:(id)arg2 parameters:(id)arg3;
- (void)SDKCoreGMSGHandler:(id)arg1 didLoadSDKConstants:(id)arg2;
@property double swipeToViewSamplingInterval;
@property double activeViewSamplingInterval;
- (void)observeSDKCoreWebViewForSDKCoreLoadRequestCompleted;
- (void)didFinishLoadingSDKCoreInSDKCoreWebView:(id)arg1;
- (void)asynchronouslyRequestURLForDelegate:(id)arg1;
- (id)adRequestParameterJSONFromParameters:(id)arg1;
- (void)refreshActiveWebViewSDKCore;
- (void)attemptToRefreshActiveWebViewSDKCore;
- (void)buildAdURL:(id)arg1;
- (void)finishedUsingSDKCoreWebViewForActiveViewProcessing:(id)arg1;
- (id)SDKCoreWebViewForActiveViewProcessing;
- (void)dealloc;
- (id)init;

@end

