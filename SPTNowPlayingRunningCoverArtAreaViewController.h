//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTImageLoaderDelegate.h"
#import "SPTNowPlayingContainedViewController.h"
#import "SPTNowPlayingModelDelegate.h"

@class NSString, NSURL, SPTNowPlayingBlurControllerObject, SPTNowPlayingModel, SPTTheme, UIImageView, UIViewController<SPTNowPlayingContainingViewController>;

@interface SPTNowPlayingRunningCoverArtAreaViewController : UIViewController <SPTNowPlayingModelDelegate, SPTImageLoaderDelegate, SPTNowPlayingContainedViewController>
{
    SPTTheme *_theme;
    SPTNowPlayingModel *_model;
    id <SPTImageLoader> _imageLoader;
    SPTNowPlayingBlurControllerObject *_blurController;
    UIImageView *_coverArtImageView;
    NSURL *_imageURL;
}

@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) UIImageView *coverArtImageView; // @synthesize coverArtImageView=_coverArtImageView;
@property(retain, nonatomic) SPTNowPlayingBlurControllerObject *blurController; // @synthesize blurController=_blurController;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) SPTNowPlayingModel *model; // @synthesize model=_model;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)nowPlayingModel:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)nowPlayingModelDidUpdateMetadata:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)loadImageForImageURL;
- (id)initWithTheme:(id)arg1 model:(id)arg2 imageLoader:(id)arg3 blurController:(id)arg4;
- (struct CGSize)preferredContentSize;
- (float)viewControllerPriority;
- (unsigned int)leadingEdge;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(nonatomic) __weak UIViewController<SPTNowPlayingContainingViewController> *container;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

