//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTOfflineModeStateObserver.h"
#import "SPTShareNetworksConnectionHandlerDelegate.h"
#import "SPTShareNetworksInfoFetcherDelegate.h"
#import "SPTSharePostHandlerDelegate.h"

@class NSString, SPKVObservation, SPTShareData, SPTShareNetworksConnectionHandler, SPTShareNetworksInfoFetcher, SPTSharePostHandler, SPTSocialManager;

@interface SPTPostComposerViewModel : NSObject <SPTShareNetworksInfoFetcherDelegate, SPTShareNetworksConnectionHandlerDelegate, SPTSharePostHandlerDelegate, SPTOfflineModeStateObserver>
{
    _Bool _connectedToFacebook;
    _Bool _posting;
    _Bool _offline;
    SPTShareData *_data;
    id <SPTPostComposerViewModelDelegate> _delegate;
    SPTSocialManager *_socialManager;
    SPKVObservation *_facebookStateObservation;
    SPTShareNetworksInfoFetcher *_fetcher;
    SPTShareNetworksConnectionHandler *_connectionHandler;
    SPTSharePostHandler *_postHandler;
    id <SPTOfflineModeState> _offlineModeState;
    long long _networkInCurrentOAuthFlow;
}

@property(nonatomic) long long networkInCurrentOAuthFlow; // @synthesize networkInCurrentOAuthFlow=_networkInCurrentOAuthFlow;
@property(retain, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(retain, nonatomic) SPTSharePostHandler *postHandler; // @synthesize postHandler=_postHandler;
@property(retain, nonatomic) SPTShareNetworksConnectionHandler *connectionHandler; // @synthesize connectionHandler=_connectionHandler;
@property(retain, nonatomic) SPTShareNetworksInfoFetcher *fetcher; // @synthesize fetcher=_fetcher;
@property(retain, nonatomic) SPKVObservation *facebookStateObservation; // @synthesize facebookStateObservation=_facebookStateObservation;
@property(nonatomic) __weak SPTSocialManager *socialManager; // @synthesize socialManager=_socialManager;
@property(readonly, nonatomic, getter=isOffline) _Bool offline; // @synthesize offline=_offline;
@property(nonatomic, getter=isPosting) _Bool posting; // @synthesize posting=_posting;
@property(nonatomic, getter=isConnectedToFacebook) _Bool connectedToFacebook; // @synthesize connectedToFacebook=_connectedToFacebook;
@property(nonatomic) __weak id <SPTPostComposerViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SPTShareData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (void)sharePostHandler:(id)arg1 cannotPostWithError:(id)arg2;
- (void)sharePostHandler:(id)arg1 failedWithError:(id)arg2;
- (void)sharePostHandlerFinished:(id)arg1 withSuccessNetworksArray:(id)arg2 failedNetworksToErrorsDictionary:(id)arg3;
- (void)networksConnectionHandler:(id)arg1 hadFailedRequestWithNetwork:(long long)arg2 wasConnectionRequest:(_Bool)arg3 error:(id)arg4;
- (void)networksConnectionHandler:(id)arg1 hadSuccessfulRequestWithNetworkData:(id)arg2 wasConnectionRequest:(_Bool)arg3;
- (void)networksConnectionHandler:(id)arg1 didNotReceiveAuthorizeURLForNetwork:(long long)arg2;
- (void)networksConnectionHandler:(id)arg1 didReceiveAuthorizeURL:(id)arg2 forNetwork:(long long)arg3;
- (void)networksInfoFetcher:(id)arg1 failedToFetchInfoWithError:(id)arg2;
- (void)networksInfoFetcher:(id)arg1 didFetchInfo:(id)arg2;
- (void)disconnectFromNetwork:(long long)arg1;
- (void)post;
- (void)submitNetworkAuthorizationQueryString:(id)arg1;
- (_Bool)attemptToToggleSharingEnabledStatusForNetwork:(long long)arg1;
- (_Bool)enabledStatusForNetwork:(long long)arg1;
- (void)updateFacebookConnectedState;
- (void)dealloc;
- (id)initWithData:(id)arg1 socialManager:(id)arg2 fetcher:(id)arg3 connectionHandler:(id)arg4 postHandler:(id)arg5 offlineModeState:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
