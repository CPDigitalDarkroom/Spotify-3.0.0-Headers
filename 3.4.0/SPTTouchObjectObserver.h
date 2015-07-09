//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTTouchObjectObserver : NSObject
{
    id _object;
    CDUnknownBlockType _action;
}

+ (id)observe:(id)arg1 action:(CDUnknownBlockType)arg2;
+ (id)associatedObserversForObject:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(readonly, nonatomic) __weak id object; // @synthesize object=_object;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (id)initWithObject:(id)arg1 action:(CDUnknownBlockType)arg2;

@end

