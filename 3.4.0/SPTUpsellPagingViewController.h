//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UpsellViewController.h"

#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSString, NSTimer, SPTTheme, SPTUpsellButtonView, SPTUpsellExperiments, SPTUpsellLogger, SPTUpsellPagingViewModel, UIPageControl, UIScrollView;

@interface SPTUpsellPagingViewController : UpsellViewController <UIScrollViewDelegate>
{
    NSString *_viewEventURI;
    SPTTheme *_theme;
    SPTUpsellLogger *_logger;
    SPTUpsellButtonView *_buttonView;
    SPTUpsellPagingViewModel *_pagesModel;
    UIScrollView *_pageScrollView;
    UIPageControl *_pageControl;
    UIScrollView *_backgroundScrollView;
    NSString *_firstHeading;
    NSString *_upsellContext;
    long long _reason;
    long long _upsoldProduct;
    id <SPTAccountProductActivationController> _productActivationController;
    SPTUpsellExperiments *_experiments;
    NSTimer *_animationTimer;
    NSMutableArray *_shownPages;
}

@property(retain, nonatomic) NSMutableArray *shownPages; // @synthesize shownPages=_shownPages;
@property(retain, nonatomic) NSTimer *animationTimer; // @synthesize animationTimer=_animationTimer;
@property(readonly, nonatomic) SPTUpsellExperiments *experiments; // @synthesize experiments=_experiments;
@property(readonly, nonatomic) id <SPTAccountProductActivationController> productActivationController; // @synthesize productActivationController=_productActivationController;
@property(readonly, nonatomic) long long upsoldProduct; // @synthesize upsoldProduct=_upsoldProduct;
@property(nonatomic) long long reason; // @synthesize reason=_reason;
@property(retain, nonatomic) NSString *upsellContext; // @synthesize upsellContext=_upsellContext;
@property(retain, nonatomic) NSString *firstHeading; // @synthesize firstHeading=_firstHeading;
@property(retain, nonatomic) UIScrollView *backgroundScrollView; // @synthesize backgroundScrollView=_backgroundScrollView;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIScrollView *pageScrollView; // @synthesize pageScrollView=_pageScrollView;
@property(retain, nonatomic) SPTUpsellPagingViewModel *pagesModel; // @synthesize pagesModel=_pagesModel;
@property(retain, nonatomic) SPTUpsellButtonView *buttonView; // @synthesize buttonView=_buttonView;
@property(retain, nonatomic) SPTUpsellLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) NSString *viewEventURI; // @synthesize viewEventURI=_viewEventURI;
- (void).cxx_destruct;
- (id)firstPageHeading;
- (_Bool)isTrialEligible;
- (id)secondaryButton;
- (id)primaryButton;
- (void)animateScrollViewToPage:(long long)arg1;
- (void)invalidateTimer;
- (void)invalidateTimerIfUserEngaged;
- (void)animateAutoscroll:(id)arg1;
- (void)dismiss;
- (void)activateUpsoldProduct:(id)arg1;
- (void)updateBackgroundScrollViewOffset;
- (void)updatePageControllIfNeeded;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setupAnimationTimer;
- (void)handleIAPPurchaseInFrame:(struct CGRect)arg1;
- (void)handleNotEligibleForTrialInFrame:(struct CGRect)arg1;
- (void)handleEligibleForTrialInFrame:(struct CGRect)arg1;
- (void)setupButtonViewWithFrame:(struct CGRect)arg1;
- (void)setupPagingControlWithPagingFrame:(struct CGRect)arg1;
- (void)setupBackgroundScrollViewWithPagingFrame:(struct CGRect)arg1;
- (void)setupPageScrollViewWithPagingFrame:(struct CGRect)arg1;
- (void)addPageSubviewIfNotPresentForPageAtIndex:(long long)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithFrame:(struct CGRect)arg1 withTheme:(id)arg2 productActivationController:(id)arg3 context:(id)arg4 experiments:(id)arg5 upsoldProduct:(long long)arg6 reason:(long long)arg7 logger:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

