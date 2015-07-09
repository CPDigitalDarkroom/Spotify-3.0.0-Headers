//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTPlayerIndex.h"

@interface SPTPlayerNumericIndex : SPTPlayerIndex
{
    unsigned long long _track;
    unsigned long long _page;
}

+ (id)forTrack:(unsigned long long)arg1 inPage:(unsigned long long)arg2;
+ (id)forTrack:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long page; // @synthesize page=_page;
@property(readonly, nonatomic) unsigned long long track; // @synthesize track=_track;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)serializedDictionary;
- (id)initWithDictionary:(id)arg1;
- (id)initWithTrack:(unsigned long long)arg1 inPage:(unsigned long long)arg2;

@end
