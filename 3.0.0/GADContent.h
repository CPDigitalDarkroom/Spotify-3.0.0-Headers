//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADBinaryHeap, NSString;

@interface GADContent : NSObject
{
    int _contentAgeWeight;
    int _contentLengthWeight;
    unsigned int _contentTotalLength;
    GADBinaryHeap *_heap;
    unsigned int _maximumShingleCount;
    unsigned int _minimumParagraphLength;
    unsigned int _shingleLength;
    NSString *_fingerprint;
    int _score;
    unsigned int _sequenceNumber;
}

@property(readonly, nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(readonly, nonatomic) int score; // @synthesize score=_score;
@property(readonly, nonatomic) NSString *fingerprint; // @synthesize fingerprint=_fingerprint;
- (void).cxx_destruct;
- (id)shingleHash;
- (void)updateHeapWithHash:(unsigned long long)arg1 shingle:(id)arg2;
- (void)selectShinglesFromTokens:(id)arg1;
- (void)updateContentWithText:(id)arg1;
- (void)deductServedPenalty;
- (id)initWithSequenceNumber:(unsigned int)arg1;

@end
