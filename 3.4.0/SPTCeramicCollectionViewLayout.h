//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTCollectionViewLayout.h"

#import "SPTCeramicCollectionViewLayout.h"

@class NSString, SPTCeramicCollectionView;

@interface SPTCeramicCollectionViewLayout : SPTCollectionViewLayout <SPTCeramicCollectionViewLayout>
{
    double _interBlockSpaceHeight;
    double _headerDescriptionHeight;
    struct CGRect _externalVerticalScrollFrame;
}

@property(nonatomic) double headerDescriptionHeight; // @synthesize headerDescriptionHeight=_headerDescriptionHeight;
@property(nonatomic) struct CGRect externalVerticalScrollFrame; // @synthesize externalVerticalScrollFrame=_externalVerticalScrollFrame;
@property(nonatomic) double interBlockSpaceHeight; // @synthesize interBlockSpaceHeight=_interBlockSpaceHeight;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)item:(id)arg1 sizeInFrame:(struct CGRect)arg2;
- (id)plainCarouselLayoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)carouselLayoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) SPTCeramicCollectionView *collectionView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

