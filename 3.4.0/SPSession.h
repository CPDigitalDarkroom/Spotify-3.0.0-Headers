//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AdController, NSMapTable, NSString, SPCore, SPTApplicationStateTracker, SPTLocalFileManager, SPTLogger, SPTOfflineManager, SPTPlaylistBackendManager, SPTProductState, SPTSocialManager;

@interface SPSession : NSObject
{
    struct Session *_session;
    struct RefPtr<spotify::lookup::CoreLookups> _cppCoreLookups;
    struct RefPtr<spotify::item_list::TrackListFactory> _trackListFactory;
    NSMapTable *_observers;
    struct scoped_connection _on_sync_error_connection;
    _Bool _incognitoModeEnabled;
    _Bool _isOnline;
    _Bool _isOffline;
    _Bool _isLoggedIn;
    SPTPlaylistBackendManager *_playlistBackendManager;
    SPTApplicationStateTracker *_applicationStateTracker;
    SPTProductState *_productState;
    SPTLogger *_logger;
    SPTLocalFileManager *_localFileManager;
    SPTSocialManager *_socialManager;
    SPTOfflineManager *_offlineManager;
    long long _currentLoginMode;
    AdController *_adController;
    SPCore *_core;
}

@property(nonatomic) __weak SPCore *core; // @synthesize core=_core;
@property(readonly, nonatomic) AdController *adController; // @synthesize adController=_adController;
@property(nonatomic) long long currentLoginMode; // @synthesize currentLoginMode=_currentLoginMode;
@property(retain, nonatomic) SPTOfflineManager *offlineManager; // @synthesize offlineManager=_offlineManager;
@property(retain, nonatomic) SPTSocialManager *socialManager; // @synthesize socialManager=_socialManager;
@property(nonatomic) _Bool isLoggedIn; // @synthesize isLoggedIn=_isLoggedIn;
@property(nonatomic) _Bool isOffline; // @synthesize isOffline=_isOffline;
@property(nonatomic) _Bool isOnline; // @synthesize isOnline=_isOnline;
@property(readonly, nonatomic) SPTLocalFileManager *localFileManager; // @synthesize localFileManager=_localFileManager;
@property(retain, nonatomic) SPTLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTProductState *productState; // @synthesize productState=_productState;
@property(retain, nonatomic) SPTApplicationStateTracker *applicationStateTracker; // @synthesize applicationStateTracker=_applicationStateTracker;
@property(retain, nonatomic) SPTPlaylistBackendManager *playlistBackendManager; // @synthesize playlistBackendManager=_playlistBackendManager;
@property(readonly, nonatomic, getter=isIncognitoModeEnabled) _Bool incognitoModeEnabled; // @synthesize incognitoModeEnabled=_incognitoModeEnabled;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setAudioVolume:(float)arg1 systemInitiated:(_Bool)arg2;
- (void)toggleLastFMWithUsername:(id)arg1 passwordHash:(id)arg2 useLastFM:(_Bool)arg3;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
@property(readonly, nonatomic) double incognitoModeTimeout;
@property(readonly, nonatomic) double serverTime;
@property(readonly, nonatomic) NSString *currentAP;
@property(readonly, nonatomic) NSString *currentUsername;
// Error parsing type for property trackListFactory:
// Property attributes: T^{TrackListFactory=^^?{SpRefCount=i}[63{function<base::PassRefPtr<spotify::item_list::ItemList<base::RefPtr<spotify::item_list::TrackRow>, const spotify::metadata::TrackInfo *> > (base::RefPtr<spotify::item_list::ListDescriptor>)>=^{vtable_base}(function_buffer=^v{type_t=^{type_info}BB}^?{bound_memfunc_ptr_t=^v}{obj_ref_t=^vBB}c)}]{RefPtr<spotify::lookup::ResourceLookup<spotify::uri::SpotifyLink, const spotify::metadata::TrackInfo *, spotify::lookup::TrackLookupParameters> >=^{ResourceLookup<spotify::uri::SpotifyLink, const spotify::metadata::TrackInfo *, spotify::lookup::TrackLookupParameters>}}},R,N

@property(readonly, nonatomic) struct CoreLookups *cppCoreLookups;
- (void)onErrorNotEnoughSpaceOnDevice;
- (void)processLoginModeChangedEvent:(id)arg1;
- (void)processSocialEvent:(id)arg1;
- (void)processTemporaryConnectionError:(id)arg1;
- (void)processProductStateEvent:(id)arg1;
- (void)processOfflineSyncFailed:(id)arg1;
- (void)processIncognitoModeDisabledByTimer:(id)arg1;
- (void)processIncognitoModeEvent:(id)arg1;
- (void)processAutoUpdateEvent:(id)arg1;
- (void)processEvent:(id)arg1;
- (void)scrobblingError;
- (void)disableIncognitoMode;
- (void)enableIncognitoMode;
- (void)printError:(id)arg1;
- (id)localTracksMatching:(id)arg1;
- (long long)streamingRules;
- (id)playlistForLink:(id)arg1 withAutolink:(_Bool)arg2;
- (id)trackForLink:(id)arg1;
- (id)starredForUser:(id)arg1;
- (id)localFiles;
- (id)inbox;
- (id)treeContainer;
- (id)flatContainer;
@property(readonly, nonatomic) struct Session *cpp;
- (void)acceptLicenses:(id)arg1;
- (void)unacceptedLicencesWithCallback:(CDUnknownBlockType)arg1;
- (id)unacceptedLicences;
- (void)logout;
- (void)tryReconnect:(_Bool)arg1 toAp:(id)arg2;
- (void)loginModeChanged;
- (id)userWithUsername:(id)arg1;
- (id)currentUser;
- (void)enumerateObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1 onQueue:(id)arg2;
- (void)addObserver:(id)arg1 onQueue:(id)arg2;
- (void)invalidate;
- (void)dealloc;
- (id)initWithCore:(id)arg1 session:(struct Session *)arg2;

@end
