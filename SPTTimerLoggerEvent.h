//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SPTTimerLoggerEvent : NSObject
{
    NSString *_timerName;
    NSString *_sequenceID;
}

@property(readonly, copy, nonatomic) NSString *sequenceID; // @synthesize sequenceID=_sequenceID;
@property(readonly, copy, nonatomic) NSString *timerName; // @synthesize timerName=_timerName;
- (void).cxx_destruct;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToEvent:(id)arg1;
- (id)initWithTimerName:(id)arg1 sequenceID:(id)arg2;

@end
