//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FBCacheEntityInfo : NSObject
{
    NSString *_uuid;
    NSString *_key;
    double _accessTime;
    unsigned long long _fileSize;
    _Bool _dirty;
}

@property(getter=isDirty) _Bool dirty; // @synthesize dirty=_dirty;
@property(readonly) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(readonly) double accessTime; // @synthesize accessTime=_accessTime;
@property(readonly, copy) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, copy) NSString *key; // @synthesize key=_key;
- (void)registerAccess;
- (void)dealloc;
- (id)initWithKey:(id)arg1 uuid:(id)arg2 accessTime:(double)arg3 fileSize:(unsigned long long)arg4;

@end

