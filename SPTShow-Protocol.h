//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@protocol SPTShow <NSObject>
@property(readonly, nonatomic) unsigned int mediaType;
@property(readonly, nonatomic, getter=isFollowing) BOOL following;
@property(readonly, nonatomic) NSURL *imageURL;
@property(readonly, nonatomic) NSURL *latestPlayedEpisodeURL;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, nonatomic) NSString *publisher;
@property(readonly, nonatomic) NSString *descriptionText;
@property(readonly, nonatomic) NSString *title;
@end
