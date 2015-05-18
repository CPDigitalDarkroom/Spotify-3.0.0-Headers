//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString, NSURL, SPTrack, SPTrackContext;

@interface SPContextRow : NSObject
{
    BOOL _playing;
    BOOL _isRead;
    SPTrack *_track;
    unsigned int _rowFlags;
    NSURL *_placeholderContent;
    NSDate *_addedAt;
    NSString *_addedBy;
    NSString *_inboxMessage;
    int _row;
    SPTrackContext *_context;
    NSString *_uid;
}

@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) SPTrackContext *context; // @synthesize context=_context;
@property(nonatomic) int row; // @synthesize row=_row;
@property(nonatomic) BOOL isRead; // @synthesize isRead=_isRead;
@property(retain, nonatomic) NSString *inboxMessage; // @synthesize inboxMessage=_inboxMessage;
@property(retain, nonatomic) NSString *addedBy; // @synthesize addedBy=_addedBy;
@property(retain, nonatomic) NSDate *addedAt; // @synthesize addedAt=_addedAt;
@property(retain, nonatomic) NSURL *placeholderContent; // @synthesize placeholderContent=_placeholderContent;
@property(nonatomic) unsigned int rowFlags; // @synthesize rowFlags=_rowFlags;
@property(nonatomic, getter=isPlaying) BOOL playing; // @synthesize playing=_playing;
@property(retain, nonatomic) SPTrack *track; // @synthesize track=_track;
@property(readonly, nonatomic) NSURL *trackURL;
- (void)dealloc;
- (id)initWithRow:(int)arg1 inContext:(id)arg2;

@end
