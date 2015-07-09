//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTNowPlayingBackgroundBlurDelegate.h"
#import "SPTNowPlayingContainedViewController.h"
#import "SPTNowPlayingCoverArtControllerDelegate.h"
#import "SPTNowPlayingModelDelegate.h"

@class NSString, SPTLogCenter, SPTNowPlayingBlurControllerObject, SPTNowPlayingCarouselContentUnitView, SPTNowPlayingCoverArtController, SPTNowPlayingModel, SPTTheme, UIViewController<SPTNowPlayingContainingViewController>;

@interface SPTNowPlayingCarouselAreaViewController : UIViewController <SPTNowPlayingBackgroundBlurDelegate, SPTNowPlayingModelDelegate, SPTNowPlayingCoverArtControllerDelegate, SPTNowPlayingContainedViewController>
{
    id <SPTNowPlayingCarouselInteractionEventObserver> _interactionEventObserver;
    SPTNowPlayingModel *_model;
    SPTTheme *_theme;
    SPTLogCenter *_logCenter;
    SPTNowPlayingCoverArtController *_coverArtController;
    id <SPTUpsellPopupManager> _upsellPopupManager;
    SPTNowPlayingBlurControllerObject *_blurController;
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    id <SPTVideoSurfaceManager> _videoSurfaceManager;
    id <SPTNowPlayingVideoManager> _nowPlayingVideoManager;
}

@property(retain, nonatomic) id <SPTNowPlayingVideoManager> nowPlayingVideoManager; // @synthesize nowPlayingVideoManager=_nowPlayingVideoManager;
@property(retain, nonatomic) id <SPTVideoSurfaceManager> videoSurfaceManager; // @synthesize videoSurfaceManager=_videoSurfaceManager;
@property(retain, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(nonatomic) __weak SPTNowPlayingBlurControllerObject *blurController; // @synthesize blurController=_blurController;
@property(nonatomic) __weak id <SPTUpsellPopupManager> upsellPopupManager; // @synthesize upsellPopupManager=_upsellPopupManager;
@property(retain, nonatomic) SPTNowPlayingCoverArtController *coverArtController; // @synthesize coverArtController=_coverArtController;
@property(nonatomic) __weak SPTLogCenter *logCenter; // @synthesize logCenter=_logCenter;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTNowPlayingModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <SPTNowPlayingCarouselInteractionEventObserver> interactionEventObserver; // @synthesize interactionEventObserver=_interactionEventObserver;
- (void).cxx_destruct;
- (id)rootParentViewController;
- (_Bool)isRootParentBeingPresented;
- (_Bool)isRootParentBeingDismissed;
- (void)coverArtControllerDidDetectCoverArtTap:(id)arg1;
- (struct CGSize)preferredContentSize;
- (double)viewControllerPriority;
- (unsigned long long)leadingEdge;
- (void)shouldUpdateBlurConstituentForRelativePage:(long long)arg1 toImage:(id)arg2 withURL:(id)arg3;
- (void)shouldSkipToDirection:(long long)arg1;
- (void)shouldUpdateOverlayRelativeIntensity:(double)arg1;
- (void)nowPlayingModel:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)nowPlayingModelDidUpdateMetadata:(id)arg1;
- (void)notifyBlurAboutChange;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithModel:(id)arg1 imageLoaderFactory:(id)arg2 theme:(id)arg3 logCenter:(id)arg4 upsellPopupManager:(id)arg5 blurController:(id)arg6 videoSurfaceManager:(id)arg7 nowPlayingVideoManager:(id)arg8;

// Remaining properties
@property(nonatomic) __weak UIViewController<SPTNowPlayingContainingViewController> *container;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTNowPlayingCarouselContentUnitView *view;

@end

