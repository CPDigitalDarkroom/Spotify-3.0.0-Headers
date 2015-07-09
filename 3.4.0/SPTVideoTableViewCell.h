//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTSwipeableTableViewCell.h"

#import "SPTCellImageLoadingContextCompatibleCell.h"
#import "SPTDimensionalTableViewCell.h"
#import "SPTThemableView.h"

@class NSString, SPTVideoCellContentView, UIImage, UIView;

@interface SPTVideoTableViewCell : SPTSwipeableTableViewCell <SPTThemableView, SPTCellImageLoadingContextCompatibleCell, SPTDimensionalTableViewCell>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    SPTVideoCellContentView *_videoCellView;
}

+ (double)preferredHeight;
@property(retain, nonatomic) SPTVideoCellContentView *videoCellView; // @synthesize videoCellView=_videoCellView;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIImage *image;
@property(retain, nonatomic) UIImage *placeholderImage;
@property(nonatomic) long long placeholderImageContentMode;
- (void)setAccessoryView:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setEditing:(_Bool)arg1;
@property(nonatomic, getter=isActive) _Bool active;
@property(nonatomic, getter=isDisabled) _Bool disabled;
@property(copy, nonatomic) NSString *metadataTitle;
@property(retain, nonatomic) UIView *subtitleAccessoryView;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
- (id)metadataLabel;
- (id)detailTextLabel;
- (id)textLabel;
- (id)placeholderImageView;
- (id)imageView;
@property(readonly, nonatomic) _Bool isReorderable;
- (void)setupVideoCell;
- (void)setFrame:(struct CGRect)arg1;
- (void)prepareForReuse;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(nonatomic) long long accessoryType; // @dynamic accessoryType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

