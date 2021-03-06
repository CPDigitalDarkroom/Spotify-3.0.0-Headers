//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTCeramicViewControllerDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSArray, NSMutableArray, NSString, UIScrollView;

@interface SPTScrollPageViewController : UIViewController <UIScrollViewDelegate, SPTCeramicViewControllerDelegate>
{
    _Bool _interactionWithStickyHeader;
    double _offsetForStickyHeader;
    UIScrollView *_horizontalScrollView;
    NSMutableArray *_verticalScrollViews;
    id <SPTScrollPageViewControllerDelegate> _delegate;
    NSArray *_cachedViewControllers;
    long long _currentPageIndex;
    NSArray *_cachedViews;
}

@property(retain, nonatomic) NSArray *cachedViews; // @synthesize cachedViews=_cachedViews;
@property(readonly, nonatomic, getter=hasInteractionWithStickyHeader) _Bool interactionWithStickyHeader; // @synthesize interactionWithStickyHeader=_interactionWithStickyHeader;
@property(nonatomic) long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(retain, nonatomic) NSArray *cachedViewControllers; // @synthesize cachedViewControllers=_cachedViewControllers;
@property(nonatomic) __weak id <SPTScrollPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *verticalScrollViews; // @synthesize verticalScrollViews=_verticalScrollViews;
@property(retain, nonatomic) UIScrollView *horizontalScrollView; // @synthesize horizontalScrollView=_horizontalScrollView;
@property(nonatomic) double offsetForStickyHeader; // @synthesize offsetForStickyHeader=_offsetForStickyHeader;
- (void).cxx_destruct;
- (void)ceramicViewController:(id)arg1 didUpdateContentSize:(struct CGSize)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)notifyScrollPageViewControllerDelegateDidScrollHorizontally;
- (void)notifyScrollPageViewControllerDelegateDidScrollVertically;
- (void)notifyScrollPageViewControllerDelegateDidCompletedTransition;
- (_Bool)automaticallyAdjustsScrollViewInsets;
@property(readonly, nonatomic) UIViewController *currentViewController;
- (void)normalizeVerticalOffsetBetweenPageIndex:(long long)arg1 andIndex:(long long)arg2;
- (void)updateChangesOnCurrentVerticalScrollVisibleRect;
- (void)performDisappearTransitionForViewControllerAtIndex:(long long)arg1 isAnimated:(_Bool)arg2;
- (void)performAppearTransitionForViewControllerAtIndex:(long long)arg1 isAnimated:(_Bool)arg2;
- (void)scrollToViewControllerAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)scrollToViewControllerAtIndex:(long long)arg1;
- (void)setupVerticalScrollViews;
- (void)setupHorizontalScrollView;
- (void)setupView;
- (void)viewDidLoad;
- (id)initWithViewControllers:(id)arg1 hasInteractionWithStickyHeader:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

