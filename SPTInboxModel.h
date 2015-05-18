//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPSessionObserver.h"
#import "SPTOfflineObserver.h"
#import "SPTPlayerObserver.h"

@class NSIndexPath, NSMutableDictionary, NSString, SPCore, SPKVObservation, SPPlaylistContext, SPSession, SPTOfflineManager, SPTPlaylistBackendManager, SPTask;

@interface SPTInboxModel : NSObject <SPTPlayerObserver, SPTOfflineObserver, SPSessionObserver>
{
    BOOL _loaded;
    BOOL _previousOfflineState;
    BOOL _loadHasBeenCalled;
    SPPlaylistContext *_context;
    id <SPTInboxModelDelegate> _delegate;
    SPTOfflineManager *_offlineManager;
    NSIndexPath *_activeIndexPath;
    int _numberOfUnreadRows;
    id <SPTPlayer> _player;
    id <SPContextMenuActionsFactory> _contextMenuActionsFactory;
    SPTPlaylistBackendManager *_playlistBackendManager;
    SPSession *_session;
    SPCore *_core;
    SPKVObservation *_unreadRowsObservation;
    SPKVObservation *_rowsObservation;
    SPKVObservation *_loadedObservation;
    NSMutableDictionary *_userFacebookDecoration;
    SPTask *_socialDecorationTask;
}

@property(retain, nonatomic) SPTask *socialDecorationTask; // @synthesize socialDecorationTask=_socialDecorationTask;
@property(retain, nonatomic) NSMutableDictionary *userFacebookDecoration; // @synthesize userFacebookDecoration=_userFacebookDecoration;
@property(nonatomic) BOOL loadHasBeenCalled; // @synthesize loadHasBeenCalled=_loadHasBeenCalled;
@property(nonatomic) BOOL previousOfflineState; // @synthesize previousOfflineState=_previousOfflineState;
@property(retain, nonatomic) SPKVObservation *loadedObservation; // @synthesize loadedObservation=_loadedObservation;
@property(retain, nonatomic) SPKVObservation *rowsObservation; // @synthesize rowsObservation=_rowsObservation;
@property(retain, nonatomic) SPKVObservation *unreadRowsObservation; // @synthesize unreadRowsObservation=_unreadRowsObservation;
@property(nonatomic) __weak SPCore *core; // @synthesize core=_core;
@property(nonatomic) __weak SPSession *session; // @synthesize session=_session;
@property(retain, nonatomic) SPTPlaylistBackendManager *playlistBackendManager; // @synthesize playlistBackendManager=_playlistBackendManager;
@property(retain, nonatomic) id <SPContextMenuActionsFactory> contextMenuActionsFactory; // @synthesize contextMenuActionsFactory=_contextMenuActionsFactory;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(nonatomic, getter=isLoaded) BOOL loaded; // @synthesize loaded=_loaded;
@property(nonatomic) int numberOfUnreadRows; // @synthesize numberOfUnreadRows=_numberOfUnreadRows;
@property(retain, nonatomic) NSIndexPath *activeIndexPath; // @synthesize activeIndexPath=_activeIndexPath;
@property(nonatomic) __weak SPTOfflineManager *offlineManager; // @synthesize offlineManager=_offlineManager;
@property(nonatomic) __weak id <SPTInboxModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SPPlaylistContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)sessionLoginModeChanged:(id)arg1;
- (void)offlineStateChangedForEntity:(id)arg1;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (void)contextLoadedDidChange;
- (void)loginStateChanged;
- (void)rowsDidChange;
- (void)unreadRowsCountChanged;
- (void)decorateUsernames;
- (unsigned int)offlineSyncStatusFromOfflineState:(int)arg1;
- (void)itemDidChange:(id)arg1 context:(id)arg2;
- (id)indexPathForTrackIndex:(int)arg1;
- (id)playOriginSource;
- (void)observeOfflineState;
- (BOOL)isTrackPlayable:(id)arg1;
@property(nonatomic, getter=isAvailableOffline) BOOL availableOffline;
- (void)load;
- (id)contextMenuTasksForRowAtIndexPath:(id)arg1 logContext:(id)arg2;
- (void)markRowSeen:(BOOL)arg1 atIndexPath:(id)arg2;
- (BOOL)playRowAtIndexPath:(id)arg1;
- (void)removeRowAtIndexPath:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (unsigned int)numberOfRows;
- (void)dealloc;
- (id)initWithContext:(id)arg1 player:(id)arg2 contextMenuFactory:(id)arg3 playlistBackendManager:(id)arg4 session:(id)arg5 offlineManager:(id)arg6 core:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

