//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTObserverNotifierProxy.h"

@class NSObject<OS_dispatch_queue>;

@interface SPTObserverNotifierProxyOnQueue : SPTObserverNotifierProxy
{
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)initWithObservers:(id)arg1 protocol:(id)arg2 onQueue:(id)arg3;

@end
