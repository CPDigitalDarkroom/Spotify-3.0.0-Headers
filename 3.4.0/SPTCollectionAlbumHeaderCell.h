//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "SPTCellImageLoadingContextCompatibleCell.h"
#import "SPTThemableView.h"

@class NSString, SPKVObservation, SPTImageBlurView, UIImage;

@interface SPTCollectionAlbumHeaderCell : UITableViewCell <SPTThemableView, SPTCellImageLoadingContextCompatibleCell>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    UIImage *_image;
    UIImage *_placeholderImage;
    NSString *_title;
    SPTImageBlurView *_backgroundImageView;
    SPKVObservation *_contentImageObservation;
    SPKVObservation *_contentOffsetObservation;
}

@property(retain, nonatomic) SPKVObservation *contentOffsetObservation; // @synthesize contentOffsetObservation=_contentOffsetObservation;
@property(retain, nonatomic) SPKVObservation *contentImageObservation; // @synthesize contentImageObservation=_contentImageObservation;
@property(retain, nonatomic) SPTImageBlurView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (void)setAccessoryType:(long long)arg1;
- (id)imageToShow;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)updateBackgroundImageViewFrame;
- (void)updateBackgroundImage;
- (void)didMoveToWindow;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

