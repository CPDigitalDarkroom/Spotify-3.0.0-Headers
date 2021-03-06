//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SPTImageLoaderDelegate.h"
#import "SPTThemableView.h"
#import "SPTVideoSurfaceDelegate.h"

@class NSString, NSURL, UIActivityIndicatorView, UIImage, UIImageView, UIView<SPTVideoSurface>;

@interface SPTNowPlayingCoverArtViewCell : UIView <SPTImageLoaderDelegate, SPTVideoSurfaceDelegate, SPTThemableView>
{
    BOOL _showActivityView;
    BOOL _fullscreen;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    id <SPTNowPlayingCoverArtViewCellDelegate> _delegate;
    NSURL *_URL;
    id <SPTImageLoader> _imageLoader;
    UIView *_contentView;
    UIImageView *_placeholderImageView;
    UIImageView *_coverArtImageView;
    UIView<SPTVideoSurface> *_videoSurfaceView;
    UIActivityIndicatorView *_activityView;
    NSURL *_requestedURL;
    UIImage *_audioPlaceholderImage;
    UIImage *_videoPlaceholderImage;
    struct CGSize _cellSize;
    struct CGSize _fullscreenSize;
}

@property(retain, nonatomic) UIImage *videoPlaceholderImage; // @synthesize videoPlaceholderImage=_videoPlaceholderImage;
@property(retain, nonatomic) UIImage *audioPlaceholderImage; // @synthesize audioPlaceholderImage=_audioPlaceholderImage;
@property(retain, nonatomic) NSURL *requestedURL; // @synthesize requestedURL=_requestedURL;
@property(nonatomic) BOOL fullscreen; // @synthesize fullscreen=_fullscreen;
@property(retain, nonatomic) UIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) UIView<SPTVideoSurface> *videoSurfaceView; // @synthesize videoSurfaceView=_videoSurfaceView;
@property(retain, nonatomic) UIImageView *coverArtImageView; // @synthesize coverArtImageView=_coverArtImageView;
@property(retain, nonatomic) UIImageView *placeholderImageView; // @synthesize placeholderImageView=_placeholderImageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(nonatomic) BOOL showActivityView; // @synthesize showActivityView=_showActivityView;
@property(nonatomic) struct CGSize fullscreenSize; // @synthesize fullscreenSize=_fullscreenSize;
@property(nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) __weak id <SPTNowPlayingCoverArtViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)videoSurfaceDidDetachVideo:(id)arg1;
- (void)videoSurfaceDidAttachVideo:(id)arg1;
- (void)imageLoader:(id)arg1 didFailToLoadImageForURL:(id)arg2 error:(id)arg3 context:(id)arg4;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
@property(readonly, nonatomic) UIImage *imageOrPlaceholderImage;
@property(readonly, nonatomic) UIImage *image;
- (void)updateFullscreen;
- (void)setView:(id)arg1 visible:(BOOL)arg2 animated:(BOOL)arg3;
- (void)updateImageWithURL:(id)arg1 image:(id)arg2 imageSize:(struct CGSize)arg3 hideCoverArt:(BOOL)arg4 animated:(BOOL)arg5;
- (void)setCoverArtURL:(id)arg1 image:(id)arg2 imageSize:(struct CGSize)arg3 hideCoverArt:(BOOL)arg4 isVideo:(BOOL)arg5 animated:(BOOL)arg6;
- (void)setEnableVideoSurface:(BOOL)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) id <SPTVideoSurface> videoSurface;
- (void)setCoverArtImage:(id)arg1 URL:(id)arg2 animated:(BOOL)arg3;
- (void)updateLayerVisibilities:(BOOL)arg1;
@property(readonly, nonatomic) BOOL shouldShowCoverArtView;
@property(readonly, nonatomic) BOOL shouldShowPlaceholderView;
@property(readonly, nonatomic) BOOL shouldShowVideo;
- (void)layoutSubviews;
- (void)applyThemeLayout;
- (id)initWithFrame:(struct CGRect)arg1 imageLoader:(id)arg2 videoSurfaceManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

