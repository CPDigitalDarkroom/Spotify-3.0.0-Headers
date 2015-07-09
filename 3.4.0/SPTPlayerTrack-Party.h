//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTPlayerTrack.h"

@class NSString, NSURL, SPTImageLoaderRequest, UIImage;

@interface SPTPlayerTrack (Party)
+ (id)playerTrackWithPartyDictionary:(id)arg1;
@property(retain, nonatomic) SPTImageLoaderRequest *imageLoaderRequest;
@property(retain, nonatomic) UIImage *image;
@property(readonly, nonatomic) _Bool isPlayable;
@property(readonly, nonatomic) NSURL *imageURL;
@property(readonly, nonatomic) unsigned long long fadeOutStartTime;
@property(nonatomic) unsigned long long fadeInStartTime;
@property(readonly, nonatomic) unsigned long long fadeOutDuration;
@property(readonly, nonatomic) unsigned long long fadeInDuration;
@property(readonly, nonatomic) NSString *albumName;
@property(readonly, nonatomic) NSString *artistName;
@property(readonly, nonatomic) NSString *trackName;
@end
