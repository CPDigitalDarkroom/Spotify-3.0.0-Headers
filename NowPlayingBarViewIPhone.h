//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SPTThemableView.h"

@class CALayer, NSString, SPStepScrollView, SPTNowPlayingBackgroundView, SPTNowPlayingFadeMaskView, UIButton, UIButton<SPTNowPlayingBarPlayButton>;

@interface NowPlayingBarViewIPhone : UIView <SPTThemableView>
{
    BOOL _enabled;
    BOOL _animating;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    SPStepScrollView *_stepScrollView;
    UIButton<SPTNowPlayingBarPlayButton> *_playPauseButton;
    SPTNowPlayingBackgroundView *_backgroundView;
    UIButton *_accessoryButton;
    UIView *_accessoryView;
    CALayer *_highlightLayer;
    SPTNowPlayingFadeMaskView *_fadeContentView;
    UIView *_enabledView;
}

@property(nonatomic) BOOL animating; // @synthesize animating=_animating;
@property(retain, nonatomic) UIView *enabledView; // @synthesize enabledView=_enabledView;
@property(retain, nonatomic) SPTNowPlayingFadeMaskView *fadeContentView; // @synthesize fadeContentView=_fadeContentView;
@property(retain, nonatomic) CALayer *highlightLayer; // @synthesize highlightLayer=_highlightLayer;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) UIButton *accessoryButton; // @synthesize accessoryButton=_accessoryButton;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) SPTNowPlayingBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIButton<SPTNowPlayingBarPlayButton> *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property(retain, nonatomic) SPStepScrollView *stepScrollView; // @synthesize stepScrollView=_stepScrollView;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (void)setAccessoryView:(id)arg1 animated:(BOOL)arg2;
- (void)replaceAccessoryView:(id)arg1 forceLayout:(BOOL)arg2;
- (id)currentTrackPageView;
- (void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)forceLayout;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
