//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTDataLoaderDelegate.h"

@class NSString, SPTDataLoader, SPTLogCenter, SPTPartyParameters;

@interface SPTPartyTracksLoader : NSObject <SPTDataLoaderDelegate>
{
    id <SPTPartyTracksLoaderDelegate> _delegate;
    SPTPartyParameters *_partyParameters;
    SPTDataLoader *_dataLoader;
    SPTLogCenter *_logCenter;
}

@property(retain, nonatomic) SPTLogCenter *logCenter; // @synthesize logCenter=_logCenter;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) SPTPartyParameters *partyParameters; // @synthesize partyParameters=_partyParameters;
@property(nonatomic) __weak id <SPTPartyTracksLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didCancelRequest:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (id)tracksFromData:(id)arg1 successful:(_Bool)arg2 underlyingError:(id)arg3 error:(id *)arg4;
- (void)loadTracksWithPartyParameters:(id)arg1;
- (id)initWithDataLoader:(id)arg1 logCenter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

