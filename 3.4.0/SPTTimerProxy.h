//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, SPTPersistentDataCache;

@interface SPTTimerProxy : NSObject
{
    SPTPersistentDataCache *_dataCache;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak SPTPersistentDataCache *dataCache; // @synthesize dataCache=_dataCache;
- (void).cxx_destruct;
- (void)enqueueGC:(id)arg1;

@end
