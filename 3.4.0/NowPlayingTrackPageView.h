//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPPageView.h"

#import "PlayerTrackScrollPageView.h"
#import "SPTImageLoaderDelegate.h"
#import "SPTThemableView.h"
#import "SPTVideoSurfaceDelegate.h"

@class NSString, NSURL, SPKVObservation, UIImageView, UILabel, UIView<SPTVideoSurface>;

@interface NowPlayingTrackPageView : SPPageView <SPTImageLoaderDelegate, SPTVideoSurfaceDelegate, PlayerTrackScrollPageView, SPTThemableView>
{
    _Bool _coverArtHidden;
    _Bool _useNewAppearance;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    UIImageView *_imageView;
    UIView<SPTVideoSurface> *_videoSurface;
    NSURL *_trackURL;
    NSString *_trackTitle;
    NSString *_artistTitle;
    NSURL *_imageURL;
    id <SPTImageLoader> _imageLoader;
    UILabel *_artistLabel;
    UILabel *_titleLabel;
    SPKVObservation *_trackLoadedObserver;
}

@property(retain, nonatomic) SPKVObservation *trackLoadedObserver; // @synthesize trackLoadedObserver=_trackLoadedObserver;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *artistLabel; // @synthesize artistLabel=_artistLabel;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *artistTitle; // @synthesize artistTitle=_artistTitle;
@property(copy, nonatomic) NSString *trackTitle; // @synthesize trackTitle=_trackTitle;
@property(retain, nonatomic) NSURL *trackURL; // @synthesize trackURL=_trackURL;
@property(readonly, nonatomic) UIView<SPTVideoSurface> *videoSurface; // @synthesize videoSurface=_videoSurface;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic, getter=isUsingNewAppearance) _Bool useNewAppearance; // @synthesize useNewAppearance=_useNewAppearance;
@property(nonatomic, getter=isCoverArtHidden) _Bool coverArtHidden; // @synthesize coverArtHidden=_coverArtHidden;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)videoSurfaceDidChangeVideoRect:(id)arg1;
- (void)videoSurfaceDidDetachVideo:(id)arg1;
- (void)videoSurfaceDidAttachVideo:(id)arg1;
- (struct CGRect)videoSurfaceBounds;
@property(readonly, nonatomic) struct CGRect coverArtAreaBounds;
- (void)applyThemeLayout;
- (void)layoutSubviews;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 reuseIdentifier:(id)arg2 imageLoader:(id)arg3 videoSurface:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

