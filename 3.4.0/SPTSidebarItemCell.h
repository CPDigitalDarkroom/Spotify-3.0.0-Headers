//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "SPTThemableView.h"

@class CALayer, NSString, SPTSidebarBadgeView;

@interface SPTSidebarItemCell : UITableViewCell <SPTThemableView>
{
    _Bool _momentsEnabled;
    _Bool _iconOverride;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    unsigned long long _icon;
    CALayer *_selectedBarLayer;
    SPTSidebarBadgeView *_badgeView;
}

@property(retain, nonatomic) SPTSidebarBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) CALayer *selectedBarLayer; // @synthesize selectedBarLayer=_selectedBarLayer;
@property(nonatomic) _Bool iconOverride; // @synthesize iconOverride=_iconOverride;
@property(nonatomic) _Bool momentsEnabled; // @synthesize momentsEnabled=_momentsEnabled;
@property(nonatomic) unsigned long long icon; // @synthesize icon=_icon;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)applyThemeLayout;
@property(nonatomic) unsigned long long badgeCount;
@property(copy, nonatomic) NSString *title;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

