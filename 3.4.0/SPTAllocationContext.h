//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SPTAllocationContext : NSObject
{
}

+ (void)setDefaultLogHandler:(CDUnknownBlockType)arg1;
+ (id)currentContext;
@property(copy) CDUnknownBlockType logHandler;
- (void)setIdentifier:(id)arg1;
@property(readonly, copy) NSString *identifier;
- (void)assertEmpty;
- (void)forgetAllObjects;
- (void)exit;
- (void)enter;
- (id)init;
- (id)initWithIdentifier:(id)arg1;

@end

