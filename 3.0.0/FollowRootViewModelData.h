//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FollowViewModelData.h"

@class NSArray;

@interface FollowRootViewModelData : FollowViewModelData
{
    NSArray *_artists;
    NSArray *_whoToFollow;
}

@property(retain, nonatomic) NSArray *whoToFollow; // @synthesize whoToFollow=_whoToFollow;
@property(retain, nonatomic) NSArray *artists; // @synthesize artists=_artists;
- (void).cxx_destruct;
- (id)followEntitiesFromArrayWithKey:(id)arg1 inDictionary:(id)arg2;

@end
