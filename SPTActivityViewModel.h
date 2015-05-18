//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTDataLoaderDelegate.h"
#import "SPTOfflineModeStateObserver.h"
#import "SPTPlayerObserver.h"
#import "SPTProductStateObserver.h"

@class NSString, SPKVObservation, SPTActivityData, SPTActivityUser, SPTClientEventLogger, SPTDataLoader, SPTLogCenter, SPTPlayerState, SPUser;

@interface SPTActivityViewModel : NSObject <SPTOfflineModeStateObserver, SPTPlayerObserver, SPTDataLoaderDelegate, SPTProductStateObserver>
{
    BOOL _loading;
    BOOL _isFeedRequest;
    BOOL _enabled;
    id <SPTActivityViewModelDelegate> _delegate;
    id <SPTResolver> _resolver;
    id <SPTPlayer> _player;
    SPTPlayerState *_playerState;
    SPTActivityData *_data;
    id <SPTAudioTouch> _audioTouch;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTOfflineModeState> _offlineModeState;
    id <SPTProductState> _productState;
    SPTActivityUser *_currentActivityUser;
    SPKVObservation *_userObservation;
    SPTClientEventLogger *_clientEventLogger;
    SPUser *_feedUser;
    SPUser *_currentlyLoggedInUser;
    id <SPTHTTPTestManager> _httpTestManager;
    SPTDataLoader *_dataLoader;
    SPTLogCenter *_logCenter;
    double _startTime;
}

+ (void)warmCacheByCalculatingSummaryHeightsForData:(id)arg1;
+ (id)placeholderImageForItemType:(unsigned int)arg1;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) SPTLogCenter *logCenter; // @synthesize logCenter=_logCenter;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) id <SPTHTTPTestManager> httpTestManager; // @synthesize httpTestManager=_httpTestManager;
@property(retain, nonatomic) SPUser *currentlyLoggedInUser; // @synthesize currentlyLoggedInUser=_currentlyLoggedInUser;
@property(retain, nonatomic) SPUser *feedUser; // @synthesize feedUser=_feedUser;
@property(retain, nonatomic) SPTClientEventLogger *clientEventLogger; // @synthesize clientEventLogger=_clientEventLogger;
@property(retain, nonatomic) SPKVObservation *userObservation; // @synthesize userObservation=_userObservation;
@property(retain, nonatomic) SPTActivityUser *currentActivityUser; // @synthesize currentActivityUser=_currentActivityUser;
@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(nonatomic) BOOL isFeedRequest; // @synthesize isFeedRequest=_isFeedRequest;
@property(nonatomic, getter=isLoading) BOOL loading; // @synthesize loading=_loading;
@property(readonly, nonatomic) id <SPTAudioTouch> audioTouch; // @synthesize audioTouch=_audioTouch;
@property(retain, nonatomic) SPTActivityData *data; // @synthesize data=_data;
@property(retain, nonatomic) SPTPlayerState *playerState; // @synthesize playerState=_playerState;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <SPTResolver> resolver; // @synthesize resolver=_resolver;
@property(nonatomic) __weak id <SPTActivityViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didCancelRequest:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)productState:(id)arg1 stateDidChange:(id)arg2;
- (void)offlineModeState:(id)arg1 updated:(BOOL)arg2;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (void)currentlyLoggedInUserPropertiesChanged;
- (void)handleUnreadResponse:(id)arg1;
- (void)makeRequestForUnreadCount;
- (void)checkForUnreadCount:(id)arg1;
- (void)handleResponse:(id)arg1 requestType:(int)arg2 successful:(BOOL)arg3 forURL:(id)arg4;
- (int)currentTransport;
- (void)playEntity:(id)arg1;
- (void)playItemAtIndex:(unsigned int)arg1;
- (BOOL)isURICurrentPlayingContext:(id)arg1;
- (BOOL)isURICurrentlyPlaying:(id)arg1;
- (BOOL)isMobileFreeTierTrack:(id)arg1;
- (id)parseResponse:(id)arg1 successful:(BOOL)arg2 error:(id *)arg3 forURL:(id)arg4;
- (void)notifyDelegateHasNewUnreadCount:(unsigned int)arg1;
- (void)notifyDelegateHasLoadedOlderStoriesWithCount:(unsigned int)arg1;
- (void)notifyDelegateHasLoadedNewStoriesWithCount:(unsigned int)arg1;
- (void)notifyDelegateWithError:(id)arg1;
- (void)notifyDelegateThatInitialDataHasBeenLoadedWithStartTime:(double)arg1;
- (void)notifyDelegateWithLoading:(BOOL)arg1;
- (void)postReplayForEntity:(id)arg1;
- (BOOL)shouldPostReplays;
- (void)saveLastSeenStoryID;
- (id)requestURLForRequestType:(int)arg1;
- (void)handleData:(id)arg1 error:(id)arg2 requestType:(int)arg3;
- (void)fetchStoriesWithRequestType:(int)arg1;
- (id)contextMenuActionTasksForEntity:(id)arg1 logContext:(id)arg2;
- (void)refreshAllData;
- (void)fetchOlderStories;
- (void)fetchNewerStories;
@property(readonly, nonatomic) BOOL isOffline;
- (void)dealloc;
- (id)initWithResolver:(id)arg1 player:(id)arg2 offlineModeState:(id)arg3 productState:(id)arg4 clientEventLogger:(id)arg5 contextMenuFeature:(id)arg6 audioTouch:(id)arg7 feedUser:(id)arg8 currentUser:(id)arg9 isFeedRequest:(BOOL)arg10 httpTestManager:(id)arg11 dataLoader:(id)arg12 logCenter:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

