//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AVPlayerLayer, NSTimer, SPTActionButton, SPTAdPlayControlsView, SPTImageBlurView, SPTLayoutConstraintBuilder, SPTNowPlayingNavigationItemTitleView, UIImage, UIImageView;

@interface SPTAdEntityView : UIView
{
    BOOL _canMinimize;
    SPTAdPlayControlsView *_playControlsView;
    SPTNowPlayingNavigationItemTitleView *_titleView;
    UIImage *_image;
    UIImageView *_imageView;
    SPTActionButton *_watchNowButton;
    AVPlayerLayer *_playerLayer;
    int _interfaceOrientation;
    NSTimer *_hidePlayControlsTimer;
    SPTImageBlurView *_blurView;
    SPTLayoutConstraintBuilder *_layout;
}

@property(retain, nonatomic) SPTLayoutConstraintBuilder *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) SPTImageBlurView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) NSTimer *hidePlayControlsTimer; // @synthesize hidePlayControlsTimer=_hidePlayControlsTimer;
@property(nonatomic) int interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(nonatomic) BOOL canMinimize; // @synthesize canMinimize=_canMinimize;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) SPTActionButton *watchNowButton; // @synthesize watchNowButton=_watchNowButton;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) SPTNowPlayingNavigationItemTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) SPTAdPlayControlsView *playControlsView; // @synthesize playControlsView=_playControlsView;
- (void).cxx_destruct;
- (void)hideControls;
- (void)showControls:(BOOL)arg1;
- (void)setPlayButtonState:(BOOL)arg1;
- (void)layoutSubviews;
- (id)portraitLayout;
- (id)landscapeLayout;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

