//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSURL, SPTChartEntryAlbum;

@interface SPTChartEntry : NSObject
{
    BOOL _playable;
    NSURL *_URI;
    NSString *_title;
    unsigned int _rank;
    NSString *_artistsTitle;
    unsigned int _status;
    unsigned int _currentPosition;
    unsigned int _previousPosition;
    NSArray *_artists;
    SPTChartEntryAlbum *_album;
}

@property(readonly, nonatomic) SPTChartEntryAlbum *album; // @synthesize album=_album;
@property(readonly, nonatomic) NSArray *artists; // @synthesize artists=_artists;
@property(readonly, nonatomic, getter=isPlayable) BOOL playable; // @synthesize playable=_playable;
@property(readonly, nonatomic) unsigned int previousPosition; // @synthesize previousPosition=_previousPosition;
@property(readonly, nonatomic) unsigned int currentPosition; // @synthesize currentPosition=_currentPosition;
@property(readonly, nonatomic) unsigned int status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSString *artistsTitle; // @synthesize artistsTitle=_artistsTitle;
@property(readonly, nonatomic) unsigned int rank; // @synthesize rank=_rank;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSURL *URI; // @synthesize URI=_URI;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *albumTitle;
@property(readonly, nonatomic) NSURL *albumURI;
@property(readonly, nonatomic) NSURL *albumImageURL;
@property(readonly, nonatomic) NSURL *artistURI;
- (id)initWithDictionary:(id)arg1;

@end

