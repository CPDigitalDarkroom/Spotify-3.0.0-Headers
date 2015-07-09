//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "SPTCeramicCollectionViewCellProtocol.h"

@class NSString, SPTTheme, UILabel, UIView;

@interface SPTCeramicDynamicHeightTextCell : UICollectionViewCell <SPTCeramicCollectionViewCellProtocol>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    UILabel *_textView;
    SPTTheme *_theme;
}

@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UILabel *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (void)populateWithCeramicItem:(id)arg1;
@property(readonly, nonatomic) unsigned long long cellType;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
- (void)setImage:(id)arg1;
@property(copy, nonatomic) NSString *text;
- (void)setupTextView;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain, nonatomic) UIView *accessoryView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct CGSize imageViewSize;
@property(retain, nonatomic) UIView *prefixView;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIView *touchPreviewView;

@end

