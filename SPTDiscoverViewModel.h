//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTDataLoaderDelegate.h"
#import "SPTOfflineModeStateObserver.h"
#import "SPTPlayerObserver.h"

@class NSMutableArray, NSString, SPTDataLoader, SPTLogCenter;

@interface SPTDiscoverViewModel : NSObject <SPTPlayerObserver, SPTOfflineModeStateObserver, SPTDataLoaderDelegate>
{
    BOOL _loaded;
    id <SPTDiscoverViewModelDelegate> _delegate;
    id <SPTResolver> _resolver;
    NSMutableArray *_groups;
    id <SPTOfflineModeState> _offlineModeState;
    id <SPTPlayer> _player;
    id <SPTHTTPTestManager> _httpTestManager;
    SPTDataLoader *_dataLoader;
    SPTLogCenter *_logCenter;
}

@property(retain, nonatomic) SPTLogCenter *logCenter; // @synthesize logCenter=_logCenter;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) id <SPTHTTPTestManager> httpTestManager; // @synthesize httpTestManager=_httpTestManager;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(retain, nonatomic) NSMutableArray *groups; // @synthesize groups=_groups;
@property(nonatomic, getter=isLoaded) BOOL loaded; // @synthesize loaded=_loaded;
@property(retain, nonatomic) id <SPTResolver> resolver; // @synthesize resolver=_resolver;
@property(retain, nonatomic) id <SPTDiscoverViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didCancelRequest:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)offlineModeState:(id)arg1 updated:(BOOL)arg2;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (void)fetchItems;
- (int)currentTransport;
@property(readonly, nonatomic) BOOL isOffline;
- (id)groupAtIndex:(int)arg1;
- (id)titleForSection:(int)arg1;
- (id)parseData:(id)arg1 error:(id *)arg2;
- (void)handleData:(id)arg1 successful:(BOOL)arg2;
- (void)sendGetRequest:(id)arg1;
- (id)initWithResolver:(id)arg1 player:(id)arg2 offlineModeState:(id)arg3 httpTestManager:(id)arg4 dataLoader:(id)arg5 logCenter:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
