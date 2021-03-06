//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTDataLoaderConsumptionObserver.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, SPTDataLoaderService;

@interface SPTDebugDataLoaderMonitor : NSObject <SPTDataLoaderConsumptionObserver>
{
    NSObject<OS_dispatch_queue> *_workerQueue;
    SPTDataLoaderService *_dataLoaderService;
    NSMutableDictionary *_sourceToConsumption;
}

@property(retain, nonatomic) NSMutableDictionary *sourceToConsumption; // @synthesize sourceToConsumption=_sourceToConsumption;
@property(retain, nonatomic) SPTDataLoaderService *dataLoaderService; // @synthesize dataLoaderService=_dataLoaderService;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue; // @synthesize workerQueue=_workerQueue;
- (void).cxx_destruct;
- (id)consumptions;
- (void)endedRequest:(id)arg1 bytesDownloaded:(int)arg2 bytesUploaded:(int)arg3;
- (void)dealloc;
- (id)initWithDataLoaderService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

