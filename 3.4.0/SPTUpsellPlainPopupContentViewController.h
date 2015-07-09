//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTThemableView.h"

@class NSString, SPTLayoutConstraintBuilder, SPTTheme, SPTUpsellPaddedLabel, SPTUpsellPlainPopupViewModel, UIImageView, UILabel;

@interface SPTUpsellPlainPopupContentViewController : UIViewController <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> layoutDelegate;
    SPTUpsellPlainPopupViewModel *_viewModel;
    SPTTheme *_theme;
    UIImageView *_backgroundImageView;
    SPTLayoutConstraintBuilder *_backgroundImageViewLayout;
    SPTUpsellPaddedLabel *_headingLabel;
    SPTLayoutConstraintBuilder *_headingLabelLayout;
    UIImageView *_titleImageView;
    SPTLayoutConstraintBuilder *_titleImageViewLayout;
    UILabel *_messageLabel;
    SPTLayoutConstraintBuilder *_messageLabelLayout;
}

@property(retain, nonatomic) SPTLayoutConstraintBuilder *messageLabelLayout; // @synthesize messageLabelLayout=_messageLabelLayout;
@property(readonly, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) SPTLayoutConstraintBuilder *titleImageViewLayout; // @synthesize titleImageViewLayout=_titleImageViewLayout;
@property(readonly, nonatomic) UIImageView *titleImageView; // @synthesize titleImageView=_titleImageView;
@property(retain, nonatomic) SPTLayoutConstraintBuilder *headingLabelLayout; // @synthesize headingLabelLayout=_headingLabelLayout;
@property(readonly, nonatomic) SPTUpsellPaddedLabel *headingLabel; // @synthesize headingLabel=_headingLabel;
@property(retain, nonatomic) SPTLayoutConstraintBuilder *backgroundImageViewLayout; // @synthesize backgroundImageViewLayout=_backgroundImageViewLayout;
@property(readonly, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTUpsellPlainPopupViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (void)setUpMessageLabel;
- (void)setUpTitleImageView;
- (void)setUpHeadingLabel;
- (void)setUpBackgroundImageView;
- (void)setUpSubviews;
- (void)addMessageLabelLayoutConstraints;
- (void)addTitleImageViewLayoutConstraints;
- (void)addHeadingLabelLayoutConstraints;
- (void)addBackgroundImageLayoutConstraints;
- (void)addLayoutConstraints;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1 theme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

