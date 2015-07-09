//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMapTable, NSString, NSURL;

@interface SPTPlaylist : NSObject
{
    struct shared_ptr<spotify::playlist::objc::SPTPlaylistHolder> _playlist_holder;
    _Bool _collaborative;
    _Bool _isWriteable;
    _Bool _isOwnedBySelf;
    NSString *_name;
    NSString *_customDescription;
    NSURL *_url;
    NSArray *_tracks;
    NSString *_owner;
    NSString *_picture;
    NSMapTable *_observers;
    id <SPTPlaylistLoadedHandler> _loadedHandler;
    long long _revisionCount;
}

@property(readonly, nonatomic) long long revisionCount; // @synthesize revisionCount=_revisionCount;
@property(readonly, nonatomic) __weak id <SPTPlaylistLoadedHandler> loadedHandler; // @synthesize loadedHandler=_loadedHandler;
@property(retain, nonatomic) NSMapTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) NSString *picture; // @synthesize picture=_picture;
@property(readonly, nonatomic) NSString *owner; // @synthesize owner=_owner;
@property(readonly, nonatomic) _Bool isOwnedBySelf; // @synthesize isOwnedBySelf=_isOwnedBySelf;
@property(readonly, nonatomic) _Bool isWriteable; // @synthesize isWriteable=_isWriteable;
@property(readonly, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic, getter=isCollaborative) _Bool collaborative; // @synthesize collaborative=_collaborative;
@property(copy, nonatomic) NSString *customDescription; // @synthesize customDescription=_customDescription;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initOnCoreThreadWithPlaylist:(PassRefPtr_7313267a)arg1 withLoadedHandler:(id)arg2;
- (id)buildTrackArrayOnCoreThreadFromPlaylist:(struct Playlist *)arg1;
- (void)notifyObservers;
- (void)enumerateObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)notifyLoadedHandlerOnCoreThread;
- (void)triggerUpdate;
- (void)removeTrackAtIndex:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)appendTracks:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addTracks:(id)arg1 atIndex:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addTrack:(id)arg1 atIndex:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeObserver:(id)arg1 onQueue:(id)arg2;
- (void)addObserver:(id)arg1 onQueue:(id)arg2;
@property(readonly, nonatomic) struct Playlist *playlist;

@end

