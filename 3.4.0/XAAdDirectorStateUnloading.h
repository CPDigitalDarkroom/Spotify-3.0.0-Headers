//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XAAdDirectorState.h"

@class NSError;

@interface XAAdDirectorStateUnloading : XAAdDirectorState
{
    _Bool recognizerDestroyed;
    _Bool tornDown;
    NSError *adCompletionError;
}

@property(nonatomic) _Bool tornDown; // @synthesize tornDown;
@property(nonatomic) _Bool recognizerDestroyed; // @synthesize recognizerDestroyed;
@property(retain, nonatomic) NSError *adCompletionError; // @synthesize adCompletionError;
- (void).cxx_destruct;
- (void)handleEvent:(id)arg1;
- (_Bool)adPlaying;
- (_Bool)adPresented;
- (void)handleCancelAdvertisement;
- (void)handlePauseAdvertisement;
- (void)handleResumeAdvertisement;
- (void)handlePlayAdvertisement:(id)arg1;
- (void)dismissAd;
- (void)runState;
- (void)tearDownState;

@end
