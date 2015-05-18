//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTContextMenuAction.h"

@class NSString, SPAction, SPTask;

@interface SPTContextMenuTaskAction : NSObject <SPTContextMenuAction>
{
    SPTask *_task;
    id _senderObject;
    SPAction *_action;
}

+ (id)actionsFromTasks:(id)arg1;
+ (id)actionFromTask:(id)arg1;
@property(retain, nonatomic) SPAction *action; // @synthesize action=_action;
@property(nonatomic) __weak id senderObject; // @synthesize senderObject=_senderObject;
@property(retain, nonatomic) SPTask *task; // @synthesize task=_task;
- (void).cxx_destruct;
- (id)performAction;
- (id)title;
- (id)image;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

