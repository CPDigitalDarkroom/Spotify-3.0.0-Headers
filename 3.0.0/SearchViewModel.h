//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTSearchResultsLoaderDelegate.h"
#import "SPTThemableViewLayoutDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UITableViewDataSource.h"

@class NSString, NSURL, NSUUID, SPTSearchResults, SPTSearchResultsLoader, SearchViewModelSettings;

@interface SearchViewModel : NSObject <UITableViewDataSource, SPTThemableViewLayoutDelegate, UICollectionViewDataSource, SPTSearchResultsLoaderDelegate>
{
    BOOL _offline;
    BOOL _waitingToPerformDelayedRequest;
    id <SearchViewModelDelegate> _delegate;
    SearchViewModelSettings *_settings;
    NSString *_searchString;
    NSString *_searchTag;
    SPTSearchResults *_results;
    SPTSearchResultsLoader *_resultsLoader;
    NSUUID *_currentSearchIntentIdentifier;
    unsigned int _currentRequestSequenceNumber;
}

@property(nonatomic) unsigned int currentRequestSequenceNumber; // @synthesize currentRequestSequenceNumber=_currentRequestSequenceNumber;
@property(copy, nonatomic) NSUUID *currentSearchIntentIdentifier; // @synthesize currentSearchIntentIdentifier=_currentSearchIntentIdentifier;
@property(nonatomic) BOOL waitingToPerformDelayedRequest; // @synthesize waitingToPerformDelayedRequest=_waitingToPerformDelayedRequest;
@property(retain, nonatomic) SPTSearchResultsLoader *resultsLoader; // @synthesize resultsLoader=_resultsLoader;
@property(retain, nonatomic) SPTSearchResults *results; // @synthesize results=_results;
@property(nonatomic, getter=isOffline) BOOL offline; // @synthesize offline=_offline;
@property(copy, nonatomic) NSString *searchTag; // @synthesize searchTag=_searchTag;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(readonly, nonatomic) SearchViewModelSettings *settings; // @synthesize settings=_settings;
@property(nonatomic) __weak id <SearchViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)searchResultsLoaderDidChangeStatus:(id)arg1;
- (void)clear;
- (void)performLoadRequest;
- (id)requestParametersForCurrentState;
- (id)catalogue;
@property(readonly, nonatomic) BOOL momentsAdaptedTextsShouldBeUsed;
@property(readonly, nonatomic) NSURL *viewURL;
@property(readonly, nonatomic) unsigned int indexOfLastSectionContainingResults;
@property(readonly, nonatomic, getter=isForAllResultsView) BOOL forAllResultsView;
@property(readonly, nonatomic) unsigned int numberOfResults;
@property(readonly, nonatomic) unsigned int numberOfSections;
@property(readonly, nonatomic) unsigned int numberOfDatasets;
@property(readonly, nonatomic) BOOL hasNextDataset;
@property(readonly, nonatomic, getter=isLoading) BOOL loading;
- (BOOL)shouldAddPaddingCellsForSectionAtIndex:(unsigned int)arg1;
- (BOOL)sectionAtIndexContainsInteractiveEntities:(unsigned int)arg1;
- (unsigned int)entityRenderingStyleForSectionAtIndex:(unsigned int)arg1;
- (id)localizedAllResultsTitleForSectionAtIndex:(unsigned int)arg1;
- (BOOL)shouldDisplayTitleForSectionAtIndex:(unsigned int)arg1;
- (id)localizedTitleForSectionAtIndex:(unsigned int)arg1;
- (id)allResultsViewTitleForSectionAtIndex:(unsigned int)arg1;
- (id)allResultsURLForSectionAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfEntitiesInSectionAtIndex:(unsigned int)arg1;
- (id)indexPathForModelWithURL:(id)arg1;
- (id)modelForIndexPath:(id)arg1;
- (id)identifierForSectionAtIndex:(unsigned int)arg1;
- (void)loadNextDataset;
- (void)loadDelayed:(BOOL)arg1 searchIntentIdentifier:(id)arg2;
- (id)initWithSettings:(id)arg1 dataSources:(id)arg2 entityDictionaryParser:(id)arg3;
- (void)themableViewDidUpdateLayout:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)setTitlesOfCell:(id)arg1 atIndexPath:(id)arg2;
- (id)subtitleForTableViewCellForIndexPath:(id)arg1;
- (float)heightForTableViewCellForIndexPath:(id)arg1;
- (unsigned int)typeForTableViewCellForIndexPath:(id)arg1;
- (void)tableViewCellContextMenuButtonTapped:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

