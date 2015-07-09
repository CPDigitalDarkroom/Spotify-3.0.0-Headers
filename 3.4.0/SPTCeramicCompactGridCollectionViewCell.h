//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "SPTCellImageLoadingContextCompatibleCell.h"
#import "SPTCeramicCollectionViewCellProtocol.h"
#import "SPTThemableView.h"

@class NSString, UIImage, UIImageView, UILabel, UIView;

@interface SPTCeramicCompactGridCollectionViewCell : UICollectionViewCell <SPTThemableView, SPTCeramicCollectionViewCellProtocol, SPTCellImageLoadingContextCompatibleCell>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    UIImageView *_imageView;
    UILabel *_titleLabel;
}

@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
- (void)populateWithCeramicItem:(id)arg1;
@property(readonly, nonatomic) struct CGSize imageViewSize;
@property(readonly, nonatomic) unsigned long long cellType;
- (void)applyThemeLayout;
@property(retain, nonatomic) UIImage *image;
@property(copy, nonatomic) NSString *title;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain, nonatomic) UIView *accessoryView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIView *prefixView;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIView *touchPreviewView;

@end

