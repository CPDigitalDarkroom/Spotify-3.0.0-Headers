//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "SPTThemableView.h"

@class NSString, SPTLayoutConstraintBuilder, SPTNowPlayingConnectBarCollectionViewCellRouteControl, SPTTheme, UILabel, UIView;

@interface SPTNowPlayingConnectBarCollectionViewCell : UICollectionViewCell <SPTThemableView>
{
    _Bool _active;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    SPTNowPlayingConnectBarCollectionViewCellRouteControl *_routeControl;
    NSString *_text;
    SPTTheme *_theme;
    SPTLayoutConstraintBuilder *_layout;
    UIView *_wrapperView;
    UIView *_routeContainerView;
    UILabel *_label;
}

@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIView *routeContainerView; // @synthesize routeContainerView=_routeContainerView;
@property(retain, nonatomic) UIView *wrapperView; // @synthesize wrapperView=_wrapperView;
@property(retain, nonatomic) SPTLayoutConstraintBuilder *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) SPTNowPlayingConnectBarCollectionViewCellRouteControl *routeControl; // @synthesize routeControl=_routeControl;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)applyThemeLayout;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
@property(nonatomic) _Bool textHidden;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

