//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTImageLoaderFactory.h"

@class NSHashTable, NSString, NSURL, SPTDataLoaderFactory, SPTEntityImageTracker, SPTImageLoaderCache, SPTPersistentDataCache;

@interface SPTImageLoaderFactoryImpl : NSObject <SPTImageLoaderFactory>
{
    _Bool _offline;
    SPTDataLoaderFactory *_dataLoaderFactory;
    SPTPersistentDataCache *_dataCache;
    SPTEntityImageTracker *_offlineEntityTracker;
    SPTImageLoaderCache *_memoryCache;
    NSHashTable *_loaders;
    NSURL *_baseCDNURI;
}

+ (id)imageLoaderFactoryWithDataLoaderFactory:(id)arg1 offlineEntityTracker:(id)arg2 persistentDataCache:(id)arg3 memoryCache:(id)arg4 baseCDNURI:(id)arg5;
@property(retain, nonatomic) NSURL *baseCDNURI; // @synthesize baseCDNURI=_baseCDNURI;
@property(nonatomic) _Bool offline; // @synthesize offline=_offline;
@property(retain, nonatomic) NSHashTable *loaders; // @synthesize loaders=_loaders;
@property(nonatomic) __weak SPTImageLoaderCache *memoryCache; // @synthesize memoryCache=_memoryCache;
@property(nonatomic) __weak SPTEntityImageTracker *offlineEntityTracker; // @synthesize offlineEntityTracker=_offlineEntityTracker;
@property(nonatomic) __weak SPTPersistentDataCache *dataCache; // @synthesize dataCache=_dataCache;
@property(retain, nonatomic) SPTDataLoaderFactory *dataLoaderFactory; // @synthesize dataLoaderFactory=_dataLoaderFactory;
- (void).cxx_destruct;
- (void)makeLoadersOffline:(_Bool)arg1;
- (void)notifyOffline;
- (void)notifyOnline;
- (id)createImageLoader;
- (id)initWithWithDataLoaderFactory:(id)arg1 offlineEntityTracker:(id)arg2 persistentDataCache:(id)arg3 memoryCache:(id)arg4 baseCDNURI:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

