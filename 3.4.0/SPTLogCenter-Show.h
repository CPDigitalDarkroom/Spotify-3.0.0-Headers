//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTLogCenter.h"

@interface SPTLogCenter (Show)
- (void)logTabControlInViewUrl:(id)arg1 changedIndex:(long long)arg2;
- (void)logLoadShowViewURL:(id)arg1;
- (void)logOpenContextMenuShowInViewURL:(id)arg1;
- (void)logOpenContextMenuEpisodeInViewURL:(id)arg1 episodeURI:(id)arg2 indexPath:(id)arg3;
- (void)logEditModeBatchRemoveOfflineInViewURL:(id)arg1 all:(_Bool)arg2;
- (void)logEditModeItemActionInViewURL:(id)arg1 episodeURI:(id)arg2 indexPath:(id)arg3 remove:(_Bool)arg4;
- (void)logEditModeItemActionInViewURL:(id)arg1 episodeURI:(id)arg2 indexPath:(id)arg3 offline:(_Bool)arg4;
- (void)logEditModeInViewURL:(id)arg1 entered:(_Bool)arg2 listPosition:(double)arg3;
- (void)logShowFollowInViewURL:(id)arg1 didFollow:(_Bool)arg2 fromContextMenu:(_Bool)arg3 autoFollow:(_Bool)arg4;
- (void)logEpisodeSortingInViewURL:(id)arg1 sorting:(unsigned long long)arg2;
- (void)logEpisodeFilterResetInViewURL:(id)arg1;
- (void)logEpisodeFilterSetInViewURL:(id)arg1 filter:(id)arg2 previousFilter:(id)arg3;
- (void)logCollectionNavigationItemSelectedInViewURL:(id)arg1 indexPath:(id)arg2 navURL:(id)arg3;
- (void)logEpisodeSelectedInViewURL:(id)arg1 indexPath:(id)arg2 episodeURL:(id)arg3;
@end

