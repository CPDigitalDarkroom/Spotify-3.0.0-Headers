//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTPartyGenre;

@interface SPTPartyParameters : NSObject
{
    SPTPartyGenre *_genre;
    int _energyLevel;
}

@property(nonatomic) int energyLevel; // @synthesize energyLevel=_energyLevel;
@property(retain, nonatomic) SPTPartyGenre *genre; // @synthesize genre=_genre;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)urlParameters;
- (id)initWithGenre:(id)arg1 energyLevel:(int)arg2;

@end
