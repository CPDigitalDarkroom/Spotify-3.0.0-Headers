//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTApolloDataLoaderNetworkAdapter.h"

@class NSString, SPTLogCenter;

@interface SPTApolloDataLoaderCosmosNetworkAdapter : NSObject <SPTApolloDataLoaderNetworkAdapter>
{
    id <SPTApolloDataLoaderNetworkAdapterDelegate> _delegate;
    id <SPTResolver> _resolver;
    SPTLogCenter *_logCenter;
    NSString *_username;
}

@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) SPTLogCenter *logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, nonatomic) id <SPTResolver> resolver; // @synthesize resolver=_resolver;
@property(nonatomic) __weak id <SPTApolloDataLoaderNetworkAdapterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)loadDataForURL:(id)arg1;
@property(readonly, nonatomic) long long transportProtocol;
- (id)initWithResolver:(id)arg1 username:(id)arg2 logCenter:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
