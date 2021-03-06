//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPLifetimeGlue : NSObject
{
    struct __CFArray *_observeds;
    CDUnknownBlockType _objectDied;
}

+ (id)watchLifetimes:(id)arg1 callback:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType objectDied; // @synthesize objectDied=_objectDied;
- (id)description;
- (void)invalidate;
- (void)addSelfAsDeallocListenerTo:(id)arg1;
- (void)preDealloc:(id)arg1;
- (void)dealloc;
- (id)initWatchingLifetimesOfObjects:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end

