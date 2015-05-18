//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface ProfileViewModelCacheableData : NSObject
{
    NSArray *_artistsOverview;
    NSArray *_playlistsOverview;
    NSArray *_invitationsOverview;
    NSArray *_recentActivitiesOverview;
    NSArray *_allArtists;
    NSArray *_allPlaylists;
    NSArray *_allInvitations;
    NSArray *_allRecentActivities;
}

@property(readonly, nonatomic) NSArray *allRecentActivities; // @synthesize allRecentActivities=_allRecentActivities;
@property(readonly, nonatomic) NSArray *allInvitations; // @synthesize allInvitations=_allInvitations;
@property(readonly, nonatomic) NSArray *allPlaylists; // @synthesize allPlaylists=_allPlaylists;
@property(readonly, nonatomic) NSArray *allArtists; // @synthesize allArtists=_allArtists;
@property(readonly, nonatomic) NSArray *recentActivitiesOverview; // @synthesize recentActivitiesOverview=_recentActivitiesOverview;
@property(readonly, nonatomic) NSArray *invitationsOverview; // @synthesize invitationsOverview=_invitationsOverview;
@property(readonly, nonatomic) NSArray *playlistsOverview; // @synthesize playlistsOverview=_playlistsOverview;
@property(readonly, nonatomic) NSArray *artistsOverview; // @synthesize artistsOverview=_artistsOverview;
- (void).cxx_destruct;
- (void)setTotalPlaylistsCount:(unsigned int)arg1;
- (BOOL)shouldAppendViewAllForDataType:(int)arg1 count:(int)arg2 limit:(int)arg3;
- (id)modelObjectsOverviewWithAllModelObjectsArray:(id)arg1 viewModelDataType:(int)arg2 limit:(int)arg3;
- (id)allModelObjectsWithArrayOfDicts:(id)arg1 viewModelDataType:(int)arg2;
- (id)initWithJSONDictionary:(id)arg1;

@end

