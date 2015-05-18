//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FollowModelObserver.h"
#import "SPTDataLoaderDelegate.h"
#import "SPTFindFriendsNetworkConnectionManagerDelegate.h"
#import "SPTOfflineModeStateObserver.h"

@class MultipleFollowModel, NSArray, NSString, SPTClientEventLogger, SPTDataLoader, SPTFindFriendsNetworkConnectionManager;

@interface SPTFindFriendsViewModel : NSObject <SPTFindFriendsNetworkConnectionManagerDelegate, FollowModelObserver, SPTDataLoaderDelegate, SPTOfflineModeStateObserver>
{
    BOOL _loading;
    BOOL _offline;
    id <SPTFindFriendsViewModelDelegate> _delegate;
    NSArray *_friends;
    SPTDataLoader *_dataLoader;
    id <SPTOfflineModeState> _offlineModeState;
    id <SPTResolver> _resolver;
    SPTFindFriendsNetworkConnectionManager *_networkConnectionManager;
    NSString *_currentUsername;
    SPTClientEventLogger *_clientEventLogger;
    NSArray *_allFriends;
    MultipleFollowModel *_multipleFollowModel;
}

@property(retain, nonatomic) MultipleFollowModel *multipleFollowModel; // @synthesize multipleFollowModel=_multipleFollowModel;
@property(retain, nonatomic) NSArray *allFriends; // @synthesize allFriends=_allFriends;
@property(retain, nonatomic) SPTClientEventLogger *clientEventLogger; // @synthesize clientEventLogger=_clientEventLogger;
@property(retain, nonatomic) NSString *currentUsername; // @synthesize currentUsername=_currentUsername;
@property(retain, nonatomic) SPTFindFriendsNetworkConnectionManager *networkConnectionManager; // @synthesize networkConnectionManager=_networkConnectionManager;
@property(retain, nonatomic) id <SPTResolver> resolver; // @synthesize resolver=_resolver;
@property(retain, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic, getter=isOffline) BOOL offline; // @synthesize offline=_offline;
@property(nonatomic, getter=isLoading) BOOL loading; // @synthesize loading=_loading;
@property(retain, nonatomic) NSArray *friends; // @synthesize friends=_friends;
@property(nonatomic) __weak id <SPTFindFriendsViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)offlineModeState:(id)arg1 updated:(BOOL)arg2;
- (void)networkConnectionManager:(id)arg1 hasDisconnectedFromNetworkType:(int)arg2;
- (void)networkConnectionManager:(id)arg1 hasConnectedToNetworkType:(int)arg2;
- (BOOL)isConnectedToFacebook;
- (BOOL)isConnectedToAnyNetworks;
- (void)connectToNetworkAtIndex:(unsigned int)arg1;
- (int)networkTypeAtIndex:(unsigned int)arg1;
- (id)networks;
- (void)followModel:(id)arg1 updateDidFailWithError:(id)arg2;
- (void)followModel:(id)arg1 followDataDidChange:(id)arg2;
- (void)followAllFriends;
- (void)toggleFollowStateForUserAtIndex:(unsigned int)arg1;
- (void)filterFriendsWithSearchQuery:(id)arg1;
- (void)dataLoader:(id)arg1 didCancelRequest:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (id)parseDataFromResponse:(id)arg1 error:(id *)arg2;
- (void)requestData;
- (void)dealloc;
- (id)initWithDataLoader:(id)arg1 resolver:(id)arg2 networkConnectionManager:(id)arg3 offlineModeState:(id)arg4 currentUsername:(id)arg5 clientEventLogger:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

