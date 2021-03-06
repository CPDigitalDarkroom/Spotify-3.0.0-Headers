//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSError, SPTPartyGenre, SPTPartyGenreTree, SPTPartyViewModel, SPTPlayerState;

@protocol SPTPartyViewModelDelegate <NSObject>
- (void)viewModel:(SPTPartyViewModel *)arg1 loading:(_Bool)arg2;
- (void)viewModel:(SPTPartyViewModel *)arg1 offlineModeChanged:(_Bool)arg2;
- (void)viewModel:(SPTPartyViewModel *)arg1 productStateDidChange:(id <SPTProductState>)arg2 newValues:(NSDictionary *)arg3;
- (void)viewModel:(SPTPartyViewModel *)arg1 playerStateDidChange:(SPTPlayerState *)arg2 fromState:(SPTPlayerState *)arg3;
- (void)viewModel:(SPTPartyViewModel *)arg1 tracksDidFailToLoadWithError:(NSError *)arg2;
- (void)viewModel:(SPTPartyViewModel *)arg1 tracksDidLoad:(NSArray *)arg2;
- (void)viewModel:(SPTPartyViewModel *)arg1 currentEnergyLevelDidChange:(long long)arg2;
- (void)viewModel:(SPTPartyViewModel *)arg1 currentSubGenreDidChange:(SPTPartyGenre *)arg2 currentParentGenre:(SPTPartyGenre *)arg3;
- (void)viewModel:(SPTPartyViewModel *)arg1 genresDidFailToLoadWithError:(NSError *)arg2;
- (void)viewModel:(SPTPartyViewModel *)arg1 genreTreeDidLoad:(SPTPartyGenreTree *)arg2 needsUpdateInUI:(_Bool)arg3;
@end

