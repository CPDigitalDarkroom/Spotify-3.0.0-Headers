//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTTouchCache.h"

@class NSMapTable, NSObject<OS_dispatch_queue>, NSString;

@interface SPTTouchMemoryCache : NSObject <SPTTouchCache>
{
    NSMapTable *_table;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)getEntryForKey:(id)arg1 createIfMissing:(BOOL)arg2 error:(id *)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

