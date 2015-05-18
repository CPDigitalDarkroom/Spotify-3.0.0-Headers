//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAbbaFeatureFlagsObserver.h"
#import "SPTITunesLibraryManager.h"
#import "SPTLocalSettingsObserver.h"
#import "SPTProductStateObserver.h"

@class NSMapTable, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, SPCore, SPTEntityCancelationToken, SPTLocalFileManager, SPTLogCenter;

@interface SPTITunesLibraryManagerImplementation : NSObject <SPTLocalSettingsObserver, SPTAbbaFeatureFlagsObserver, SPTProductStateObserver, SPTITunesLibraryManager>
{
    BOOL _enabled;
    id <SPTLocalSettings> _localSettings;
    id <SPTAbbaFeatureFlags> _featureFlags;
    SPTLogCenter *_logCenter;
    id <SPTCollection> _collection;
    SPTLocalFileManager *_localFileManager;
    SPCore *_core;
    id <SPTProductState> _productState;
    NSObject<OS_dispatch_queue> *_libraryScanQueue;
    NSMapTable *_observersQueues;
    NSMutableArray *_currentMappedLocalTracks;
    SPTEntityCancelationToken *_trackLookupTask;
}

+ (id)itunesLibraryManagerWithLocalSettings:(id)arg1 featureFlags:(id)arg2 logCenter:(id)arg3 collection:(id)arg4 localFileManager:(id)arg5 core:(id)arg6 productState:(id)arg7;
@property(retain, nonatomic) SPTEntityCancelationToken *trackLookupTask; // @synthesize trackLookupTask=_trackLookupTask;
@property(retain, nonatomic) NSMutableArray *currentMappedLocalTracks; // @synthesize currentMappedLocalTracks=_currentMappedLocalTracks;
@property(retain, nonatomic) NSMapTable *observersQueues; // @synthesize observersQueues=_observersQueues;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *libraryScanQueue; // @synthesize libraryScanQueue=_libraryScanQueue;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(retain, nonatomic) SPCore *core; // @synthesize core=_core;
@property(retain, nonatomic) SPTLocalFileManager *localFileManager; // @synthesize localFileManager=_localFileManager;
@property(retain, nonatomic) id <SPTCollection> collection; // @synthesize collection=_collection;
@property(retain, nonatomic) SPTLogCenter *logCenter; // @synthesize logCenter=_logCenter;
@property(retain, nonatomic) id <SPTAbbaFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
- (void).cxx_destruct;
- (void)productState:(id)arg1 stateDidChange:(id)arg2;
- (void)dealloc;
- (void)mediaLibraryDidChange;
- (void)featureFlagsDidChange:(id)arg1;
- (void)localSettingsDidChange:(id)arg1;
- (void)mapLocalTracksToSpotifyTracksFromLibrary:(id)arg1;
- (id)metadataInfoFromDictionary:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 on:(id)arg2;
@property(readonly, nonatomic) BOOL userPermissionToScan;
@property(readonly, nonatomic) BOOL userHasiTunesMediaItems;
- (void)writePlist:(id)arg1;
- (id)libraryItemsToAssetURLs:(id)arg1;
- (void)logModifiedLibraryItems:(id)arg1 withCachedLibrary:(id)arg2;
- (id)findLibraryPersistentIDDeltas:(id)arg1;
- (id)itunesPlist;
- (id)itunesPlistPath;
- (id)temporaryFileURLWithFileManager:(id)arg1;
- (id)mediaLibraryLastUpdatedDateString;
- (void)start;
- (void)enableIfFlagged;
- (id)initWithLocalSettings:(id)arg1 featureFlags:(id)arg2 logCenter:(id)arg3 collection:(id)arg4 localFileManager:(id)arg5 core:(id)arg6 productState:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

