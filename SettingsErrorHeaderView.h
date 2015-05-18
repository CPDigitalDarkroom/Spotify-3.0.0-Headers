//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SPTThemableView.h"

@class NSString, UILabel;

@interface SettingsErrorHeaderView : UIView <SPTThemableView>
{
    UILabel *_textLabel;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    float _margin;
}

@property(nonatomic) float margin; // @synthesize margin=_margin;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)applyThemeLayout;
- (float)headerHeightForWidth:(float)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *text;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
