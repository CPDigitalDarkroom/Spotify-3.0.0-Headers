//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTVideoPlayerMessage.h"

@class NSDictionary;

@interface SPTVideoEvent : SPTVideoPlayerMessage
{
    long long _type;
    NSDictionary *_data;
    double _start;
    double _finish;
}

@property(readonly, nonatomic) double finish; // @synthesize finish=_finish;
@property(readonly, nonatomic) double start; // @synthesize start=_start;
@property(readonly, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)serializedDictionary;
- (id)initWithEventType:(long long)arg1 data:(id)arg2 start:(double)arg3 finish:(double)arg4;

@end

