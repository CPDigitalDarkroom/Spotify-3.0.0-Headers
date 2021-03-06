//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTNowPlayingBaseHeadUnitViewController.h"

#import "SPTNowPlayingRadioThumbsStateManagerObserver.h"

@class NSString, SPTLogCenter, SPTNowPlayingBaseHeadUnitController, SPTNowPlayingModel, SPTNowPlayingRadioHeadUnitView, SPTProgressView;

@interface SPTNowPlayingRadioHeadUnitViewController : SPTNowPlayingBaseHeadUnitViewController <SPTNowPlayingRadioThumbsStateManagerObserver>
{
    SPTNowPlayingModel *_model;
    SPTNowPlayingBaseHeadUnitController *_headUnitController;
    id <SPTUpsellPopupManager> _upsellPopupManager;
    SPTLogCenter *_logCenter;
    SPTProgressView *_progressView;
}

@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) __weak SPTLogCenter *logCenter; // @synthesize logCenter=_logCenter;
@property(nonatomic) __weak id <SPTUpsellPopupManager> upsellPopupManager; // @synthesize upsellPopupManager=_upsellPopupManager;
@property(retain, nonatomic) SPTNowPlayingBaseHeadUnitController *headUnitController; // @synthesize headUnitController=_headUnitController;
@property(retain, nonatomic) SPTNowPlayingModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)nowPlayingRadioThumbsStateManagerDidChangeState:(id)arg1;
- (void)hideImprovingStationProgressViewWithError:(id)arg1;
- (void)showImprovingStationProgressView;
- (void)radioThumbButtonTouchedUpInside:(BOOL)arg1;
- (void)needUpdateUI;
- (BOOL)radioThumbDownSelected;
- (BOOL)radioThumbUpSelected;
- (BOOL)radioThumbsEnabled;
- (void)thumbDownButtonTouchedUpInside:(id)arg1;
- (void)thumbUpButtonTouchedUpInside:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithModel:(id)arg1 theme:(id)arg2 logCenter:(id)arg3 upsellPopupManager:(id)arg4;
- (id)initWithTheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTNowPlayingRadioHeadUnitView *view;

@end

