//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@interface FollowData : NSObject
{
    BOOL _isFollowing;
    NSURL *_targetURI;
    int _followersCount;
    int _followingCount;
}

+ (id)firstValidStringFromJsonDict:(id)arg1 withKeypaths:(id)arg2;
@property(readonly, nonatomic) int followingCount; // @synthesize followingCount=_followingCount;
@property(readonly, nonatomic) int followersCount; // @synthesize followersCount=_followersCount;
@property(readonly, nonatomic) BOOL isFollowing; // @synthesize isFollowing=_isFollowing;
@property(readonly, nonatomic) NSURL *targetURI; // @synthesize targetURI=_targetURI;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithURI:(id)arg1 followingState:(BOOL)arg2 followerCount:(unsigned int)arg3 followingCount:(unsigned int)arg4;
- (id)initWithDictionary:(id)arg1;

@end
