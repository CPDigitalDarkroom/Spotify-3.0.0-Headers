//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTLogCenterProtocol.h"

@class NSMutableArray, NSString;

@interface SPTLogCenter : NSObject <SPTLogCenterProtocol>
{
    NSString *_anonymousToken;
    NSMutableArray *_messages;
    id <SPTLogger> _logger;
}

+ (id)defaultCenter;
@property(retain, nonatomic) id <SPTLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) NSMutableArray *messages; // @synthesize messages=_messages;
@property(retain, nonatomic) NSString *anonymousToken; // @synthesize anonymousToken=_anonymousToken;
- (void).cxx_destruct;
- (void)logAppStartupWithStepName:(id)arg1 isFirst:(_Bool)arg2 timeSinceStart:(double)arg3;
- (void)logAppStartupWithStepName:(id)arg1;
- (void)logClientEventWithSource:(id)arg1 context:(id)arg2 eventName:(id)arg3 eventVersion:(id)arg4 testVersion:(id)arg5 data:(id)arg6;
- (void)logAbnormalExitWithUUID:(id)arg1 timestamp:(long long)arg2;
- (void)logBrowseLink:(id)arg1 source:(id)arg2;
- (void)sendMessage:(id)arg1;
- (id)init;
- (void)setup:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

