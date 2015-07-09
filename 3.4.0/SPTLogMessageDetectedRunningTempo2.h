//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSData, NSString;

@interface SPTLogMessageDetectedRunningTempo2 : SPTLogMessage
{
    long long _msSinceEpochValue;
    NSData *_playbackIdValue;
    double _detectedTempoValue;
    NSString *_runningIdValue;
}

+ (id)messageWithMsSinceEpoch:(long long)arg1 playbackId:(id)arg2 detectedTempo:(double)arg3 runningId:(id)arg4;
@property(retain, nonatomic) NSString *runningIdValue; // @synthesize runningIdValue=_runningIdValue;
@property(nonatomic) double detectedTempoValue; // @synthesize detectedTempoValue=_detectedTempoValue;
@property(retain, nonatomic) NSData *playbackIdValue; // @synthesize playbackIdValue=_playbackIdValue;
@property(nonatomic) long long msSinceEpochValue; // @synthesize msSinceEpochValue=_msSinceEpochValue;
- (void).cxx_destruct;

@end

