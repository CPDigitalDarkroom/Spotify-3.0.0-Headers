//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, SPTWidevineService;

@interface SPTVideoTransmuxer : NSObject
{
    SPTWidevineService *_widevineService;
    NSObject<OS_dispatch_queue> *_bgQueue;
}

- (void).cxx_destruct;
- (id)transmuxSegmentMP4:(id)arg1 initData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithWidevineService:(id)arg1;

@end

