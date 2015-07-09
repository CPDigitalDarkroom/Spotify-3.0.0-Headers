//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "SPTThemableView.h"

@class NSString, SPTTheme, UIImageView, UIView;

@interface SPTNowPlayingConnectBarCollectionViewCellRouteControl : UIControl <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    UIView *_underlyingView;
    CDUnknownBlockType _action;
    unsigned long long _icon;
    SPTTheme *_theme;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) unsigned long long icon; // @synthesize icon=_icon;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(retain, nonatomic) UIView *underlyingView; // @synthesize underlyingView=_underlyingView;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (id)obtainControl;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithTheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

