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
    NSString *_textFilter;
    _Bool _showsOnlyOfflinedContent;
    _Bool _ascendingSortOrder;
    _Bool _contentFiltered;
    id <SPTCollectionArtistsModelDelegate> _delegate;
    NSArray *_sectionedArtists;
    SPTrackContext *_collectionArtistsContext;
    NSMutableSet *_fetchedArtists;
    NSMutableSet *_offlineObservations;
    unsigned long long _sortColumn;
}

@property(nonatomic, getter=isContentFiltered) _Bool contentFiltered; // @synthesize contentFiltered=_contentFiltered;
@property(nonatomic) _Bool ascendingSortOrder; // @synthesize ascendingSortOrder=_ascendingSortOrder;
@property(nonatomic) unsigned long long sortColumn; // @synthesize sortColumn=_sortColumn;
@property(retain, nonatomic) NSMutableSet *offlineObservations; // @synthesize offlineObservations=_offlineObservations;
@property(retain, nonatomic) NSMutableSet *fetchedArtists; // @synthesize fetchedArtists=_fetchedArtists;
@property(retain, nonatomic) SPTrackContext *collectionArtistsContext; // @synthesize collectionArtistsContext=_collectionArtistsContext;
@property(retain, nonatomic) NSArray *sectionedArtists; // @synthesize sectionedArtists=_sectionedArtists;
@property(nonatomic) __weak id <SPTCollectionArtistsModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)offlineStateChanged;
- (void)resetFilters;
@property(copy, nonatomic) NSString *textFilter;
@property(nonatomic) _Bool showsOnlyOfflinedContent;
@property(readonly, nonatomic) NSArray *supportedSortColumns;
- (void)setSortOrderWithColumn:(unsigned long long)arg1 ascending:(_Bool)arg2;
- (id)artistsBySortingArray:(id)arg1;
- (void)updateArtists;
- (unsigned long long)allTrackCountForArtist:(id)arg1;
- (void)offlineStateChangedForEntity:(id)arg1;
- (id)imageURLForArtistAtIndex:(id)arg1;
- (id)tracksForArtistAtIndexPath:(id)arg1;
- (unsigned long long)offlineSyncStateForArtistAtIndexPath:(id)arg1;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic) SPTrackContext *context;
- (_Bool)isFollowedArtist:(id)arg1;
- (long long)trackCountForArtist:(id)arg1;
- (void)requestMetadataForRows:(id)arg1;
- (_Bool)updateCollectionArtistWithSPTArtist:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)retrieveMetadataForCollectionArtist:(id)arg1 index:(id)arg2;
- (void)updateOfflineObservations;
@property(readonly, nonatomic) NSString *username;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithCollection:(id)arg1 core:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

