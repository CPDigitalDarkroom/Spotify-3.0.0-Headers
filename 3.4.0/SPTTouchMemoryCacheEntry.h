//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTTouchCacheEntry.h"

@class NSMutableData, NSString;

@interface SPTTouchMemoryCacheEntry : NSObject <SPTTouchCacheEntry>
{
    NSMutableData *_data;
}

- (void).cxx_destruct;
- (_Bool)setLength:(unsigned long long)arg1 error:(id *)arg2;
@property(readonly, nonatomic) unsigned long long length;
@property(readonly, nonatomic) void *mutableBytes;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

