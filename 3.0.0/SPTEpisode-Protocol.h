//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString, NSURL;

@protocol SPTEpisode <NSObject>
@property(readonly, nonatomic, getter=isAvailable) BOOL available;
@property(readonly, nonatomic, getter=isPlayable) BOOL playable;
@property(readonly, nonatomic, getter=isJamMediaType) BOOL jamMediaType;
@property(readonly, nonatomic, getter=isAudioMediaType) BOOL audioMediaType;
@property(readonly, nonatomic) NSString *manifestId;
@property(readonly, nonatomic) NSURL *freezeFrameURL;
@property(readonly, nonatomic) NSURL *imageURL;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, nonatomic) double listenedDuration;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) NSDate *publicationDate;
@property(readonly, nonatomic) NSString *publisherName;
@property(readonly, nonatomic) NSURL *podcastURL;
@property(readonly, nonatomic) NSString *longDescription;
@property(readonly, nonatomic) NSString *title;
- (NSString *)localizedDate;
- (NSString *)localizedDuration;
- (NSString *)localizedTime;
@end

