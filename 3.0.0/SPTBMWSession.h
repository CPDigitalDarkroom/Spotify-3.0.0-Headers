//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AlertControllerDelegate.h"
#import "RAPIEntertainmentAppLinkDelegate.h"

@class NSString, RAPIEntertainmentAppLink, SPTBMWLoggedInSession;

@interface SPTBMWSession : NSObject <RAPIEntertainmentAppLinkDelegate, AlertControllerDelegate>
{
    BOOL _appLinkIsConnected;
    BOOL _userIsLoggedIn;
    RAPIEntertainmentAppLink *_bmwAppLink;
    id <ExternalContentProvider> _externalContentFeature;
    id <SPTExternalContentProvider> _externalContent;
    SPTBMWLoggedInSession *_loggedInSession;
    NSString *_modelNameForAnalytics;
    int _connectedAccessoryId;
}

+ (id)sharedSession;
@property(nonatomic) int connectedAccessoryId; // @synthesize connectedAccessoryId=_connectedAccessoryId;
@property(copy, nonatomic) NSString *modelNameForAnalytics; // @synthesize modelNameForAnalytics=_modelNameForAnalytics;
@property(nonatomic) BOOL userIsLoggedIn; // @synthesize userIsLoggedIn=_userIsLoggedIn;
@property(nonatomic) BOOL appLinkIsConnected; // @synthesize appLinkIsConnected=_appLinkIsConnected;
@property(retain, nonatomic) SPTBMWLoggedInSession *loggedInSession; // @synthesize loggedInSession=_loggedInSession;
@property(retain, nonatomic) id <SPTExternalContentProvider> externalContent; // @synthesize externalContent=_externalContent;
@property(retain, nonatomic) id <ExternalContentProvider> externalContentFeature; // @synthesize externalContentFeature=_externalContentFeature;
@property(retain, nonatomic) RAPIEntertainmentAppLink *bmwAppLink; // @synthesize bmwAppLink=_bmwAppLink;
- (void).cxx_destruct;
- (BOOL)alertControllerShouldDisplayAlert:(id)arg1;
- (void)onTextLog:(id)arg1 source:(int)arg2;
- (void)onDisconnectedFromCar;
- (void)onConnectedToCar:(id)arg1;
- (void)onScreenChangedFrom:(int)arg1 to:(int)arg2 withClickedItemIndex:(int)arg3 andGroupIndex:(int)arg4;
- (id)getTitleForScreen:(int)arg1;
- (id)getLoadingLabelForScreen:(int)arg1;
- (void)onCarLanguageChanged:(id)arg1;
- (BOOL)isMasterOptionButtonCheckedForScreen:(int)arg1;
- (id)getMoreLabelForGroup:(int)arg1 forScreen:(int)arg2;
- (void)onSearchStringChanged:(id)arg1 forSearchScreen:(int)arg2;
- (int)getTargetScreenForRow:(int)arg1 forGroup:(int)arg2 forScreen:(int)arg3;
- (id)getImageForRow:(int)arg1 forGroup:(int)arg2 withPreferredSize:(struct CGSize)arg3 forScreen:(int)arg4 hasAlphaChannel:(char *)arg5;
- (id)getStringForLine:(int)arg1 forRow:(int)arg2 forGroup:(int)arg3 forScreen:(int)arg4;
- (int)getItemCountForGroup:(int)arg1 forScreen:(int)arg2;
- (int)getGroupCountForScreen:(int)arg1;
- (id)getGroupLabelForGroup:(int)arg1 forScreen:(int)arg2;
- (BOOL)canProvideDataImmediately:(int)arg1;
- (int)getTotalTrackTime;
- (int)getCurrentTrackTime;
- (float)getCurrentTrackProgress;
- (void)onEndSeek;
- (void)onBeginSeekForward;
- (void)onBeginSeekBackward;
- (void)onSkipPrev;
- (void)onSkipNext;
- (void)onPausePlayback;
- (void)onStartPlayback;
- (void)handleOnItemClicked:(id)arg1;
- (void)applyDisabledUI;
- (void)handleLogoutOrDisconnect;
- (void)fetchExternalContentAndSwitchToLoggedInSessionIfNeeded;
- (void)logout;
- (void)loginWithExternalContentFeature:(id)arg1;
- (void)handleBMWURLHandledNotification:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
