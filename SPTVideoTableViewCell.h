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

+ (float)preferredHeight;
@property(retain, nonatomic) SPTVideoCellContentView *videoCellView; // @synthesize videoCellView=_videoCellView;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setImage:(id)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic) UIImage *image;
@property(retain, nonatomic) UIImage *placeholderImage;
@property(nonatomic) int placeholderImageContentMode;
- (void)setAccessoryView:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEditing:(BOOL)arg1;
@property(nonatomic, getter=isActive) BOOL active;
@property(nonatomic, getter=isDisabled) BOOL disabled;
@property(copy, nonatomic) NSString *metadataTitle;
@property(retain, nonatomic) UIView *subtitleAccessoryView;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
- (id)metadataLabel;
- (id)subtitleLabel;
- (id)textLabel;
- (id)placeholderImageView;
- (id)imageView;
- (void)setupVideoCell;
- (void)setFrame:(struct CGRect)arg1;
- (void)prepareForReuse;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(nonatomic) int accessoryType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

