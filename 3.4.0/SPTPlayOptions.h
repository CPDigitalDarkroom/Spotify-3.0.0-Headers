//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSNumber, SPTPlayerIndex, SPTPlayerOptionOverrides, SPTPlayerSuppressions;

@interface SPTPlayOptions : NSObject <NSCopying>
{
    _Bool _initiallyPaused;
    SPTPlayerIndex *_skipToIndex;
    NSNumber *_seekTo;
    SPTPlayerOptionOverrides *_playerOptionsOverride;
    SPTPlayerSuppressions *_suppressions;
}

@property(copy, nonatomic) SPTPlayerSuppressions *suppressions; // @synthesize suppressions=_suppressions;
@property(copy, nonatomic) SPTPlayerOptionOverrides *playerOptionsOverride; // @synthesize playerOptionsOverride=_playerOptionsOverride;
@property(nonatomic) _Bool initiallyPaused; // @synthesize initiallyPaused=_initiallyPaused;
@property(copy, nonatomic) NSNumber *seekTo; // @synthesize seekTo=_seekTo;
@property(copy, nonatomic) SPTPlayerIndex *skipToIndex; // @synthesize skipToIndex=_skipToIndex;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializedDictionary;
- (id)init;

@end

