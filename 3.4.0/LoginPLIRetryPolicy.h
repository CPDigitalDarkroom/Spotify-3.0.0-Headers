//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LoginPLIRetryPolicy : NSObject
{
    long long _numberOfFailures;
    double _failureDelay;
    long long _maxFailures;
}

@property(readonly, nonatomic) long long maxFailures; // @synthesize maxFailures=_maxFailures;
@property(readonly, nonatomic) double failureDelay; // @synthesize failureDelay=_failureDelay;
@property(nonatomic) long long numberOfFailures; // @synthesize numberOfFailures=_numberOfFailures;
- (double)failureIntervalForRetryNumber:(long long)arg1;
- (double)nextRetryInterval;
- (_Bool)shouldRetry;
- (void)reportFailure;
- (void)reportSuccess;
- (void)reset;
- (id)initWithRetryDelay:(double)arg1 maxFailures:(long long)arg2;

@end
