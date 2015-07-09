//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTTouchPreviewChannelDelegate.h"

@class CADisplayLink, NSMapTable, NSString, NSURL, SPTTouchDownload, SPTTouchPreviewChannel;

@interface SPTTouchAudioSample : NSObject <SPTTouchPreviewChannelDelegate>
{
    float _targetVolume;
    float _volumeVelocity;
    NSURL *_url;
    SPTTouchDownload *_download;
    unsigned long long _minimumNumberOfBytes;
    unsigned long long _preloadByteSize;
    SPTTouchPreviewChannel *_channel;
    CADisplayLink *_displayLink;
    NSMapTable *_observers;
}

@property(retain, nonatomic) NSMapTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) float volumeVelocity; // @synthesize volumeVelocity=_volumeVelocity;
@property(nonatomic) float targetVolume; // @synthesize targetVolume=_targetVolume;
@property(retain, nonatomic) SPTTouchPreviewChannel *channel; // @synthesize channel=_channel;
@property(readonly, nonatomic) unsigned long long preloadByteSize; // @synthesize preloadByteSize=_preloadByteSize;
@property(nonatomic) unsigned long long minimumNumberOfBytes; // @synthesize minimumNumberOfBytes=_minimumNumberOfBytes;
@property(readonly, nonatomic) SPTTouchDownload *download; // @synthesize download=_download;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)formulaPreviewChannel:(id)arg1 getData:(CDUnknownBlockType)arg2;
- (void)notifyDelegatesWithBlock:(CDUnknownBlockType)arg1;
- (void)updateVolume;
- (void)destroyDisplayLink;
- (void)setupDisplayLink;
- (_Bool)internalSetVolume:(float)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 on:(id)arg2;
- (void)preload;
- (void)setVolume:(float)arg1 fadeDuration:(double)arg2;
@property(nonatomic) float volume;
- (id)initWithURL:(id)arg1 download:(id)arg2 preloadByteSize:(unsigned long long)arg3 audioDriverController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

