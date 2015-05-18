//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTRadioModel.h"

@class NSString, NSURL;

@interface SPTRadioTrack : SPTRadioModel
{
    NSURL *_URI;
    NSString *_title;
    NSString *_artistName;
    NSURL *_artistURI;
    NSString *_albumName;
    NSURL *_albumURI;
    NSURL *_imageURI;
    int _thumbFeedback;
    NSString *_uid;
}

@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(nonatomic) int thumbFeedback; // @synthesize thumbFeedback=_thumbFeedback;
@property(retain, nonatomic) NSURL *imageURI; // @synthesize imageURI=_imageURI;
@property(retain, nonatomic) NSURL *albumURI; // @synthesize albumURI=_albumURI;
@property(retain, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(retain, nonatomic) NSURL *artistURI; // @synthesize artistURI=_artistURI;
@property(retain, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSURL *URI; // @synthesize URI=_URI;
- (void).cxx_destruct;
- (id)createPlayerTrack;
- (id)objectRepresentation;
- (BOOL)restoreWithObjectRepresentation:(id)arg1;

@end

