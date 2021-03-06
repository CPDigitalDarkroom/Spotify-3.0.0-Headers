//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "UIScrollViewDelegate.h"

@class NSMutableDictionary, NSMutableSet, NSString;

@interface SPStepScrollView : UIScrollView <UIScrollViewDelegate>
{
    BOOL _needsReloadData;
    BOOL _needsReloadConstraints;
    BOOL _preventUnloading;
    int _stepsLeft;
    int _stepsRight;
    id <SPStepScrollViewDelegate> _stepDelegate;
    id <SPStepScrollViewDataSource> _dataSource;
    NSMutableSet *_loadedPageViews;
    NSMutableDictionary *_queuedPageViews;
}

@property(retain, nonatomic) NSMutableDictionary *queuedPageViews; // @synthesize queuedPageViews=_queuedPageViews;
@property(retain, nonatomic) NSMutableSet *loadedPageViews; // @synthesize loadedPageViews=_loadedPageViews;
@property(nonatomic) __weak id <SPStepScrollViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <SPStepScrollViewDelegate> stepDelegate; // @synthesize stepDelegate=_stepDelegate;
- (void).cxx_destruct;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (int)currentRelativePageIndex;
- (float)originOffset;
- (void)queuePageView:(id)arg1;
- (void)notifyAndUpdate;
- (void)update;
- (void)reloadConstraintsRestoreOffset:(BOOL)arg1;
- (void)setNeedsReloadData;
- (BOOL)setRelativeIndex:(int)arg1 animated:(BOOL)arg2;
- (id)dequeReusablePageViewWithIdentifier:(id)arg1 relativeIndex:(int)arg2;
- (id)pageViewAtRelativeIndex:(int)arg1;
- (struct CGRect)frameForPageAtRelativeIndex:(int)arg1;
- (void)clearReusePageViewQueue;
- (void)reloadConstraints;
- (void)reloadData;
- (id)visiblePageViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

