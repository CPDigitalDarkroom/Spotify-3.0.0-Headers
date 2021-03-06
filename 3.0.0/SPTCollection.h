//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FollowModelObserver.h"
#import "SPCollectionControllerDelegate.h"
#import "SPTCollectionInternal.h"
#import "SPTCollectionOfflining.h"

@class FollowModel, NSDictionary, NSObject<SPTCollectionAlbumList>, NSObject<SPTCollectionArtistList>, NSObject<SPTMetadataObjectList>, NSPointerArray, NSString, SPCollectionController, SPCollectionOfflineController, SPSession, SPTCollectionAllTracksModel, SPTOfflineManager;

@interface SPTCollection : NSObject <FollowModelObserver, SPCollectionControllerDelegate, SPTCollectionInternal, SPTCollectionOfflining>
{
    SPTCollectionAllTracksModel *_allTracksModel;
    SPSession *_session;
    SPTOfflineManager *_offlineManager;
    NSPointerArray *_observers;
    SPCollectionController *_collectionController;
    SPCollectionOfflineController *_collectionOfflineController;
    NSObject<SPTCollectionArtistList> *_artistsMetadataList;
    NSObject<SPTCollectionAlbumList> *_albumsMetadataList;
    NSDictionary *_albumObjects;
    NSDictionary *_artistObjects;
    FollowModel *_followModel;
    id <SPTResolver> _followModelResolver;
}

@property(retain, nonatomic) id <SPTResolver> followModelResolver; // @synthesize followModelResolver=_followModelResolver;
@property(retain, nonatomic) FollowModel *followModel; // @synthesize followModel=_followModel;
@property(retain, nonatomic) NSDictionary *artistObjects; // @synthesize artistObjects=_artistObjects;
@property(retain, nonatomic) NSDictionary *albumObjects; // @synthesize albumObjects=_albumObjects;
@property(retain, nonatomic) NSObject<SPTCollectionAlbumList> *albumsMetadataList; // @synthesize albumsMetadataList=_albumsMetadataList;
@property(retain, nonatomic) NSObject<SPTCollectionArtistList> *artistsMetadataList; // @synthesize artistsMetadataList=_artistsMetadataList;
@property(retain, nonatomic) SPCollectionOfflineController *collectionOfflineController; // @synthesize collectionOfflineController=_collectionOfflineController;
@property(retain, nonatomic) SPCollectionController *collectionController; // @synthesize collectionController=_collectionController;
@property(retain, nonatomic) NSPointerArray *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) SPTOfflineManager *offlineManager; // @synthesize offlineManager=_offlineManager;
@property(nonatomic) __weak SPSession *session; // @synthesize session=_session;
@property(retain, nonatomic) SPTCollectionAllTracksModel *allTracksModel; // @synthesize allTracksModel=_allTracksModel;
- (void).cxx_destruct;
- (unsigned int)offlineSyncStateForURL:(id)arg1;
- (unsigned int)offlineSyncStateForTrack:(id)arg1;
- (BOOL)containsWholeCollectionOffline;
- (BOOL)entityHasOfflineContent:(id)arg1;
- (BOOL)containsOfflineURL:(id)arg1;
- (void)removeOfflineObserver:(id)arg1;
- (void)addOfflineObserver:(id)arg1;
- (void)removeWholeCollectionOffline;
- (void)removeOfflineURL:(id)arg1;
- (void)addWholeCollectionOfflineWithTrackOrder:(id)arg1;
- (void)addWholeCollectionOffline;
- (void)addOfflineURL:(id)arg1;
- (void)addOfflineURL:(id)arg1 withTrackOrder:(id)arg2;
- (void)albumListDidUpdateWithAlbums:(id)arg1;
- (void)artistListDidUpdateWithArtists:(id)arg1;
- (void)unload;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)collectionAlbumForAlbumURL:(id)arg1;
- (id)collectionArtistForArtistURL:(id)arg1;
- (void)saveState;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (BOOL)isAlbumComplete:(id)arg1;
- (BOOL)isFollowedArtist:(id)arg1;
- (BOOL)isEmpty;
- (int)countOfTracksInCollectionForAlbumLink:(id)arg1;
- (int)countOfAlbumsInCollectionForArtistLink:(id)arg1;
- (int)countOfTracksInCollectionForArtistLink:(id)arg1;
- (id)contextForAllTracksInCollection;
- (id)contextForAlbumURL:(id)arg1;
- (id)contextForArtistURL:(id)arg1;
- (id)allTracksInCollection;
- (id)allTracksForAlbumLink:(id)arg1;
- (id)allTracksForArtistLink:(id)arg1;
@property(readonly, nonatomic) NSObject<SPTMetadataObjectList> *tracks;
@property(readonly, nonatomic) NSObject<SPTCollectionAlbumList> *albums;
@property(readonly, nonatomic) NSObject<SPTCollectionArtistList> *artists;
- (BOOL)canAddTrackWithURL:(id)arg1;
- (BOOL)containsURL:(id)arg1;
- (void)removeURL:(id)arg1 bySource:(id)arg2;
- (void)addURL:(id)arg1 bySource:(id)arg2;
@property(readonly, nonatomic) id <SPTCollectionOfflining> offlineController;
@property(readonly, nonatomic) NSString *username;
- (id)initWithSession:(id)arg1 collectionController:(id)arg2 collectionOfflineController:(id)arg3 offlineManager:(id)arg4 followResolver:(id)arg5;
- (void)followModel:(id)arg1 followDataDidChange:(id)arg2;
- (id)followModelWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

