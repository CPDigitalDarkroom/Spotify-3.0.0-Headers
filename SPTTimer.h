//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSTimer;

@interface SPTTimer : NSObject
{
    id <SPTTimerDelegate> _delegate;
    NSTimer *_scheduledTimer;
    NSTimer *_countDownTimer;
    NSDate *_endDate;
}

@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSTimer *countDownTimer; // @synthesize countDownTimer=_countDownTimer;
@property(retain, nonatomic) NSTimer *scheduledTimer; // @synthesize scheduledTimer=_scheduledTimer;
@property(nonatomic) __weak id <SPTTimerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reportTimeRemaining;
- (void)scheduledTimerEnded;
- (double)timeRemaining;
- (void)cancelTimer;
- (void)setTimer:(double)arg1;
- (id)init;

@end

