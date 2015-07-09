//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, NSString, XAAction, XAAdAudio;

@interface XAXMEvent : NSObject
{
    float dataAsFloat;
    int eventType;
    XAAction *action;
    XAAdAudio *audio;
    double dataAsDouble;
    NSError *error;
    NSArray *results;
    NSString *string;
}

+ (id)eventTypeAsString:(int)arg1;
@property(retain) NSString *string; // @synthesize string;
@property(retain) NSArray *results; // @synthesize results;
@property(readonly) int eventType; // @synthesize eventType;
@property(retain) NSError *error; // @synthesize error;
@property float dataAsFloat; // @synthesize dataAsFloat;
@property double dataAsDouble; // @synthesize dataAsDouble;
@property(retain) XAAdAudio *audio; // @synthesize audio;
@property(retain) XAAction *action; // @synthesize action;
- (void).cxx_destruct;
- (id)eventTypeAsString;
- (id)description;
- (id)initWithEventType:(int)arg1 andFloat:(float)arg2;
- (id)initWithEventType:(int)arg1 andDouble:(double)arg2;
- (id)initWithEventType:(int)arg1 andString:(id)arg2;
- (id)initWithEventType:(int)arg1 andResults:(id)arg2;
- (id)initWithEventType:(int)arg1 andError:(id)arg2;
- (id)initWithEventType:(int)arg1 andAction:(id)arg2;
- (id)initWithEventType:(int)arg1 andAdAudio:(id)arg2;
- (id)initWithEventType:(int)arg1;
- (id)init;

@end

