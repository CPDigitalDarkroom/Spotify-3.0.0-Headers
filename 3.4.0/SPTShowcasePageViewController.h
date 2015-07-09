//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIPageViewControllerDataSource.h"
#import "UIPageViewControllerDelegate.h"

@class NSDictionary, NSString, UIBarButtonItem, UIPageControl, UIPageViewController, UIView;

@interface SPTShowcasePageViewController : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate>
{
    UIPageViewController *_pageController;
    NSDictionary *_content;
    UIView *_contentView;
    UIBarButtonItem *_nextButton;
    UIBarButtonItem *_doneButton;
    UIPageControl *_pageControl;
}

@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIBarButtonItem *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, copy, nonatomic) NSDictionary *content; // @synthesize content=_content;
@property(retain, nonatomic) UIPageViewController *pageController; // @synthesize pageController=_pageController;
- (void).cxx_destruct;
- (void)cmdDone:(id)arg1;
- (void)cmdNext:(id)arg1;
- (id)viewControllerAtIndex:(unsigned long long)arg1;
- (void)transitionToViewController:(id)arg1 direction:(long long)arg2;
- (void)updateUI;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)updatePageControlFrame;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithContent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

