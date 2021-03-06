//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SPTVideoManifestProfile : NSObject
{
    unsigned int _profileId;
    unsigned int _streamingProtocol;
    unsigned int _segmentType;
    NSString *_fileExtension;
    NSString *_videoCodec;
    NSString *_audioCodec;
    unsigned int _bitrate;
    NSString *_mimeType;
    struct CGSize _videoSize;
}

@property(readonly, nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(readonly, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(readonly, nonatomic) unsigned int bitrate; // @synthesize bitrate=_bitrate;
@property(readonly, nonatomic) NSString *audioCodec; // @synthesize audioCodec=_audioCodec;
@property(readonly, nonatomic) NSString *videoCodec; // @synthesize videoCodec=_videoCodec;
@property(readonly, nonatomic) NSString *fileExtension; // @synthesize fileExtension=_fileExtension;
@property(readonly, nonatomic) unsigned int segmentType; // @synthesize segmentType=_segmentType;
@property(readonly, nonatomic) unsigned int streamingProtocol; // @synthesize streamingProtocol=_streamingProtocol;
@property(readonly, nonatomic) unsigned int profileId; // @synthesize profileId=_profileId;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

