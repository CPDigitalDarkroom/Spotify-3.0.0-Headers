//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTTouchAudioSampleObserver.h"
#import "SPTTouchViewEffect.h"

@class NSArray, NSMapTable, NSString, SPTTouchViewBackgroundColorManager;

@interface SPTTouchViewBackgroundEffect : NSObject <SPTTouchViewEffect, SPTTouchAudioSampleObserver>
{
    _Bool _ending;
    _Bool _starting;
    SPTTouchViewBackgroundColorManager *_backgroundColorManager;
    NSMapTable *_sampleToNodeMap;
    NSArray *_preloadedSamples;
}

@property(retain, nonatomic) NSArray *preloadedSamples; // @synthesize preloadedSamples=_preloadedSamples;
@property(nonatomic) _Bool starting; // @synthesize starting=_starting;
@property(nonatomic) _Bool ending; // @synthesize ending=_ending;
@property(retain, nonatomic) NSMapTable *sampleToNodeMap; // @synthesize sampleToNodeMap=_sampleToNodeMap;
@property(readonly, nonatomic) SPTTouchViewBackgroundColorManager *backgroundColorManager; // @synthesize backgroundColorManager=_backgroundColorManager;
- (void).cxx_destruct;
- (void)viewEngine:(id)arg1 didEndInteractionAtPosition:(struct CGPoint)arg2 nodes:(id)arg3;
- (void)viewEngine:(id)arg1 didMoveInteractionToPosition:(struct CGPoint)arg2 nodes:(id)arg3;
- (void)viewEngine:(id)arg1 didBeginInteractionAtPosition:(struct CGPoint)arg2 nodes:(id)arg3;
- (void)viewEngine:(id)arg1 unregisterNode:(id)arg2;
- (void)viewEngine:(id)arg1 didCancelInteractionAtPosition:(struct CGPoint)arg2 nodes:(id)arg3;
- (void)viewEngine:(id)arg1 willBeginInteractionAtPosition:(struct CGPoint)arg2 nodes:(id)arg3;
- (_Bool)viewEngine:(id)arg1 canBeginInteractionAtPosition:(struct CGPoint)arg2 nodes:(id)arg3;
- (unsigned long long)maximumNumberOfPreviews;
- (void)audioSampleDidChangeVolume:(id)arg1;
- (void)resetNode:(id)arg1;
- (void)revertBackgroundColorForSample:(id)arg1;
- (void)setBackgroundColorForSample:(id)arg1 volume:(double)arg2 animated:(_Bool)arg3;
- (void)updateNodes:(id)arg1 position:(struct CGPoint)arg2 viewEngine:(id)arg3 shouldInitializeNodes:(_Bool)arg4;
- (float)volumeForNode:(id)arg1 position:(struct CGPoint)arg2;
- (id)effectInfoForNode:(id)arg1;
- (id)initWithBackgroundColor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

