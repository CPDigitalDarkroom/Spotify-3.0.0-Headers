//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "SPTCellImageLoadingContextCompatibleCell.h"
#import "SPTCeramicCollectionViewCellWithMetaDataPrefixView.h"
#import "SPTThemableView.h"

@class NSString, SPTVideoCellContentView, UIView;

@interface SPTCeramicVideoCollectionViewCell : UICollectionViewCell <SPTCellImageLoadingContextCompatibleCell, SPTThemableView, SPTCeramicCollectionViewCellWithMetaDataPrefixView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    SPTVideoCellContentView *_videoCellContentView;
    UIView *_bottomSeparatorView;
}

@property(retain, nonatomic) UIView *bottomSeparatorView; // @synthesize bottomSeparatorView=_bottomSeparatorView;
@property(retain, nonatomic) SPTVideoCellContentView *videoCellContentView; // @synthesize videoCellContentView=_videoCellContentView;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
- (void)setImage:(id)arg1;
@property(retain, nonatomic) UIView *metaDataPrefixView;
@property(retain, nonatomic) UIView *accessoryView;
@property(copy, nonatomic) NSString *metadataTitle;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) struct CGSize imageViewSize;
- (void)populateWithCeramicItem:(id)arg1;
@property(readonly, nonatomic) unsigned long long cellType;
- (void)applyThemeLayout;
- (void)setupBottomSeparatorView;
- (void)setupVideoContentView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIView *prefixView;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIView *touchPreviewView;

@end

