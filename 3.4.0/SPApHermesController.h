//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, SPCore, SPSession;

@interface SPApHermesController : NSObject
{
    SPSession *_session;
    SPCore *_core;
    NSMutableSet *_inFlight;
}

+ (id)apHermesControllerWithSession:(id)arg1 core:(id)arg2;
@property(retain, nonatomic) NSMutableSet *inFlight; // @synthesize inFlight=_inFlight;
@property(nonatomic) __weak SPCore *core; // @synthesize core=_core;
@property(nonatomic) __weak SPSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)noLongerInFlight:(id)arg1;
- (id)request:(id)arg1 usingMethod:(id)arg2 payload:(id)arg3 whenDone:(CDUnknownBlockType)arg4;
- (id)request:(id)arg1 usingMethod:(id)arg2 whenDone:(CDUnknownBlockType)arg3;
- (id)initWithSession:(id)arg1 core:(id)arg2;

@end
