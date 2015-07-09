//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SWGObject.h"

@class NSNumber, SWGSpeechStartThreshold;

@interface SWGXVRSpeechConfig : SWGObject
{
    SWGSpeechStartThreshold *_speechStartThreshold;
    NSNumber *_confidenceThreshold;
    NSNumber *_maxInitialSilence;
    NSNumber *_maxServerResponseTimeout;
    NSNumber *_endingSilence;
    NSNumber *_maxSpeechDuration;
    NSNumber *_sppechAcceptanceThreshold;
}

@property(retain, nonatomic) NSNumber *sppechAcceptanceThreshold; // @synthesize sppechAcceptanceThreshold=_sppechAcceptanceThreshold;
@property(retain, nonatomic) NSNumber *maxSpeechDuration; // @synthesize maxSpeechDuration=_maxSpeechDuration;
@property(retain, nonatomic) NSNumber *endingSilence; // @synthesize endingSilence=_endingSilence;
@property(retain, nonatomic) NSNumber *maxServerResponseTimeout; // @synthesize maxServerResponseTimeout=_maxServerResponseTimeout;
@property(retain, nonatomic) NSNumber *maxInitialSilence; // @synthesize maxInitialSilence=_maxInitialSilence;
@property(retain, nonatomic) NSNumber *confidenceThreshold; // @synthesize confidenceThreshold=_confidenceThreshold;
@property(retain, nonatomic) SWGSpeechStartThreshold *speechStartThreshold; // @synthesize speechStartThreshold=_speechStartThreshold;
- (void).cxx_destruct;
- (id)asDictionary;
- (id)initWithValues:(id)arg1;
- (id)speechStartThreshold:(id)arg1 confidenceThreshold:(id)arg2 maxInitialSilence:(id)arg3 maxServerResponseTimeout:(id)arg4 endingSilence:(id)arg5 maxSpeechDuration:(id)arg6 sppechAcceptanceThreshold:(id)arg7;

@end
