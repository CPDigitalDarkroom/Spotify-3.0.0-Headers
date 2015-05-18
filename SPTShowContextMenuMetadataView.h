//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SPTContextMenuHeader.h"
#import "SPTThemableView.h"

@class NSString, NSURL, UIImage, UIImageView, UILabel, UITextView;

@interface SPTShowContextMenuMetadataView : UIView <SPTContextMenuHeader, SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    NSString *_subtitle;
    NSString *_longDescription;
    NSURL *_headerImageURL;
    UIView *_subtitleAccessoryView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_metadataLabel;
    UITextView *_descriptionTextView;
}

@property(retain, nonatomic) UITextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(retain, nonatomic) UILabel *metadataLabel; // @synthesize metadataLabel=_metadataLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *subtitleAccessoryView; // @synthesize subtitleAccessoryView=_subtitleAccessoryView;
@property(retain, nonatomic) NSURL *headerImageURL; // @synthesize headerImageURL=_headerImageURL;
@property(retain, nonatomic) NSString *longDescription; // @synthesize longDescription=_longDescription;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)applyThemeLayout;
- (void)applySubtitleStyle;
- (void)setImage:(id)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic) UIImage *image;
@property(retain, nonatomic) NSString *metadataTitle;
@property(retain, nonatomic) NSString *title;
- (struct CGRect)frameForTitleLabel;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)preferredImageSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

