//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTIAPSpotifyProductRequest.h"

#import "SPTDataLoaderDelegate.h"

@class NSString, SPTDataLoader, SPTDataLoaderFactory;

@interface SPTIAPSpotifyHTTPProductRequest : SPTIAPSpotifyProductRequest <SPTDataLoaderDelegate>
{
    SPTDataLoader *_dataLoader;
    SPTDataLoaderFactory *_dataLoaderFactory;
    id <SPTCancellationToken> _cancellationToken;
}

@property(retain, nonatomic) id <SPTCancellationToken> cancellationToken; // @synthesize cancellationToken=_cancellationToken;
@property(retain, nonatomic) SPTDataLoaderFactory *dataLoaderFactory; // @synthesize dataLoaderFactory=_dataLoaderFactory;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didCancelRequest:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)didComplete;
- (void)start;
- (void)dealloc;
- (id)initWithDataLoaderFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

