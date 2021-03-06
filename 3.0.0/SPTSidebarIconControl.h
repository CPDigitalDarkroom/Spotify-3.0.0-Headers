//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "SPTThemableView.h"

@class NSString, UIImageView;

@interface SPTSidebarIconControl : UIControl <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    int _badgeCount;
    unsigned int _icon;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) unsigned int icon; // @synthesize icon=_icon;
@property(nonatomic) int badgeCount; // @synthesize badgeCount=_badgeCount;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)applyThemeLayout;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

