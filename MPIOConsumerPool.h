//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface MPIOConsumerPool : NSObject
{
    unsigned int _poolSize;
    NSMutableArray *_bufferedConsumers;
}

- (void).cxx_destruct;
- (void)returnConsumer:(id)arg1;
- (id)consumerWithScanner:(CDUnknownBlockType)arg1 handler:(CDUnknownBlockType)arg2 bytesNeeded:(unsigned long)arg3 readToCurrentFrame:(BOOL)arg4 unmaskBytes:(BOOL)arg5;
- (id)init;
- (id)initWithBufferCapacity:(unsigned int)arg1;

@end

