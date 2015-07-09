//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface SPTDataLoader : NSObject
{
    id <SPTDataLoaderRequestResponseHandlerDelegate> _requestResponseHandlerDelegate;
    id <SPTDataLoaderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSHashTable *_cancellationTokens;
    NSMutableArray *_requests;
}

+ (id)dataLoaderWithRequestResponseHandlerDelegate:(id)arg1;
@property(retain, nonatomic) NSMutableArray *requests; // @synthesize requests=_requests;
@property(retain, nonatomic) NSHashTable *cancellationTokens; // @synthesize cancellationTokens=_cancellationTokens;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <SPTDataLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)requestResponseHandlerDelegate;
- (void).cxx_destruct;
- (void)receivedInitialResponse:(id)arg1;
- (void)receivedDataChunk:(id)arg1 forResponse:(id)arg2;
- (void)cancelledRequest:(id)arg1;
- (void)failedResponse:(id)arg1;
- (void)successfulResponse:(id)arg1;
- (void)dealloc;
- (void)cancelAllLoads;
- (id)performRequest:(id)arg1;
- (void)executeDelegateBlock:(CDUnknownBlockType)arg1;
- (id)initWithRequestResponseHandlerDelegate:(id)arg1;

@end
