//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTFeature.h"

@class NSString;

@protocol ProfileFeature <SPTFeature>
+ (NSString *)featureVersion;
- (long long)provideProfileABTestBitmaskValue;
- (_Bool)isArtistProfileRedirectEnabled;
- (_Bool)isRecentActivityEnabled;
- (_Bool)isFriend2FriendInvitesEnabled;
@end

