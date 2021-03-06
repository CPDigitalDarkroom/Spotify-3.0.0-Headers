//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPSession;

@interface SPTStartPageEntityFollowManager : NSObject
{
    SPSession *_session;
    id <SPTPodcastFollowService> _showsFollowService;
}

@property(retain, nonatomic) id <SPTPodcastFollowService> showsFollowService; // @synthesize showsFollowService=_showsFollowService;
@property(nonatomic) __weak SPSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (id)playlistFromURL:(id)arg1;
- (void)unfollowPlaylist:(id)arg1;
- (void)followPlaylist:(id)arg1;
- (_Bool)isPlaylistFollowed:(id)arg1;
- (_Bool)isEntityOwnedByCurrentUser:(id)arg1;
- (void)unfollowEntity:(id)arg1;
- (void)followEntity:(id)arg1;
- (void)isEntityFollowed:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)initWithSession:(id)arg1 showsFollowService:(id)arg2;

@end

