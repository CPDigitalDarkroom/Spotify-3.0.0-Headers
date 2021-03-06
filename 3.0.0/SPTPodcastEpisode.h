//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "SPTEpisode.h"

@class NSDate, NSString, NSURL;

@interface SPTPodcastEpisode : NSObject <SPTEpisode, NSCopying>
{
    BOOL _inCollection;
    BOOL _newEpisode;
    BOOL _unplayedEpisode;
    BOOL _playable;
    BOOL _available;
    NSString *_title;
    NSString *_longDescription;
    NSString *_podcastTitle;
    NSURL *_podcastURL;
    NSString *_publisherName;
    NSDate *_publicationDate;
    NSURL *_URL;
    unsigned int _offlineSyncStatus;
    unsigned int _syncProgress;
    NSURL *_imageURL;
    NSURL *_freezeFrameURL;
    NSString *_manifestId;
    double _duration;
    double _listenedDuration;
}

+ (id)podcastEpisodeWithDictionary:(id)arg1 podcast:(id)arg2;
@property(nonatomic, getter=isAvailable) BOOL available; // @synthesize available=_available;
@property(nonatomic, getter=isPlayable) BOOL playable; // @synthesize playable=_playable;
@property(retain, nonatomic) NSString *manifestId; // @synthesize manifestId=_manifestId;
@property(retain, nonatomic) NSURL *freezeFrameURL; // @synthesize freezeFrameURL=_freezeFrameURL;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(nonatomic) double listenedDuration; // @synthesize listenedDuration=_listenedDuration;
@property(nonatomic) unsigned int syncProgress; // @synthesize syncProgress=_syncProgress;
@property(nonatomic) unsigned int offlineSyncStatus; // @synthesize offlineSyncStatus=_offlineSyncStatus;
@property(nonatomic, getter=isUnplayed) BOOL unplayedEpisode; // @synthesize unplayedEpisode=_unplayedEpisode;
@property(nonatomic, getter=isNewEpisode) BOOL newEpisode; // @synthesize newEpisode=_newEpisode;
@property(nonatomic) BOOL inCollection; // @synthesize inCollection=_inCollection;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSDate *publicationDate; // @synthesize publicationDate=_publicationDate;
@property(retain, nonatomic) NSString *publisherName; // @synthesize publisherName=_publisherName;
@property(retain, nonatomic) NSURL *podcastURL; // @synthesize podcastURL=_podcastURL;
@property(retain, nonatomic) NSString *podcastTitle; // @synthesize podcastTitle=_podcastTitle;
@property(retain, nonatomic) NSString *longDescription; // @synthesize longDescription=_longDescription;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic, getter=isAudioMediaType) BOOL audioMediaType;
@property(readonly, nonatomic, getter=isJamMediaType) BOOL jamMediaType;
- (id)localizedDate;
- (id)localizedTime;
- (id)localizedDuration;
- (id)stringFromTimeInterval:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

