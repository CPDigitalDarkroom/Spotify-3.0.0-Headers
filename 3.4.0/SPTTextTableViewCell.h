//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTSwipeableTableViewCell.h"

#import "SPTDimensionalTableViewCell.h"
#import "SPTThemableView.h"

@class NSString;

@interface SPTTextTableViewCell : SPTSwipeableTableViewCell <SPTThemableView, SPTDimensionalTableViewCell>
{
    _Bool _disabled;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
}

+ (double)preferredHeight;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (void)layoutSubviews;
@property(retain, nonatomic) NSString *title;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(nonatomic) long long accessoryType; // @dynamic accessoryType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

