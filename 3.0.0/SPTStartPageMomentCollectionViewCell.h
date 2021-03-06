//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "SPTCellImageLoadingContextCompatibleCell.h"
#import "SPTThemableView.h"

@class NSArray, NSString, SPTActionButton, SPTStartPageMomentCollectionViewLayoutAttributes, SPTStartPageShadowGenerator, UIImageView, UILabel;

@interface SPTStartPageMomentCollectionViewCell : UICollectionViewCell <SPTThemableView, SPTCellImageLoadingContextCompatibleCell>
{
    BOOL _displayFollowButton;
    BOOL _albumContext;
    BOOL _metadataIsHidden;
    BOOL _useCircularImage;
    BOOL _showRadioWaves;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    id <SPTStartPageMomentCollectionViewCellDelegate> _delegate;
    SPTStartPageShadowGenerator *_shadowGenerator;
    NSString *_detail;
    UIImageView *_imageView;
    UIImageView *_backgroundImageView;
    UILabel *_taglineLabel;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIImageView *_shadowView;
    SPTActionButton *_followButton;
    SPTStartPageMomentCollectionViewLayoutAttributes *_lastLayoutAttributes;
}

@property(retain, nonatomic) SPTStartPageMomentCollectionViewLayoutAttributes *lastLayoutAttributes; // @synthesize lastLayoutAttributes=_lastLayoutAttributes;
@property(readonly, nonatomic) SPTActionButton *followButton; // @synthesize followButton=_followButton;
@property(readonly, nonatomic) UIImageView *shadowView; // @synthesize shadowView=_shadowView;
@property(readonly, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UILabel *taglineLabel; // @synthesize taglineLabel=_taglineLabel;
@property(readonly, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) BOOL showRadioWaves; // @synthesize showRadioWaves=_showRadioWaves;
@property(nonatomic) BOOL useCircularImage; // @synthesize useCircularImage=_useCircularImage;
@property(nonatomic, getter=isMetadataHidden) BOOL metadataIsHidden; // @synthesize metadataIsHidden=_metadataIsHidden;
@property(nonatomic, getter=isAlbumContext) BOOL albumContext; // @synthesize albumContext=_albumContext;
@property(nonatomic, getter=isFollowedButtonVisible) BOOL displayFollowButton; // @synthesize displayFollowButton=_displayFollowButton;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) SPTStartPageShadowGenerator *shadowGenerator; // @synthesize shadowGenerator=_shadowGenerator;
@property(nonatomic) __weak id <SPTStartPageMomentCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)generateCellSnapshot:(CDUnknownBlockType)arg1;
@property(nonatomic, getter=isFollowed) BOOL followed;
- (void)activateCell;
- (void)deactivateCell;
- (void)showImageAnimated:(BOOL)arg1;
- (void)hideImageAnimated:(BOOL)arg1;
- (void)followButtonTapped:(id)arg1;
- (void)centerTextInLabel:(id)arg1 aboveYPosition:(float)arg2 inBoundingRect:(struct CGRect)arg3;
- (void)centerTextInLabel:(id)arg1 belowYPosition:(float)arg2 inBoundingRect:(struct CGRect)arg3;
- (struct CGSize)imageViewSizeFromTheme:(id)arg1;
- (void)layoutSubviews;
- (void)applyAlpha:(float)arg1 andXOffset:(float)arg2 toView:(id)arg3 withCenterPoint:(float)arg4;
- (void)applyXDelta:(float)arg1 toView:(id)arg2 withCenterPoint:(float)arg3;
@property(readonly, nonatomic) NSArray *contentViews;
- (void)applyLastLayoutAttributes:(id)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setImage:(id)arg1 animated:(BOOL)arg2;
- (void)setImage:(id)arg1;
- (void)applyThemeLayout;
@property(copy, nonatomic) NSString *contextDescription;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *tagline;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

