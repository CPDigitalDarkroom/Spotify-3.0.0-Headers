//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTContentPreview.h"

@class NSArray, NSString, SPTLogCenter, SPTTheme, UIButton, UILabel, UIViewController<SPTContentPreviewDataSource>;

@interface SPTContentPreviewController : UIViewController <SPTContentPreview>
{
    NSArray *_viewControllers;
    UIViewController<SPTContentPreviewDataSource> *_activeViewController;
    CDUnknownBlockType _dismissActionBlock;
    SPTLogCenter *_logCenter;
    UIButton *_dismissButton;
    SPTTheme *_theme;
    UILabel *_descriptionLabel;
}

@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(readonly, nonatomic) SPTLogCenter *logCenter; // @synthesize logCenter=_logCenter;
@property(copy, nonatomic) CDUnknownBlockType dismissActionBlock; // @synthesize dismissActionBlock=_dismissActionBlock;
@property(retain, nonatomic) UIViewController<SPTContentPreviewDataSource> *activeViewController; // @synthesize activeViewController=_activeViewController;
@property(retain, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
- (void).cxx_destruct;
- (void)dismissed:(_Bool)arg1;
- (void)dismissAction:(id)arg1;
- (void)nextAction;
- (void)applyThemeLayout;
- (struct CGSize)fallbackDefaultContentSize;
- (void)viewWillLayoutSubviews;
- (void)replaceExistingChildViewController:(id)arg1 withViewController:(id)arg2 animated:(_Bool)arg3;
- (void)setupChildViewControllers;
- (void)setupSubviews;
- (void)contentViewControllerDidFinishPreviewInteraction:(id)arg1;
- (id)initWithContentViewControllers:(id)arg1 logCenter:(id)arg2 theme:(id)arg3 dismissActionBlock:(CDUnknownBlockType)arg4;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

