//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, SPTDataLoader, SPTDataLoaderRequest, SPTDataLoaderResponse;

@protocol SPTDataLoaderDelegate <NSObject>
- (void)dataLoader:(SPTDataLoader *)arg1 didCancelRequest:(SPTDataLoaderRequest *)arg2;
- (void)dataLoader:(SPTDataLoader *)arg1 didReceiveErrorResponse:(SPTDataLoaderResponse *)arg2;
- (void)dataLoader:(SPTDataLoader *)arg1 didReceiveSuccessfulResponse:(SPTDataLoaderResponse *)arg2;

@optional
- (void)dataLoader:(SPTDataLoader *)arg1 didReceiveInitialResponse:(SPTDataLoaderResponse *)arg2;
- (void)dataLoader:(SPTDataLoader *)arg1 didReceiveDataChunk:(NSData *)arg2 forResponse:(SPTDataLoaderResponse *)arg3;
- (BOOL)dataLoaderShouldSupportChunks:(SPTDataLoader *)arg1;
@end

