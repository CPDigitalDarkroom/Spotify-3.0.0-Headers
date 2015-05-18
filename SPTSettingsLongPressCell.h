//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTSettingsTableViewCell.h"

@class NSTimer;

@interface SPTSettingsLongPressCell : SPTSettingsTableViewCell
{
    NSTimer *longPressTimer;
    id longPressTarget;
    SEL longPressAction;
}

@property SEL longPressAction; // @synthesize longPressAction;
@property id longPressTarget; // @synthesize longPressTarget;
@property(retain, nonatomic) NSTimer *longPressTimer; // @synthesize longPressTimer;
- (void)dealloc;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)longPressTriggered;

@end

