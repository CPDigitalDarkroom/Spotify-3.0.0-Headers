//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTContextMenuTaskAction.h"

#import "SPTContextMenuAction.h"

@class NSString;

@interface SPTPlaylistAction : SPTContextMenuTaskAction <SPTContextMenuAction>
{
    long long _actionType;
    long long _actionState;
    id <SPTPlaylistActionDelegate> _delegate;
}

+ (id)actionWithType:(long long)arg1 state:(long long)arg2 delegate:(id)arg3;
@property(nonatomic) __weak id <SPTPlaylistActionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long actionState; // @synthesize actionState=_actionState;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
- (void).cxx_destruct;
- (id)performAction;
- (id)image;
- (id)title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

