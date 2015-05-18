//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface GADContentQueue : NSObject
{
    NSMutableDictionary *_contents;
    NSMutableArray *_sequenceNumbers;
    unsigned int _size;
}

- (void).cxx_destruct;
- (void)enqueueContent:(id)arg1;
- (void)deduplicate:(id)arg1;
- (id)contentWithSequenceNumber:(unsigned int)arg1;
- (id)contentWithHighestScore;
- (id)initWithQueueSize:(unsigned int)arg1;

@end

