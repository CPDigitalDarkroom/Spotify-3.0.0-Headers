//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageOutdatedInternalBuild1 : SPTLogMessage
{
    NSString *_severityValue;
    long long _daysOldValue;
    long long _daysRemainingValue;
}

+ (id)messageWithSeverity:(id)arg1 daysOld:(long long)arg2 daysRemaining:(long long)arg3;
@property(nonatomic) long long daysRemainingValue; // @synthesize daysRemainingValue=_daysRemainingValue;
@property(nonatomic) long long daysOldValue; // @synthesize daysOldValue=_daysOldValue;
@property(retain, nonatomic) NSString *severityValue; // @synthesize severityValue=_severityValue;
- (void).cxx_destruct;
- (id)serialize;

@end

