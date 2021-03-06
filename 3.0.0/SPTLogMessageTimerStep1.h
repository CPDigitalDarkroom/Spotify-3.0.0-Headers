//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageTimerStep1 : SPTLogMessage
{
    BOOL _isFirstValue;
    BOOL _isLastValue;
    NSString *_timerNameValue;
    NSString *_subdivisionValue;
    NSString *_timerStepNameValue;
    NSString *_sequenceIdValue;
    long long _msSinceEpochValue;
}

+ (id)messageWithTimerName:(id)arg1 subdivision:(id)arg2 isFirst:(BOOL)arg3 isLast:(BOOL)arg4 timerStepName:(id)arg5 msSinceEpoch:(long long)arg6 sequenceId:(id)arg7;
@property(retain, nonatomic) NSString *sequenceIdValue; // @synthesize sequenceIdValue=_sequenceIdValue;
@property(nonatomic) long long msSinceEpochValue; // @synthesize msSinceEpochValue=_msSinceEpochValue;
@property(retain, nonatomic) NSString *timerStepNameValue; // @synthesize timerStepNameValue=_timerStepNameValue;
@property(nonatomic) BOOL isLastValue; // @synthesize isLastValue=_isLastValue;
@property(nonatomic) BOOL isFirstValue; // @synthesize isFirstValue=_isFirstValue;
@property(retain, nonatomic) NSString *subdivisionValue; // @synthesize subdivisionValue=_subdivisionValue;
@property(retain, nonatomic) NSString *timerNameValue; // @synthesize timerNameValue=_timerNameValue;
- (void).cxx_destruct;
- (id)serialize;

@end

