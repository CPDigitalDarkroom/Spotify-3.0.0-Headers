//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBCacheIndexFileDelegate.h"

@class FBCacheIndex, NSCache, NSString;

@interface FBDataDiskCache : NSObject <FBCacheIndexFileDelegate>
{
    NSCache *_inMemoryCache;
    FBCacheIndex *_cacheIndex;
    NSString *_dataCachePath;
    struct dispatch_queue_s *_fileQueue;
}

+ (id)sharedCache;
@property(readonly, nonatomic) struct dispatch_queue_s *fileQueue; // @synthesize fileQueue=_fileQueue;
@property(copy, nonatomic) NSString *dataCachePath; // @synthesize dataCachePath=_dataCachePath;
- (void)setData:(id)arg1 forURL:(id)arg2;
- (void)removeDataForSession:(id)arg1;
- (void)removeDataForUrl:(id)arg1;
- (id)dataForURL:(id)arg1;
- (BOOL)_doesFileExist:(id)arg1;
- (void)cacheIndex:(id)arg1 deleteFileWithName:(id)arg2;
- (void)cacheIndex:(id)arg1 writeFileWithName:(id)arg2 data:(id)arg3;
@property(nonatomic) unsigned int cacheSizeMemory;
- (void)dealloc;
- (id)init;

@end

