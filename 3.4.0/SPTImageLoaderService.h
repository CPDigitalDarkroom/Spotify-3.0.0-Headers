//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTImageLoaderCacheDelegate.h"
#import "SPTNetworkConnectivityControllerObserver.h"

@class NSString, Reachability, SPTDataLoaderFactory, SPTEntityImageTracker, SPTImageLoaderCache, SPTImageLoaderFactoryImpl, SPTNetworkConnectivityController, SPTPersistentDataCache;

@interface SPTImageLoaderService : NSObject <SPTImageLoaderCacheDelegate, SPTNetworkConnectivityControllerObserver>
{
    _Bool _forcedOffline;
    SPTDataLoaderFactory *_loggedOutDataLoaderFactory;
    SPTPersistentDataCache *_persistentImageCache;
    SPTImageLoaderFactoryImpl *_imageLoaderFactory;
    SPTEntityImageTracker *_offlineEntityTracker;
    SPTImageLoaderCache *_memoryCache;
    Reachability *_reachability;
    NSString *_username;
    SPTNetworkConnectivityController *_networkConnectivityController;
}

+ (void)registerFeatureSettingsWithRegistry:(id)arg1;
+ (id)imageLoaderServiceWithNetworkConnectivityController:(id)arg1 dataLoaderFactory:(id)arg2;
@property(retain, nonatomic) SPTNetworkConnectivityController *networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) _Bool forcedOffline; // @synthesize forcedOffline=_forcedOffline;
@property(retain, nonatomic) Reachability *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) SPTImageLoaderCache *memoryCache; // @synthesize memoryCache=_memoryCache;
@property(retain, nonatomic) SPTEntityImageTracker *offlineEntityTracker; // @synthesize offlineEntityTracker=_offlineEntityTracker;
@property(retain, nonatomic) SPTImageLoaderFactoryImpl *imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(retain, nonatomic) SPTPersistentDataCache *persistentImageCache; // @synthesize persistentImageCache=_persistentImageCache;
@property(retain, nonatomic) SPTDataLoaderFactory *loggedOutDataLoaderFactory; // @synthesize loggedOutDataLoaderFactory=_loggedOutDataLoaderFactory;
- (void).cxx_destruct;
- (void)willEvictImage:(id)arg1 withURL:(id)arg2 size:(struct CGSize)arg3;
- (void)networkReachabilityChanged;
- (void)networkConnectivityController:(id)arg1 didChangeAllowSyncOver3G:(_Bool)arg2;
- (void)networkConnectivityController:(id)arg1 didChangeForcedOffline:(_Bool)arg2;
- (id)validateCDNURL:(id)arg1;
- (void)deleteItemNamed:(id)arg1 inDirectory:(unsigned long long)arg2;
- (void)deleteOldCaches;
- (id)entityImageTrackerCachePath;
- (id)persistentImageCachePath;
- (void)wipeCachedContent;
- (void)wipeOfflineContent;
- (unsigned long long)offlineContentSizeInBytes;
- (void)triggerGC:(_Bool)arg1;
- (void)setOffline:(_Bool)arg1;
- (id)provideImageLoaderFactory;
- (void)willLogout;
- (void)loggedInWithUser:(id)arg1 baseCDNURL:(id)arg2 dataLoaderFactory:(id)arg3;
- (void)dealloc;
- (id)initLoaderServiceWithNetworkConnectivityController:(id)arg1 dataLoaderFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

