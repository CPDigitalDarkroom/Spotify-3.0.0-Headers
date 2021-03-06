//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSInvocation;

@interface SPAsyncInvocationGrabber : NSObject
{
    int frameCount;
    char **frameStrings;
    _Bool backgroundAfterForward;
    _Bool onMainAfterForward;
    _Bool waitUntilDone;
    id _object;
    NSInvocation *_invocation;
    CDUnknownBlockType _afterForwardInvocation;
}

@property(copy, nonatomic) CDUnknownBlockType afterForwardInvocation; // @synthesize afterForwardInvocation=_afterForwardInvocation;
@property(retain, nonatomic) NSInvocation *invocation; // @synthesize invocation=_invocation;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property _Bool waitUntilDone; // @synthesize waitUntilDone;
@property _Bool onMainAfterForward; // @synthesize onMainAfterForward;
@property _Bool backgroundAfterForward; // @synthesize backgroundAfterForward;
- (void).cxx_destruct;
- (void)printBacktrace;
- (void)saveBacktrace;
- (void)invoke;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)runInBackground;
- (void)dealloc;
- (id)initWithObject:(id)arg1 stacktraceSaving:(_Bool)arg2;
- (id)initWithObject:(id)arg1;

@end

