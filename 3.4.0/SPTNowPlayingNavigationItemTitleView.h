//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "SPTThemableView.h"

@class NSString, SPTLayoutConstraintBuilder, SPTNowPlayingMarqueeLabel, UILabel, UIView;

@interface SPTNowPlayingNavigationItemTitleView : UIControl <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    UILabel *_entityDescriptionLabel;
    SPTNowPlayingMarqueeLabel *_entityNameLabel;
    SPTLayoutConstraintBuilder *_layout;
    UIView *_invisibleCenteringView;
}

@property(retain, nonatomic) UIView *invisibleCenteringView; // @synthesize invisibleCenteringView=_invisibleCenteringView;
@property(retain, nonatomic) SPTLayoutConstraintBuilder *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) SPTNowPlayingMarqueeLabel *entityNameLabel; // @synthesize entityNameLabel=_entityNameLabel;
@property(retain, nonatomic) UILabel *entityDescriptionLabel; // @synthesize entityDescriptionLabel=_entityDescriptionLabel;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)statusBarOrientationDidChange:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)applyThemeLayout;
- (struct CGSize)intrinsicContentSize;
- (void)setEntityColor:(id)arg1;
- (void)updateEntityLabelsWithDescription:(id)arg1 name:(id)arg2 transition:(id)arg3;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

