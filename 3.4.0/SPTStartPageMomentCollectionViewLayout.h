//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewLayout.h"

@class NSMutableDictionary, NSValue;

@interface SPTStartPageMomentCollectionViewLayout : UICollectionViewLayout
{
    double _interitemSpacing;
    double _itemShadowTotalWidth;
    NSMutableDictionary *_cellAttributes;
    NSValue *_sourceContentOffsetValue;
    struct CGSize _itemSize;
}

@property(retain, nonatomic) NSValue *sourceContentOffsetValue; // @synthesize sourceContentOffsetValue=_sourceContentOffsetValue;
@property(readonly, nonatomic) NSMutableDictionary *cellAttributes; // @synthesize cellAttributes=_cellAttributes;
@property(nonatomic) double itemShadowTotalWidth; // @synthesize itemShadowTotalWidth=_itemShadowTotalWidth;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
- (void).cxx_destruct;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;
- (id)layoutAttributesNearestCenterPoint:(struct CGPoint)arg1;
- (struct CGPoint)centerPointForContentOffset:(struct CGPoint)arg1;
- (id)init;

@end

