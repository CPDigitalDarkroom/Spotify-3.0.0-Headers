//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SPTThemableView.h"

@class NSString, SPTActionButton, UIButton, UILabel;

@interface SPTBannerView : UIView <SPTThemableView>
{
    BOOL _shownBelowStatusBar;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    id <SPTBannerViewDelegate> _delegate;
    int _style;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    SPTActionButton *_actionButton;
    UIButton *_closeButton;
}

+ (id)backgroundColorForBannerViewStyle:(int)arg1 theme:(id)arg2;
+ (id)spt_bannerViewWithBannerItem:(id)arg1 delegate:(id)arg2;
@property(readonly, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(readonly, nonatomic) SPTActionButton *actionButton; // @synthesize actionButton=_actionButton;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic, getter=isShownBelowStatusBar) BOOL shownBelowStatusBar; // @synthesize shownBelowStatusBar=_shownBelowStatusBar;
@property(readonly, nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) __weak id <SPTBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (float)statusBarInducedOffset;
- (struct CGRect)statusBarFrameInOwnCoordinateSystem;
- (void)applyThemeLayout;
- (void)closeButtonAction;
- (void)actionButtonAction;
@property(retain, nonatomic) NSString *buttonTitle;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) NSString *title;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;
- (void)spt_configureWithBannerItem:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

