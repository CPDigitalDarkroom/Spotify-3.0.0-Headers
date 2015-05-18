//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTArtistEntityImpl.h"

#import "SPTArtistTrack.h"

@class NSString, NSURL;

@interface SPTArtistTrackModel : SPTArtistEntityImpl <SPTArtistTrack>
{
    BOOL _ratedExplicit;
    NSURL *_uri;
    NSString *_name;
    NSString *_fileId;
    id <SPTArtistAlbum> _album;
    unsigned int _playcount;
}

@property(nonatomic) unsigned int playcount; // @synthesize playcount=_playcount;
@property(retain, nonatomic) id <SPTArtistAlbum> album; // @synthesize album=_album;
@property(retain, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSURL *uri; // @synthesize uri=_uri;
@property(nonatomic, getter=isRatedExplicit) BOOL ratedExplicit; // @synthesize ratedExplicit=_ratedExplicit;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 album:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) id <SPTArtistImage> headerImage;
@property(readonly, nonatomic) id <SPTArtistImage> image;
@property(readonly) Class superclass;

@end

