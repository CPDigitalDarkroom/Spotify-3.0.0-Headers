//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SPTMetadataInfo : NSObject
{
    NSString *_title;
    NSString *_artist;
    NSString *_albumArtist;
    NSString *_album;
    NSString *_composer;
    unsigned int _trackNumber;
    unsigned int _trackCount;
    unsigned int _discNumber;
    unsigned int _discCount;
    NSString *_year;
    NSString *_genre;
    double _length;
    struct MetadataInfo _metadataInfo;
}

+ (id)metadataInfoWithTitle:(id)arg1 artist:(id)arg2 albumArtist:(id)arg3 album:(id)arg4 composer:(id)arg5 trackNumber:(unsigned int)arg6 trackCount:(unsigned int)arg7 discNumber:(unsigned int)arg8 discCount:(unsigned int)arg9 year:(id)arg10 genre:(id)arg11 length:(double)arg12;
@property(nonatomic) struct MetadataInfo metadataInfo; // @synthesize metadataInfo=_metadataInfo;
@property(readonly, nonatomic) double length; // @synthesize length=_length;
@property(readonly, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property(readonly, nonatomic) NSString *year; // @synthesize year=_year;
@property(readonly, nonatomic) unsigned int discCount; // @synthesize discCount=_discCount;
@property(readonly, nonatomic) unsigned int discNumber; // @synthesize discNumber=_discNumber;
@property(readonly, nonatomic) unsigned int trackCount; // @synthesize trackCount=_trackCount;
@property(readonly, nonatomic) unsigned int trackNumber; // @synthesize trackNumber=_trackNumber;
@property(readonly, nonatomic) NSString *composer; // @synthesize composer=_composer;
@property(readonly, nonatomic) NSString *album; // @synthesize album=_album;
@property(readonly, nonatomic) NSString *albumArtist; // @synthesize albumArtist=_albumArtist;
@property(readonly, nonatomic) NSString *artist; // @synthesize artist=_artist;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 artist:(id)arg2 albumArtist:(id)arg3 album:(id)arg4 composer:(id)arg5 trackNumber:(unsigned int)arg6 trackCount:(unsigned int)arg7 discNumber:(unsigned int)arg8 discCount:(unsigned int)arg9 year:(id)arg10 genre:(id)arg11 length:(double)arg12;

@end

