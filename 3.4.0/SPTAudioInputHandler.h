//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface SPTAudioInputHandler : NSObject
{
    float _sampleRate;
    NSArray *_ringBuffers;
}

@property(retain, nonatomic) NSArray *ringBuffers; // @synthesize ringBuffers=_ringBuffers;
@property(nonatomic) float sampleRate; // @synthesize sampleRate=_sampleRate;
- (void).cxx_destruct;

@end
