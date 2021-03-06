//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTDataLoaderDelegate.h"

@class NSString, SPTDataLoader, SPTLogCenter;

@interface SPTShareNetworksInfoFetcher : NSObject <SPTDataLoaderDelegate>
{
    id <SPTShareNetworksInfoFetcherDelegate> _delegate;
    id <SPTResolver> _resolver;
    id <SPTHTTPTestManager> _httpTestManager;
    SPTDataLoader *_dataLoader;
    SPTLogCenter *_logCenter;
}

@property(retain, nonatomic) SPTLogCenter *logCenter; // @synthesize logCenter=_logCenter;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) id <SPTHTTPTestManager> httpTestManager; // @synthesize httpTestManager=_httpTestManager;
@property(retain, nonatomic) id <SPTResolver> resolver; // @synthesize resolver=_resolver;
@property(nonatomic) __weak id <SPTShareNetworksInfoFetcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didCancelRequest:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (int)currentTransport;
- (id)parseInfoData:(id)arg1 successful:(BOOL)arg2 statusCode:(int)arg3 error:(id *)arg4;
- (void)handleData:(id)arg1 successful:(BOOL)arg2 statusCode:(int)arg3;
- (void)fetchInfoForItemURI:(id)arg1;
- (id)initWithResolver:(id)arg1 httpTestManager:(id)arg2 dataLoader:(id)arg3 logCenter:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

