//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SPTThemableView.h"

@class NSString, SPTAccountUpsellContent, SPTLayoutConstraintBuilder, UIImage, UIImageView, UILabel;

@interface SPTAccountUpsellCard : UIView <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    id <SPTAccountUpsellCardTheme> _theme;
    unsigned long long _contentType;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImage *_iconImage;
    unsigned long long _icon;
    SPTAccountUpsellContent *_content;
    UIImageView *_imageView;
    SPTLayoutConstraintBuilder *_layout;
    UIView *_contentView;
}

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) SPTLayoutConstraintBuilder *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) SPTAccountUpsellContent *content; // @synthesize content=_content;
@property(nonatomic) unsigned long long icon; // @synthesize icon=_icon;
@property(nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)setNeedsUpdateConstraints;
- (id)layoutForPrice;
- (id)layoutForInformationType;
- (id)layoutForSectionHeaderType;
- (void)updateConstraints;
- (void)applyThemeLayout;
@property(retain, nonatomic) id <SPTAccountUpsellCardTheme> theme; // @synthesize theme=_theme;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

