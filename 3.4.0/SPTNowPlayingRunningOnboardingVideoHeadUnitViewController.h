//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTNowPlayingBaseHeadUnitViewController.h"

#import "SPTNowPlayingModelDelegate.h"

@class NSString, SPTLogCenter, SPTNowPlayingBaseHeadUnitController, SPTNowPlayingModel, SPTNowPlayingMusicHeadUnitView, SPTNowPlayingPlaybackController;

@interface SPTNowPlayingRunningOnboardingVideoHeadUnitViewController : SPTNowPlayingBaseHeadUnitViewController <SPTNowPlayingModelDelegate>
{
    SPTNowPlayingPlaybackController *_playbackController;
    SPTNowPlayingModel *_model;
    SPTNowPlayingBaseHeadUnitController *_headUnitController;
    id <SPTUpsellPopupManager> _upsellPopupManager;
    SPTLogCenter *_logCenter;
}

@property(nonatomic) __weak SPTLogCenter *logCenter; // @synthesize logCenter=_logCenter;
@property(nonatomic) __weak id <SPTUpsellPopupManager> upsellPopupManager; // @synthesize upsellPopupManager=_upsellPopupManager;
@property(retain, nonatomic) SPTNowPlayingBaseHeadUnitController *headUnitController; // @synthesize headUnitController=_headUnitController;
@property(retain, nonatomic) SPTNowPlayingModel *model; // @synthesize model=_model;
@property(retain, nonatomic) SPTNowPlayingPlaybackController *playbackController; // @synthesize playbackController=_playbackController;
- (void).cxx_destruct;
- (void)nowPlayingModel:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)nowPlayingModelDidUpdateMetadata:(id)arg1;
- (void)needUpdateUI;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithPlaybackController:(id)arg1 model:(id)arg2 theme:(id)arg3 upsellPopupManager:(id)arg4 logCenter:(id)arg5;
- (id)initWithTheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTNowPlayingMusicHeadUnitView *view;

@end
