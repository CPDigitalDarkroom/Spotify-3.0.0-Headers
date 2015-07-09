//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, NSRecursiveLock;

@interface SPTPlayerSubscription : NSObject
{
    id <SPTResolver> _resolver;
    NSHashTable *_observers;
    id _lastState;
    NSRecursiveLock *_observersLock;
    CDUnknownBlockType _endpointSuffixGetter;
}

+ (id)stateRequestWithEndpointSuffix:(id)arg1;
+ (id)requestHeaders;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)gotStateUpdate:(id)arg1;
- (void)makeObservationRequest;
- (void)accessObservers:(CDUnknownBlockType)arg1;
- (id)initWithResolver:(id)arg1 endpointSuffixGetter:(CDUnknownBlockType)arg2;

@end

