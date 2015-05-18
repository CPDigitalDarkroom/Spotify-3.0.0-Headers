//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVPlayerItem, AVURLAsset, FBKVOController, NSError, NSObject<OS_dispatch_queue>, SPTHLSResourceLoaderImpl, SPTVideoLogger, SPTVideoPlayerSource, SPTVideoTrack, SPTask;

@interface SPTVideoPlaybackSession : NSObject
{
    BOOL _paused;
    BOOL _buffering;
    BOOL _seeking;
    BOOL _stalled;
    BOOL _catchingUp;
    SPTVideoTrack *_videoTrack;
    SPTVideoLogger *_logger;
    id <SPTVideoPlaybackSessionDelegate> _delegate;
    SPTHLSResourceLoaderImpl *_resourceLoader;
    NSObject<OS_dispatch_queue> *_resourceLoaderQueue;
    FBKVOController *_kvoController;
    SPTVideoPlayerSource *_playerSource;
    SPTask *_manifestTask;
    AVURLAsset *_asset;
    AVPlayerItem *_playerItem;
    NSError *_error;
    double _initialOffset;
    double _lastSeekTime;
}

@property(nonatomic) double lastSeekTime; // @synthesize lastSeekTime=_lastSeekTime;
@property(nonatomic) BOOL catchingUp; // @synthesize catchingUp=_catchingUp;
@property(nonatomic) BOOL stalled; // @synthesize stalled=_stalled;
@property(nonatomic) BOOL seeking; // @synthesize seeking=_seeking;
@property(nonatomic) BOOL buffering; // @synthesize buffering=_buffering;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) double initialOffset; // @synthesize initialOffset=_initialOffset;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) AVURLAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) SPTask *manifestTask; // @synthesize manifestTask=_manifestTask;
@property(retain, nonatomic) SPTVideoPlayerSource *playerSource; // @synthesize playerSource=_playerSource;
@property(retain, nonatomic) FBKVOController *kvoController; // @synthesize kvoController=_kvoController;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *resourceLoaderQueue; // @synthesize resourceLoaderQueue=_resourceLoaderQueue;
@property(retain, nonatomic) SPTHLSResourceLoaderImpl *resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property(nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property(nonatomic) __weak id <SPTVideoPlaybackSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SPTVideoLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTVideoTrack *videoTrack; // @synthesize videoTrack=_videoTrack;
- (void).cxx_destruct;
- (id)makeError:(int)arg1 message:(id)arg2;
- (void)playerItemDidStall:(id)arg1;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)sendStateUpdate;
- (void)kvo_itemBufferEmptyChanged:(id)arg1 object:(id)arg2;
- (void)kvo_itemLikelyToKeepUpChanged:(id)arg1 object:(id)arg2;
- (void)kvo_playerItemStatusChanged:(id)arg1 object:(id)arg2;
- (void)assetFailedToPrepareForPlayback:(id)arg1;
- (void)refreshAVStack;
- (void)prepareAssetWithKeys:(id)arg1;
- (void)prepareAsset;
- (id)player;
- (double)duration;
- (double)currentTime;
- (void)seekTo:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unloadSession;
- (void)loadSession;
- (void)dealloc;
- (id)init;
- (id)initWithVideoTrack:(id)arg1 initialOffset:(double)arg2 startPaused:(BOOL)arg3 resourceLoader:(id)arg4 logger:(id)arg5 playerSource:(id)arg6;

@end

