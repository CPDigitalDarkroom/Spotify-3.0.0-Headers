//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SPTNowPlayingPlaybackRoute : NSObject
{
    unsigned int _type;
    unsigned int _state;
    NSString *_deviceName;
}

+ (id)routeOfType:(unsigned int)arg1;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *name;
- (id)initWithType:(unsigned int)arg1;

@end

