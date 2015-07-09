//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTRadioModel.h"

@class NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSString, NSURL, SPTPlayerTrack;

@interface SPTRadioStation : SPTRadioModel
{
    _Bool _saved;
    _Bool _isLoadingTracks;
    NSString *_stationId;
    NSString *_title;
    NSURL *_titleURI;
    NSString *_subtitle;
    NSURL *_subtitleURI;
    NSURL *_imageURI;
    NSArray *_seeds;
    NSArray *_relatedArtists;
    NSString *_stationDescription;
    NSDate *_lastUpdate;
    NSMutableArray *_shuffledTracks;
    NSMutableDictionary *_trackFeedbacks;
    NSArray *_tracks;
    NSArray *_futureTraks;
    SPTPlayerTrack *_lastPlayedTrack;
    long long _lastPlayedTrackIndex;
    double _lastTrackPosition;
    long long _forcedPageLoads;
}

+ (id)sharedDispatchQueue;
+ (id)stationFromCache:(id)arg1 forKey:(id)arg2;
@property(nonatomic) long long forcedPageLoads; // @synthesize forcedPageLoads=_forcedPageLoads;
@property(nonatomic) double lastTrackPosition; // @synthesize lastTrackPosition=_lastTrackPosition;
@property(nonatomic) long long lastPlayedTrackIndex; // @synthesize lastPlayedTrackIndex=_lastPlayedTrackIndex;
@property(retain, nonatomic) SPTPlayerTrack *lastPlayedTrack; // @synthesize lastPlayedTrack=_lastPlayedTrack;
@property(nonatomic) _Bool isLoadingTracks; // @synthesize isLoadingTracks=_isLoadingTracks;
@property(retain, nonatomic) NSArray *futureTraks; // @synthesize futureTraks=_futureTraks;
@property(retain, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;
@property(retain, nonatomic) NSMutableDictionary *trackFeedbacks; // @synthesize trackFeedbacks=_trackFeedbacks;
@property(nonatomic, getter=isSaved) _Bool saved; // @synthesize saved=_saved;
@property(retain, nonatomic) NSMutableArray *shuffledTracks; // @synthesize shuffledTracks=_shuffledTracks;
@property(retain, nonatomic) NSDate *lastUpdate; // @synthesize lastUpdate=_lastUpdate;
@property(retain, nonatomic) NSString *stationDescription; // @synthesize stationDescription=_stationDescription;
@property(retain, nonatomic) NSArray *relatedArtists; // @synthesize relatedArtists=_relatedArtists;
@property(retain, nonatomic) NSArray *seeds; // @synthesize seeds=_seeds;
@property(retain, nonatomic) NSURL *imageURI; // @synthesize imageURI=_imageURI;
@property(retain, nonatomic) NSURL *subtitleURI; // @synthesize subtitleURI=_subtitleURI;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSURL *titleURI; // @synthesize titleURI=_titleURI;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *stationId; // @synthesize stationId=_stationId;
- (void).cxx_destruct;
- (void)trimTracksToLastPlayedTrack:(_Bool)arg1;
- (void)saveWithCache:(id)arg1 forKey:(id)arg2;
- (void)addTracks:(id)arg1;
- (id)identifier;
@property(readonly, nonatomic) NSURL *seed;
- (id)objectRepresentation;
- (_Bool)restoreWithObjectRepresentation:(id)arg1;
- (id)init;

@end

