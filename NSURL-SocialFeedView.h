//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

@class NSString;

@interface NSURL (SocialFeedView)
+ (id)spt_SocialFeedViewURLForReactionsFromStoryID:(id)arg1 withTransport:(int)arg2;
+ (id)spt_SocialFeedViewURLForUserTimeline:(id)arg1 withTransport:(int)arg2;
+ (id)spt_SocialFeedViewURLForStoriesNewerThanStoryID:(id)arg1 withTransport:(int)arg2;
+ (id)spt_SocialFeedViewURLForPath:(id)arg1 withTransport:(int)arg2;
+ (id)spt_SocialFeedViewURLForUnreadCountSinceStoryID:(id)arg1 withTransport:(int)arg2;
@property(readonly, nonatomic, getter=spt_storyID) NSString *storyID;
@end

