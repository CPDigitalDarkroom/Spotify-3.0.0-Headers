//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTPlayerObserver.h"

@class NSString, NSTimer, SPPlaylist, SPSession, SPTEntityCancelationToken, SPTEntityService, SPTExternalPlaybackStatus;

@interface SPTExternalPlaybackControl : NSObject <SPTPlayerObserver>
{
    id <SPTPlayer> _player;
    SPTExternalPlaybackStatus *_currentPlaybackStatus;
    id <SPRadioManager> _radio;
    id <CollectionFeature> _collection;
    SPPlaylist *_starredPlaylist;
    SPSession *_session;
    NSTimer *_seekTimer;
    unsigned int _seekDirection;
    SPTEntityCancelationToken *_artistTask;
    SPTEntityCancelationToken *_albumTask;
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    SPTEntityService *_entityService;
}

@property(retain, nonatomic) SPTEntityService *entityService; // @synthesize entityService=_entityService;
@property(retain, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(retain, nonatomic) SPTEntityCancelationToken *albumTask; // @synthesize albumTask=_albumTask;
@property(retain, nonatomic) SPTEntityCancelationToken *artistTask; // @synthesize artistTask=_artistTask;
@property(nonatomic) unsigned int seekDirection; // @synthesize seekDirection=_seekDirection;
@property(retain, nonatomic) NSTimer *seekTimer; // @synthesize seekTimer=_seekTimer;
@property(nonatomic) __weak SPSession *session; // @synthesize session=_session;
@property(retain, nonatomic) SPPlaylist *starredPlaylist; // @synthesize starredPlaylist=_starredPlaylist;
@property(retain, nonatomic) id <CollectionFeature> collection; // @synthesize collection=_collection;
@property(retain, nonatomic) id <SPRadioManager> radio; // @synthesize radio=_radio;
@property(retain, nonatomic) SPTExternalPlaybackStatus *currentPlaybackStatus; // @synthesize currentPlaybackStatus=_currentPlaybackStatus;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
- (void).cxx_destruct;
- (BOOL)stateEqualIgnoringPosition:(id)arg1 toState:(id)arg2;
- (void)player:(id)arg1 stateDidChange:(id)arg2 force:(BOOL)arg3;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
@property(readonly, nonatomic, getter=isYourLibraryFeatureEnabled) BOOL yourLibraryFeatureEnabled;
- (void)setSaved:(BOOL)arg1;
- (void)applySeek:(id)arg1;
- (void)stopSeeking;
- (void)beginSeekingInDirection:(unsigned int)arg1;
- (void)thumb:(BOOL)arg1;
- (void)thumbDown;
- (void)thumbUp;
- (void)setTrackRepeated:(BOOL)arg1;
- (void)setRepeated:(BOOL)arg1;
- (void)setShuffled:(BOOL)arg1;
- (void)setPaused:(BOOL)arg1;
- (void)performSkipNextCommand;
- (void)performSkipPreviousCommand;
- (void)fetchRelatedAlbumsFromCurrentTrack:(CDUnknownBlockType)arg1;
- (void)startRadioFromCurrentTrack;
- (void)playIndex:(unsigned int)arg1 ofPlayerContext:(id)arg2 shufflePlay:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)playIndex:(unsigned int)arg1 ofItemWithIdentifier:(id)arg2 shufflePlay:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)playIndex:(unsigned int)arg1 ofItem:(id)arg2 shufflePlay:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)playIndex:(unsigned int)arg1 ofItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithRadioFeature:(id)arg1 collectionFeature:(id)arg2 player:(id)arg3 session:(id)arg4 imageLoaderFactory:(id)arg5 entityService:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

