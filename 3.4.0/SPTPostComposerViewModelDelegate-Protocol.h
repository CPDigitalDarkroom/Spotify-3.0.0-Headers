//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, NSURL, SPTPostComposerViewModel, SPTShareNetworkData, SPTShareNetworksInfo;

@protocol SPTPostComposerViewModelDelegate <NSObject>
- (void)viewModel:(SPTPostComposerViewModel *)arg1 didNotReceiveAuthorizeURLForNetwork:(long long)arg2;
- (void)viewModel:(SPTPostComposerViewModel *)arg1 didReceiveAuthorizeURL:(NSURL *)arg2 forNetwork:(long long)arg3;
- (void)viewModel:(SPTPostComposerViewModel *)arg1 cannotPostItemWithFailureType:(long long)arg2;
- (void)viewModel:(SPTPostComposerViewModel *)arg1 failedToPostToNetworks:(NSArray *)arg2;
- (void)viewModelPostedSuccessfully:(SPTPostComposerViewModel *)arg1;
- (void)viewModel:(SPTPostComposerViewModel *)arg1 hadFailedRequestWithNetwork:(long long)arg2 wasConnectionRequest:(_Bool)arg3 error:(NSError *)arg4;
- (void)viewModel:(SPTPostComposerViewModel *)arg1 hadSuccessfulRequestWithNetworkData:(SPTShareNetworkData *)arg2 wasConnectionRequest:(_Bool)arg3;
- (void)viewModel:(SPTPostComposerViewModel *)arg1 failedToFetchInfoWithError:(NSError *)arg2;
- (void)viewModel:(SPTPostComposerViewModel *)arg1 didFetchInfo:(SPTShareNetworksInfo *)arg2;
- (void)viewModelFailedToToggleSharingEnabledStateBecauseWeLackNetworksInfo:(SPTPostComposerViewModel *)arg1;

@optional
- (void)viewModel:(SPTPostComposerViewModel *)arg1 offlineModeStateChanged:(_Bool)arg2;
@end
