//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SPTBMWListScreenDelegate <NSObject>
- (void)screenDidInvalidate:(id <SPTBMWListScreen>)arg1;
- (void)screen:(id <SPTBMWListScreen>)arg1 didInvalidateRow:(int)arg2 ofGroup:(int)arg3;
- (void)screen:(id <SPTBMWListScreen>)arg1 wantsNavigationToScreen:(unsigned int)arg2 showing:(id <SPTExternalContentItem>)arg3;
- (void)screen:(id <SPTBMWListScreen>)arg1 requestedPlaybackOfItem:(id <SPTExternalContentItem>)arg2 parent:(id <SPTExternalContentItem>)arg3;
@end

