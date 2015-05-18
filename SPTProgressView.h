//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SPTThemableView.h"

@class NSString, UILabel;

@interface SPTProgressView : UIView <SPTThemableView>
{
    BOOL _loadingViewShown;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    unsigned int _mode;
    unsigned int _customIcon;
    UIView *_containerView;
    UIView *_indicatorView;
    UILabel *_titleLabel;
}

+ (id)progressView;
@property BOOL loadingViewShown; // @synthesize loadingViewShown=_loadingViewShown;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) unsigned int customIcon; // @synthesize customIcon=_customIcon;
@property(nonatomic) unsigned int mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (void)layoutSubviews;
- (void)updateProgressMode;
@property(copy, nonatomic) NSString *title;
- (void)triggerAnimations;
- (void)animateHiding;
- (void)hideAfterDelay:(double)arg1;
- (void)hide;
- (void)animateShowing;
- (void)showInView:(id)arg1 afterDelay:(double)arg2;
- (void)showInView:(id)arg1;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

