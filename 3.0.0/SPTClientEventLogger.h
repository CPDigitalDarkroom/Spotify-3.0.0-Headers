//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTLogCenter, SPTLoggingContext;

@interface SPTClientEventLogger : NSObject
{
    SPTLogCenter *_logCenter;
    SPTLoggingContext *_context;
}

+ (id)clientEventLoggerWithLogCenter:(id)arg1 context:(id)arg2;
+ (id)dictionaryForUser:(id)arg1 atIndex:(int)arg2;
+ (id)dictionaryForActivity:(id)arg1 atIndex:(int)arg2;
+ (id)dataForURL:(id)arg1;
+ (id)stringFromDataType:(int)arg1;
@property(retain, nonatomic) SPTLoggingContext *context; // @synthesize context=_context;
@property(retain, nonatomic) SPTLogCenter *logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logEventWithName:(id)arg1 eventVersion:(id)arg2 data:(id)arg3;
- (void)logAccountPaymentFailureNotifiationEventWithName:(id)arg1 eventVersion:(id)arg2 data:(id)arg3;
- (void)logAccountPaymentFailureNotificationWasDismissedBySystem;
- (void)logAccountPaymentFailureNotificationWasDismissedByUser;
- (void)logAccountPaymentFailureNotificationWasQueued;
- (void)logAccountPaymentFailureNotificationWasPresented;
- (void)logViewedReplayer:(id)arg1 atIndex:(unsigned int)arg2;
- (void)logTappedReplayer:(id)arg1 atIndex:(unsigned int)arg2;
- (void)logTimeToGetInitialResponseAndRenderView:(double)arg1;
- (void)logTimeToRenderViewAfterInitialResponse:(double)arg1;
- (void)logActivityEntityEvent:(int)arg1 forActivity:(id)arg2 atIndex:(unsigned int)arg3;
- (void)logScrolledToLoadOlderEntities:(unsigned int)arg1 totalEntities:(unsigned int)arg2;
- (void)logLoadedNewerStories:(unsigned int)arg1 totalEntities:(unsigned int)arg2;
- (void)logPulledToRefresh;
- (void)logNavigateToPeopleSuggestionsViaNavBarButton:(BOOL)arg1;
- (id)activitiesViewed;
- (void)logAlbumEntityTableHeaderViewArtistViewTap;
- (void)logAlbumEntityTableHeaderViewSlideToPage:(int)arg1;
- (void)logAlbumEntityTableHeaderViewShufflePlayTap:(BOOL)arg1;
- (void)logAlbumEntityTableHeaderViewContextMenuTap;
- (void)logAlbumEntityTableHeaderViewSaveTap:(BOOL)arg1;
- (void)logAlbumEntityTableHeaderViewImageTap;
- (void)logArtistTapEventWithContextUri:(id)arg1 targetUri:(id)arg2 tap:(unsigned int)arg3 index:(id)arg4;
- (void)logArtistErrorEventWithUri:(id)arg1 error:(id)arg2;
- (void)logArtistViewLoadingEventWithURI:(id)arg1 loadingTime:(double)arg2;
- (void)logClippyBannerForURL:(id)arg1 wasDismissedWithReason:(int)arg2;
- (void)logClippyDidPresentBannerForURL:(id)arg1;
- (void)logClippyDetectedSpotifyURL:(id)arg1;
- (void)logHitConnectToFacebookButton;
- (void)logViewedFeaturedTabWithTotalCount:(unsigned int)arg1 notFollowedCount:(unsigned int)arg2;
- (void)logViewedFriendsTabWithTotalCount:(unsigned int)arg1 notFollowedCount:(unsigned int)arg2 isConnectedToFacebook:(BOOL)arg3;
- (void)logViewedFindFriends;
- (void)logPlaylistEntityTableHeaderViewSlideToPage:(int)arg1;
- (void)logPlaylistEntityTableHeaderViewShufflePlayTap:(BOOL)arg1;
- (void)logPlaylistEntityTableHeaderViewContextMenuTap;
- (void)logPlaylistEntityTableHeaderViewImageTap;
- (void)logPlaylistFollowButtonTap;
- (void)logViewedAllForSection:(int)arg1;
- (void)logViewedHeaderSection:(unsigned int)arg1;
- (void)logViewedResource:(int)arg1 withURI:(id)arg2 rank:(unsigned int)arg3;
- (void)logPlayedResource:(int)arg1 withURI:(id)arg2 rank:(unsigned int)arg3;
- (void)logChangedRelations:(BOOL)arg1 currentUsername:(id)arg2 targetURI:(id)arg3;
- (void)logFailedToLoadDataWithErrorCode:(int)arg1 errorDescription:(id)arg2;
- (void)logFailedToLoadStationWithSeedURL:(id)arg1;
- (void)logRadioThumbTrackURL:(id)arg1 isUp:(BOOL)arg2;
- (void)logStartRadioStationWithSeedURL:(id)arg1 startedFromElement:(id)arg2;
- (void)logDeleteStationPressed;
- (void)logEditStationsPressed;
- (void)logCreateNewStationCanceled;
- (void)logCreateNewStationDidSelectSeedURL:(id)arg1;
- (void)logCreateNewStationPressed;
- (void)logBailedOutOfSendingSMSWithEntityURIString:(id)arg1;
- (void)logSentSMSWithEntityURIString:(id)arg1;
- (void)logBailedOutOfSendingEmailWithEntityURIString:(id)arg1;
- (void)logSentEmailWithEntityURIString:(id)arg1;
- (void)logTappedWhatsAppFromSendServiceChooserWithEntityURIString:(id)arg1;
- (void)logTappedEmailFromSendServiceChooserWithEntityURIString:(id)arg1;
- (void)logTappedSMSFromSendServiceChooserWithEntityURIString:(id)arg1;
- (void)logTappedSelectRecipientsFromSendServiceChooserWithEntityURIString:(id)arg1;
- (void)logTappedBackFromSendServiceChooserWithEntityURIString:(id)arg1;
- (void)logSendServiceChooserImpressionWithEntityURIString:(id)arg1;
- (void)logToggledNetworkOn:(BOOL)arg1 networkString:(id)arg2 entityURIString:(id)arg3;
- (void)logTappedPostFromPostComposerWithEntityURIString:(id)arg1 enabledNetworkStrings:(id)arg2 includedText:(BOOL)arg3;
- (void)logTappedBackFromPostComposerWithEntityURIString:(id)arg1;
- (void)logPostComposerImpressionWithEntityURIString:(id)arg1;
- (void)logTappedCancelFromMainScreenWithEntityURIString:(id)arg1;
- (void)logTappedCopyLinkFromMainScreenWithEntityURIString:(id)arg1;
- (void)logTappedSendToFromMainScreenWithEntityURIString:(id)arg1;
- (void)logTappedPostToFromMainScreenWithEntityURIString:(id)arg1;
- (void)logMainScreenImpressionWithEntityURIString:(id)arg1;
- (void)logRowWasTappedInSeeAllListenersViewWithUsername:(id)arg1 atIndex:(int)arg2;
- (void)logSeelAllListenersViewShownWithTrackData:(id)arg1 atIndex:(int)arg2;
- (void)logContextButtonTappedWithTrackData:(id)arg1 atIndex:(int)arg2;
- (void)logTrackTappedWithTrackData:(id)arg1 atIndex:(int)arg2;
- (void)logNUXScreenShown;
- (void)logChartShownWithSize:(int)arg1;
- (void)logShuffleButtonTapped;

@end

