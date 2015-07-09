//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCollectionEntityList.h"
#import "SPTCollectionEntityViewModel.h"

@class NSArray, NSHashTable, NSString;

@interface SPTCollectionPodcastsViewModel : NSObject <SPTCollectionEntityList, SPTCollectionEntityViewModel>
{
    BOOL _isLoading;
    BOOL _isLoaded;
    id <SPTPodcastDataLoader> _dataLoader;
    id <SPTCollection> _collection;
    NSArray *_entries;
    NSHashTable *_observers;
    int _nbrOfOfflineEpisodes;
}

@property(nonatomic) int nbrOfOfflineEpisodes; // @synthesize nbrOfOfflineEpisodes=_nbrOfOfflineEpisodes;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) BOOL isLoaded; // @synthesize isLoaded=_isLoaded;
@property(nonatomic) BOOL isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSArray *entries; // @synthesize entries=_entries;
@property(nonatomic) __weak id <SPTCollection> collection; // @synthesize collection=_collection;
@property(retain, nonatomic) id <SPTPodcastDataLoader> dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isOfflineEpisodesEmpty) BOOL offlineEpisodesEmpty;
- (BOOL)removeItemAtIndexPath:(id)arg1;
- (BOOL)canRemoveItemAtIndexPath:(id)arg1;
- (BOOL)canMoveItemAtIndexPath:(id)arg1;
- (BOOL)canEditList;
- (id)itemAtIndexPath:(id)arg1;
@property(readonly, nonatomic, getter=isEmpty) BOOL empty;
@property(readonly, nonatomic) int numberOfItems;
- (void)suspend;
- (void)load;
- (void)initialLoad;
- (void)removeEntityListObserver:(id)arg1;
- (void)addEntityListObserver:(id)arg1;
- (void)entityListDidReload:(id)arg1;
- (void)entityList:(id)arg1 metadataDidLoadAtIndexPath:(id)arg2;
- (id)parseJSONData:(id)arg1;
- (id)initWithCollection:(id)arg1 dataLoader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) int numberOfItemsInUntrimmedList;
@property(readonly) Class superclass;

@end
