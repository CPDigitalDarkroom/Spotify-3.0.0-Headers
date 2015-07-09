//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SPTContextMenuHeader.h"
#import "SPTThemableView.h"

@class NSString, NSURL, UIButton, UIImage, UIImageView, UILabel, UITextView;

@interface SPTShowContextMenuMetadataView : UIView <SPTContextMenuHeader, SPTThemableView>
{
    _Bool _showMoreDescriptionEnabled;
    _Bool _showMoreButtonHidden;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    id <SPTShowContextMenuMetadataViewDelegate> _delegate;
    NSString *_subtitle;
    NSString *_imageMetadataTitle;
    NSString *_longDescription;
    NSURL *_headerImageURL;
    UIView *_subtitleAccessoryView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_metadataLabel;
    UILabel *_imageMetadataLabel;
    UITextView *_descriptionTextView;
    UIButton *_showMoreButton;
    long long _headerType;
}

@property(nonatomic) long long headerType; // @synthesize headerType=_headerType;
@property(nonatomic) _Bool showMoreButtonHidden; // @synthesize showMoreButtonHidden=_showMoreButtonHidden;
@property(nonatomic) _Bool showMoreDescriptionEnabled; // @synthesize showMoreDescriptionEnabled=_showMoreDescriptionEnabled;
@property(retain, nonatomic) UIButton *showMoreButton; // @synthesize showMoreButton=_showMoreButton;
@property(retain, nonatomic) UITextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(retain, nonatomic) UILabel *imageMetadataLabel; // @synthesize imageMetadataLabel=_imageMetadataLabel;
@property(retain, nonatomic) UILabel *metadataLabel; // @synthesize metadataLabel=_metadataLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *subtitleAccessoryView; // @synthesize subtitleAccessoryView=_subtitleAccessoryView;
@property(retain, nonatomic) NSURL *headerImageURL; // @synthesize headerImageURL=_headerImageURL;
@property(retain, nonatomic) NSString *longDescription; // @synthesize longDescription=_longDescription;
@property(retain, nonatomic) NSString *imageMetadataTitle; // @synthesize imageMetadataTitle=_imageMetadataTitle;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(nonatomic) __weak id <SPTShowContextMenuMetadataViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)applyThemeLayout;
- (void)applySubtitleStyle;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIImage *image;
@property(retain, nonatomic) NSString *metadataTitle;
@property(retain, nonatomic) NSString *title;
- (void)showMoreDescription;
- (struct CGRect)frameForDescriptionTextView;
- (struct CGRect)frameForTitleLabel;
- (struct CGRect)frameForShowMoreButton;
- (void)layoutSubviews;
- (void)setupDescriptionTextView;
- (id)initWithFrame:(struct CGRect)arg1 headerType:(long long)arg2;
- (id)arrowIcon;
- (struct CGSize)preferredImageSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
