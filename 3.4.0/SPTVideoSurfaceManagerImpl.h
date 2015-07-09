//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTVideoSurfaceContextDelegate.h"
#import "SPTVideoSurfaceManager.h"

@class FBKVOController, NSArray, NSHashTable, NSMutableSet, NSString, SPTVideoAVFactory, SPTVideoPlayerSource, SPTVideoPreferences;

@interface SPTVideoSurfaceManagerImpl : NSObject <SPTVideoSurfaceContextDelegate, SPTVideoSurfaceManager>
{
    int _surfaceIndex;
    id <SPTVideoSurfaceManagerDataSource> _dataSource;
    NSHashTable *_surfaces;
    NSMutableSet *_displayViews;
    NSMutableSet *_availableDisplayViews;
    id <SPTVideoKeyframeLoader> _keyframeLoader;
    FBKVOController *_kvoController;
    SPTVideoPreferences *_preferences;
    SPTVideoPlayerSource *_playerSource;
    SPTVideoAVFactory *_avFactory;
}

@property(retain, nonatomic) SPTVideoAVFactory *avFactory; // @synthesize avFactory=_avFactory;
@property(retain, nonatomic) SPTVideoPlayerSource *playerSource; // @synthesize playerSource=_playerSource;
@property(retain, nonatomic) SPTVideoPreferences *preferences; // @synthesize preferences=_preferences;
@property(retain, nonatomic) FBKVOController *kvoController; // @synthesize kvoController=_kvoController;
@property(retain, nonatomic) id <SPTVideoKeyframeLoader> keyframeLoader; // @synthesize keyframeLoader=_keyframeLoader;
@property(retain, nonatomic) NSMutableSet *availableDisplayViews; // @synthesize availableDisplayViews=_availableDisplayViews;
@property(retain, nonatomic) NSMutableSet *displayViews; // @synthesize displayViews=_displayViews;
@property(retain, nonatomic) NSHashTable *surfaces; // @synthesize surfaces=_surfaces;
@property(nonatomic) __weak id <SPTVideoSurfaceManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)currentTrack;
- (void)refreshDebugUI;
- (void)lazyLoadDisplayViews;
- (void)relinquishDisplayView:(id)arg1;
- (id)obtainDisplayView;
- (void)videoSurfaceAttachedStateDidChange:(id)arg1;
- (void)videoSurfaceAttachedStateWillChange:(id)arg1;
- (void)videoSurfaceSizeDidChangeWhileAttached:(id)arg1;
- (id)playerTrackForVideoSurface:(id)arg1;
@property(readonly, nonatomic) NSArray *attachedSurfaces;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
@property(readonly, nonatomic, getter=isAnySurfaceAttached) _Bool anySurfaceAttached;
- (id)createSurface;
- (void)playerChanged;
- (void)refreshSurfaces;
- (id)init;
- (id)initWithPlayerSource:(id)arg1 keyframeLoader:(id)arg2 preferences:(id)arg3 avFactory:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
