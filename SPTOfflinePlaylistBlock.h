//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCeramicBlock.h"
#import "SPTOfflineObserver.h"

@class NSArray, NSHashTable, NSString, NSURL, SPSession, SPTOfflineManager;

@interface SPTOfflinePlaylistBlock : NSObject <SPTOfflineObserver, SPTCeramicBlock>
{
    SPSession *_session;
    NSArray *_items;
    NSString *_title;
    int _renderType;
    SPTOfflineManager *_offlineManager;
    NSArray *_playlists;
    int _itemRenderType;
    NSHashTable *_offlinePlaylistBlockObservers;
}

@property(retain, nonatomic) NSHashTable *offlinePlaylistBlockObservers; // @synthesize offlinePlaylistBlockObservers=_offlinePlaylistBlockObservers;
@property(nonatomic) int itemRenderType; // @synthesize itemRenderType=_itemRenderType;
@property(copy, nonatomic) NSArray *playlists; // @synthesize playlists=_playlists;
@property(readonly, nonatomic) SPTOfflineManager *offlineManager; // @synthesize offlineManager=_offlineManager;
@property(readonly, nonatomic) int renderType; // @synthesize renderType=_renderType;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) __weak SPSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)dealloc;
- (id)placeholder;
- (BOOL)shouldShowPlaylist:(id)arg1;
@property(readonly, nonatomic) NSArray *allPlaylists;
- (void)finishInitialization;
- (void)offlineStateChangedForEntity:(id)arg1;
- (void)notifyObservers;
- (void)removeOfflinePlaylistBlockObserver:(id)arg1;
- (void)addOfflinePlaylistBlockObserver:(id)arg1;
- (void)stopObservingPlaylistOfflineState;
- (void)startObservingPlaylistsOfflineState;
- (id)extractPlaylistsToShow;
- (void)generateItems;
- (id)initWithSession:(id)arg1 offlineManager:(id)arg2 renderType:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *descriptionText;
@property(readonly, copy, nonatomic) NSURL *footerActionURL;
@property(readonly, copy, nonatomic) NSString *footerTitle;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
