//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "SPTThemableView.h"

@class NSDictionary, NSString, SPTLayoutConstraintBuilder, SPTNowPlayingMarqueeLabel, SPTTheme, UILabel, UIView;

@interface SPTNowPlayingNavigationBarTitleView : UIControl <SPTThemableView>
{
    _Bool _useLandscapeLayout;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    UILabel *_entityDescriptionLabel;
    SPTNowPlayingMarqueeLabel *_entityNameLabel;
    SPTLayoutConstraintBuilder *_layout;
    UIView *_invisibleCenteringView;
    SPTTheme *_theme;
    UILabel *_seperatorLabel;
    NSDictionary *_attributes;
}

@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) UILabel *seperatorLabel; // @synthesize seperatorLabel=_seperatorLabel;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UIView *invisibleCenteringView; // @synthesize invisibleCenteringView=_invisibleCenteringView;
@property(retain, nonatomic) SPTLayoutConstraintBuilder *layout; // @synthesize layout=_layout;
@property(nonatomic) _Bool useLandscapeLayout; // @synthesize useLandscapeLayout=_useLandscapeLayout;
@property(retain, nonatomic) SPTNowPlayingMarqueeLabel *entityNameLabel; // @synthesize entityNameLabel=_entityNameLabel;
@property(retain, nonatomic) UILabel *entityDescriptionLabel; // @synthesize entityDescriptionLabel=_entityDescriptionLabel;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)statusBarOrientationDidChange:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)applyThemeLayout;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateEntityLabelsWithAttributedDescription:(id)arg1 name:(id)arg2 transition:(id)arg3;
- (void)updateEntityLabelsWithDescription:(id)arg1 name:(id)arg2 highlighted:(_Bool)arg3 transition:(id)arg4;
- (void)updateConstraints;
- (void)updateAttributes:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2 attributes:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
