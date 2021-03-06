//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SPTThemableView.h"

@class NSString, SPTTheme, UIImageView, UILabel;

@interface SPTUpsellPageView : UIView <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> layoutDelegate;
    UILabel *_headerLabel;
    SPTTheme *_theme;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    id <NSObject> _themeChangedObserver;
}

@property(retain, nonatomic) id <NSObject> themeChangedObserver; // @synthesize themeChangedObserver=_themeChangedObserver;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (void)addWidthConstraintToView:(id)arg1 withConstant:(double)arg2;
- (void)addHeightConstraintToView:(id)arg1 withConstant:(double)arg2;
- (void)addTopConstraintForView:(id)arg1 withConstant:(double)arg2;
- (void)centerHorizontaly:(id)arg1;
- (void)updateConstraints;
- (struct CGRect)textSizeOfLabel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (double)recalculateSubtitleHeight;
- (double)recalculateTitleHeight;
- (_Bool)contentFits;
- (void)setupWithModel:(id)arg1;
- (id)createThemeChangedObserver;
- (void)willMoveToSuperview:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 andSPTTheme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

