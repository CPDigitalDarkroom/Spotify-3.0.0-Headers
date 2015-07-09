//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "SPTThemableView.h"

@class NSString, SPTInboxItem, SPTOfflineSyncStatusView, UILabel;

@interface SPTInboxTableViewCell : UITableViewCell <SPTThemableView>
{
    _Bool _active;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    SPTInboxItem *_item;
    UILabel *_dateLabel;
    SPTOfflineSyncStatusView *_offlineSyncStatusView;
}

+ (double)heightWithItem:(id)arg1 inTableView:(id)arg2;
@property(retain, nonatomic) SPTOfflineSyncStatusView *offlineSyncStatusView; // @synthesize offlineSyncStatusView=_offlineSyncStatusView;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) SPTInboxItem *item; // @synthesize item=_item;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)applyThemeLayout;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setAccessoryView:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

