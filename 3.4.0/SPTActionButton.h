//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "SPTThemableView.h"

@class NSMutableDictionary, NSString, NSValue;

@interface SPTActionButton : UIButton <SPTThemableView>
{
    _Bool _dynamicWidth;
    _Bool _backgroundTransparent;
    _Bool _sizeOverride;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    unsigned long long _size;
    unsigned long long _style;
    unsigned long long _iconAlignment;
    NSMutableDictionary *_iconStates;
    NSMutableDictionary *_backgroundColorStates;
    NSMutableDictionary *_borderColorStates;
    NSValue *_iconSizeValue;
}

+ (id)actionButtonWithSize:(unsigned long long)arg1 style:(unsigned long long)arg2;
@property(retain, nonatomic) NSValue *iconSizeValue; // @synthesize iconSizeValue=_iconSizeValue;
@property(retain, nonatomic) NSMutableDictionary *borderColorStates; // @synthesize borderColorStates=_borderColorStates;
@property(retain, nonatomic) NSMutableDictionary *backgroundColorStates; // @synthesize backgroundColorStates=_backgroundColorStates;
@property(retain, nonatomic) NSMutableDictionary *iconStates; // @synthesize iconStates=_iconStates;
@property(nonatomic) _Bool sizeOverride; // @synthesize sizeOverride=_sizeOverride;
@property(nonatomic, getter=isBackgroundTransparent) _Bool backgroundTransparent; // @synthesize backgroundTransparent=_backgroundTransparent;
@property(nonatomic) _Bool dynamicWidth; // @synthesize dynamicWidth=_dynamicWidth;
@property(nonatomic) unsigned long long iconAlignment; // @synthesize iconAlignment=_iconAlignment;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_size;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)applyThemeLayout;
- (void)applySize;
- (void)applyInsets;
- (void)applyStyle;
- (void)bounce;
- (void)setSelected:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setIcon:(unsigned long long)arg1 iconSize:(struct CGSize)arg2 title:(id)arg3 forState:(unsigned long long)arg4;
- (void)setIcon:(unsigned long long)arg1 title:(id)arg2 forState:(unsigned long long)arg3;
- (void)setIcon:(unsigned long long)arg1 forState:(unsigned long long)arg2;
- (unsigned long long)iconForState:(unsigned long long)arg1;
- (void)setBorderColor:(id)arg1 forState:(unsigned long long)arg2;
- (id)borderColorForState:(unsigned long long)arg1;
- (void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;
- (id)backgroundColorForState:(unsigned long long)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithSize:(unsigned long long)arg1 style:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
