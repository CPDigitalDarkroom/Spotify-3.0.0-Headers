//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDataDelegate.h"

@class NSMapTable, NSString, SPTPersistentDataCache;

@interface SPTTouchDownloadManager : NSObject <NSURLSessionDataDelegate>
{
    SPTPersistentDataCache *_cache;
    NSMapTable *_entries;
}

@property(readonly, nonatomic) NSMapTable *entries; // @synthesize entries=_entries;
@property(readonly, nonatomic) SPTPersistentDataCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (id)cacheKeyForURL:(id)arg1;
- (id)createDownloadWithURL:(id)arg1;
- (id)initWithCache:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

