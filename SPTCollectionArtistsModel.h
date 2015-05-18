//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCollectionFiltering.h"
#import "SPTCollectionOfflineObserver.h"
#import "SPTCollectionSorting.h"
#import "SPTOfflineObserver.h"

@class NSArray, NSMutableSet, NSObject<SPTCollectionInternal>, NSString, SPTEntityService, SPTrackContext;

@interface SPTCollectionArtistsModel : NSObject <SPTOfflineObserver, SPTCollectionOfflineObserver, SPTCollectionSorting, SPTCollectionFiltering>
{
    NSObject<SPTCollectionInternal> *_collection;
    SPTEntityService *_entityService;
    NSArray *_allArtists;
    NSString *_textFilter;
    BOOL _showsOnlyOfflinedContent;
    BOOL _ascendingSortOrder;
    BOOL _contentFiltered;
    id <SPTCollectionArtistsModelDelegate> _delegate;
    SPTrackContext *_collectionArtistsContext;
    NSMutableSet *_fetchedArtists;
    NSMutableSet *_offlineObservations;
    unsigned int _sortColumn;
}

@property(nonatomic, getter=isContentFiltered) BOOL contentFiltered; // @synthesize contentFiltered=_contentFiltered;
@property(nonatomic) BOOL ascendingSortOrder; // @synthesize ascendingSortOrder=_ascendingSortOrder;
@property(nonatomic) unsigned int sortColumn; // @synthesize sortColumn=_sortColumn;
@property(retain, nonatomic) NSMutableSet *offlineObservations; // @synthesize offlineObservations=_offlineObservations;
@property(retain, nonatomic) NSMutableSet *fetchedArtists; // @synthesize fetchedArtists=_fetchedArtists;
@property(retain, nonatomic) SPTrackContext *collectionArtistsContext; // @synthesize collectionArtistsContext=_collectionArtistsContext;
@property(nonatomic) __weak id <SPTCollectionArtistsModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)offlineStateChanged;
- (void)resetFilters;
@property(copy, nonatomic) NSString *textFilter;
@property(nonatomic) BOOL showsOnlyOfflinedContent;
@property(readonly, nonatomic) NSArray *supportedSortColumns;
- (void)setSortOrderWithColumn:(unsigned int)arg1 ascending:(BOOL)arg2;
- (id)artistsBySortingArray:(id)arg1;
- (void)updateArtists;
- (unsigned int)allTrackCountForArtist:(id)arg1;
- (void)offlineStateChangedForEntity:(id)arg1;
- (id)imageURLForArtistAtIndex:(id)arg1;
- (id)tracksForArtistAtIndex:(unsigned int)arg1;
- (unsigned int)offlineSyncStateForArtistAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic, getter=isEmpty) BOOL empty;
@property(readonly, nonatomic) SPTrackContext *context;
- (BOOL)isFollowedArtist:(id)arg1;
- (int)trackCountForArtist:(id)arg1;
- (void)requestMetadataForRows:(id)arg1;
- (BOOL)updateCollectionArtistWithSPTArtist:(id)arg1 atIndex:(unsigned int)arg2;
- (void)retrieveMetadataForCollectionArtist:(id)arg1 index:(id)arg2;
- (void)updateOfflineObservations;
@property(readonly, nonatomic) NSArray *artists;
@property(readonly, nonatomic) NSString *username;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithCollection:(id)arg1 core:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

