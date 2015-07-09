//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTCollectionView.h"

#import "SPSidebarScrollDisabler.h"

@class NSString, SPTCeramicCollectionViewLayout, SPTImageBlurView, UIImage;

@interface SPTCeramicCollectionView : SPTCollectionView <SPSidebarScrollDisabler>
{
    NSString *_cellReuseIdentifier;
    long long _blockRenderType;
    long long _blockIndex;
    UIImage *_backgroundImage;
    SPTImageBlurView *_backgroundImageBlurView;
    struct CGRect _frameWithinTableView;
}

+ (double)collectionViewHeightForRenderType:(long long)arg1 headerDescriptionHeight:(double)arg2;
+ (Class)collectionViewFooterClassForBlockRenderType:(long long)arg1;
+ (Class)collectionViewCellClassForBlockRenderType:(long long)arg1;
+ (Class)collectionViewHeaderClassForBlockRenderType:(long long)arg1;
+ (struct CGRect)collectionViewInitialFrameForRenderType:(long long)arg1 insideViewWidth:(double)arg2 headerDescriptionHeight:(double)arg3;
@property(retain, nonatomic) SPTImageBlurView *backgroundImageBlurView; // @synthesize backgroundImageBlurView=_backgroundImageBlurView;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) struct CGRect frameWithinTableView; // @synthesize frameWithinTableView=_frameWithinTableView;
@property(readonly, nonatomic) long long blockIndex; // @synthesize blockIndex=_blockIndex;
@property(readonly, nonatomic) long long blockRenderType; // @synthesize blockRenderType=_blockRenderType;
@property(readonly, copy, nonatomic) NSString *cellReuseIdentifier; // @synthesize cellReuseIdentifier=_cellReuseIdentifier;
- (void).cxx_destruct;
- (_Bool)shouldInterruptSidebarRevealGesture:(id)arg1;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (void)applyLayoutOrientation;
- (void)deselectAllItems;
- (_Bool)isAccessibilityElement;
- (void)setupBackgroundImageBlurView;
- (void)setupViewWithLayout:(id)arg1;
- (void)registerClassesForBlockRenderType:(long long)arg1;
- (id)initWithBlockRenderType:(long long)arg1 blockIndex:(long long)arg2 viewWidth:(double)arg3 headerDescriptionText:(id)arg4 delegate:(id)arg5;

// Remaining properties
@property(retain, nonatomic) SPTCeramicCollectionViewLayout *collectionViewLayout;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
