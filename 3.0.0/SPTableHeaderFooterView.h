//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SPTThemableView.h"

@class NSString, UILabel;

@interface SPTableHeaderFooterView : UIView <SPTThemableView>
{
    BOOL _firstSection;
    BOOL _lastSection;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    int _style;
    float _footerHeight;
    UILabel *_textLabel;
    float _maxContentWidth;
}

@property(nonatomic) float maxContentWidth; // @synthesize maxContentWidth=_maxContentWidth;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) float footerHeight; // @synthesize footerHeight=_footerHeight;
@property(nonatomic, getter=isLastSection) BOOL lastSection; // @synthesize lastSection=_lastSection;
@property(nonatomic, getter=isFirstSection) BOOL firstSection; // @synthesize firstSection=_firstSection;
@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (float)height;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *text;
- (void)applyThemeLayout;
- (id)initWithStyle:(int)arg1 maxWidth:(float)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
