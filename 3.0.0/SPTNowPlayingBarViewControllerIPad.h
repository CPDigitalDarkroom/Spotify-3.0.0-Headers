//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTImageLoaderDelegate.h"
#import "SPTNowPlayingDurationViewDataSource.h"
#import "SPTNowPlayingDurationViewDelegate.h"
#import "SPTNowPlayingModelDelegate.h"
#import "SPTNowPlayingTrackPositionObserver.h"

@class NSMapTable, NSString, SPTLogCenter, SPTNowPlayingBarViewIpad, SPTNowPlayingModel, UIImageView;

@interface SPTNowPlayingBarViewControllerIPad : UIViewController <SPTNowPlayingModelDelegate, SPTImageLoaderDelegate, SPTNowPlayingDurationViewDataSource, SPTNowPlayingDurationViewDelegate, SPTNowPlayingTrackPositionObserver>
{
    SPTNowPlayingModel *_nowPlayingBarModel;
    id <GaiaFeature> _gaiaFeature;
    SPTLogCenter *_logCenter;
    id <SPTNowPlayingManager> _nowPlayingManager;
    id <SPTImageLoader> _imageLoader;
    id <SPTLocalSettings> _localSettings;
    SPTNowPlayingBarViewIpad *_contentView;
    UIImageView *_contentViewImageView;
    NSMapTable *_prefetchImageReferenceCache;
}

@property(retain, nonatomic) NSMapTable *prefetchImageReferenceCache; // @synthesize prefetchImageReferenceCache=_prefetchImageReferenceCache;
@property(nonatomic) __weak UIImageView *contentViewImageView; // @synthesize contentViewImageView=_contentViewImageView;
@property(retain, nonatomic) SPTNowPlayingBarViewIpad *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(nonatomic) __weak id <SPTNowPlayingManager> nowPlayingManager; // @synthesize nowPlayingManager=_nowPlayingManager;
@property(nonatomic) __weak SPTLogCenter *logCenter; // @synthesize logCenter=_logCenter;
@property(nonatomic) __weak id <GaiaFeature> gaiaFeature; // @synthesize gaiaFeature=_gaiaFeature;
@property(retain, nonatomic) SPTNowPlayingModel *nowPlayingBarModel; // @synthesize nowPlayingBarModel=_nowPlayingBarModel;
- (void).cxx_destruct;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)durationViewTappedTimeRemainingLabel:(id)arg1;
- (void)durationViewTappedSlider:(id)arg1;
- (void)durationViewEndedScrubbing:(id)arg1;
- (void)durationViewBeganScrubbing:(id)arg1;
- (void)durationView:(id)arg1 trackProgressChanged:(float)arg2;
- (id)coverArtPlaceholder;
- (BOOL)durationViewDisallowSeeking:(id)arg1;
- (float)durationViewAnimationSpeed:(id)arg1;
- (double)durationViewCurrentDuration:(id)arg1;
- (double)durationViewCurrentPosition:(id)arg1;
- (void)nowPlayingTrackPositionDidChange:(id)arg1;
- (void)nowPlayingModel:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)loadImageForRelativeIndex:(int)arg1;
- (void)nowPlayingModelDidUpdateMetadata:(id)arg1;
- (void)updatePlayPauseButton;
- (void)coverArtTouchedUpInside;
- (void)nextButtonTouchedUpInside:(id)arg1;
- (void)previousButtonTouchedUpInside:(id)arg1;
- (void)handleSkipToPreviousWithBehavior:(unsigned int)arg1 dragging:(BOOL)arg2;
- (void)handleSkipToNextWithBehavior:(unsigned int)arg1 dragging:(BOOL)arg2;
- (void)playPauseButtonTouchedUpInside:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithPlayingModel:(id)arg1 gaia:(id)arg2 logCenter:(id)arg3 nowPlayingManager:(id)arg4 imageLoader:(id)arg5 localSettings:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

