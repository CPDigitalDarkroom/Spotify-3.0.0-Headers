//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface SPTPlayerOptions : NSObject <NSCopying>
{
    BOOL _shufflingContext;
    BOOL _repeatingContext;
    BOOL _repeatingTrack;
}

@property(nonatomic) BOOL repeatingTrack; // @synthesize repeatingTrack=_repeatingTrack;
@property(nonatomic) BOOL repeatingContext; // @synthesize repeatingContext=_repeatingContext;
@property(nonatomic) BOOL shufflingContext; // @synthesize shufflingContext=_shufflingContext;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializedDictionary;
- (id)initWithDictionary:(id)arg1;

@end

