//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol XVRRecognizerConfiguration <NSObject>
@property(readonly) int sampleRate;
@property(readonly) NSString *inputAudioRoute;
@property(readonly) int maxSpeechDuration;
@property(readonly) int minEndingSilence;
@property(readonly) int maxInitialSilence;
@property(readonly) int maxListeningLength;
- (NSDictionary *)asDictionary;
- (id)initWithConfiguration:(NSDictionary *)arg1 sampleRate:(int)arg2;
@end
