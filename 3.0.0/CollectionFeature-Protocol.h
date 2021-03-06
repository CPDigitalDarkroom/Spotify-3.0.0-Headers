//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSURL, SPCollectionController, SPTRouter, SPTTrackContextFactory, SPTask, SPTrackContext;

@protocol CollectionFeature <NSObject>
@property(readonly, nonatomic) NSArray *collectionLists;
@property(readonly, nonatomic, getter=isYourLibraryFeatureEnabled) BOOL yourLibraryFeatureEnabled;
@property(readonly, getter=isVisible) BOOL visible;
@property(readonly, getter=isEnabled) BOOL enabled;
- (void)registerCollectionEntityContentType:(id <SPTCollectionEntityContentType>)arg1;
- (void)removeCollectionListsObserver:(id <SPTCollectionListsObserver>)arg1;
- (void)addCollectionListsObserver:(id <SPTCollectionListsObserver>)arg1;
- (void)unregisterCollectionContentListWithTitle:(NSString *)arg1 URL:(NSURL *)arg2;
- (void)registerCollectionContentListWithTitle:(NSString *)arg1 icon:(unsigned int)arg2 URL:(NSURL *)arg3 order:(unsigned int)arg4;
- (void)unregisterCollectionResolverWithRouter:(SPTRouter *)arg1;
- (void)registerCollectionResolverWithRouter:(SPTRouter *)arg1;
- (BOOL)shouldDisplayCurationInfoView;
- (BOOL)shouldUseMusicHub;
- (BOOL)shouldUseRecentlyPlayedLayout;
- (id <SPTCollectionEntityList>)provideRecentlyPlayedEntityList;
- (id <SPTITunesLibraryManager>)provideITunesLibraryManager;
- (SPTTrackContextFactory *)provideTrackContextFactory;
- (SPCollectionController *)provideCollectionController;
- (SPTrackContext *)provideCollectedContextForArtistURL:(NSURL *)arg1;
- (SPTrackContext *)provideCollectedContextForAlbumURL:(NSURL *)arg1;
- (SPTask *)provideCompleteAlbumActionTaskForURL:(NSURL *)arg1 logContext:(NSString *)arg2;
- (SPTask *)provideSaveRemoveActionTaskForURL:(NSURL *)arg1 logContext:(NSString *)arg2;
- (id <SPTCollection>)provideCollection;
@end

