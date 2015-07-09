//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTHLSResourceLoader.h"
#import "SPTVideoSegmentProxySessionDataSource.h"

@class NSArray, NSNumber, NSObject<OS_dispatch_queue>, NSString, SPTVideoManifest, SPTVideoManifestProfile, SPTVideoManifestService, SPTVideoSegmentProxy, SPTVideoSegmentProxySession, SPTask;

@interface SPTHLSResourceLoaderImpl : NSObject <SPTVideoSegmentProxySessionDataSource, SPTHLSResourceLoader>
{
    _Bool _shouldHandleLoadingRequests;
    _Bool _hasUsedLocalSegmentProxy;
    NSString *_videoSourceID;
    NSString *_playbackID;
    SPTVideoManifest *_manifest;
    NSNumber *_initialManifestLatency;
    SPTVideoManifestService *_manifestService;
    SPTVideoSegmentProxy *_segmentProxy;
    SPTVideoSegmentProxySession *_proxySession;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSArray *_videoProfiles;
    SPTVideoManifestProfile *_audioProfile;
    NSString *_segmentTemplate;
    SPTask *_processTask;
}

@property(retain, nonatomic) SPTask *processTask; // @synthesize processTask=_processTask;
@property(retain, nonatomic) NSString *segmentTemplate; // @synthesize segmentTemplate=_segmentTemplate;
@property(retain, nonatomic) SPTVideoManifestProfile *audioProfile; // @synthesize audioProfile=_audioProfile;
@property(retain, nonatomic) NSArray *videoProfiles; // @synthesize videoProfiles=_videoProfiles;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) SPTVideoSegmentProxySession *proxySession; // @synthesize proxySession=_proxySession;
@property(retain, nonatomic) SPTVideoSegmentProxy *segmentProxy; // @synthesize segmentProxy=_segmentProxy;
@property(retain, nonatomic) SPTVideoManifestService *manifestService; // @synthesize manifestService=_manifestService;
@property(readonly, nonatomic) _Bool hasUsedLocalSegmentProxy; // @synthesize hasUsedLocalSegmentProxy=_hasUsedLocalSegmentProxy;
@property(retain, nonatomic) NSNumber *initialManifestLatency; // @synthesize initialManifestLatency=_initialManifestLatency;
@property(retain, nonatomic) SPTVideoManifest *manifest; // @synthesize manifest=_manifest;
@property(readonly, nonatomic) NSString *playbackID; // @synthesize playbackID=_playbackID;
@property(readonly, nonatomic) NSString *videoSourceID; // @synthesize videoSourceID=_videoSourceID;
@property(nonatomic) _Bool shouldHandleLoadingRequests; // @synthesize shouldHandleLoadingRequests=_shouldHandleLoadingRequests;
- (void).cxx_destruct;
- (id)segmentURLWithIndex:(long long)arg1 profile:(id)arg2;
- (id)segmentURLWithIndex:(long long)arg1 profileID:(long long)arg2;
- (id)initializationSegmentURLForProfileID:(unsigned long long)arg1;
- (void)finishLoadingRequestWithMasterManifest:(id)arg1;
- (void)finishLoadingRequest:(id)arg1 withManifestForProfileID:(unsigned long long)arg2;
- (void)finishLoadingRequest:(id)arg1 forSegmentIndex:(unsigned long long)arg2 ofProfileID:(unsigned long long)arg3;
- (void)handleLoadingRequest:(id)arg1 withHLSOpts:(id)arg2;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (_Bool)processManifest:(id)arg1 startedAt:(id)arg2 error:(id *)arg3;
- (id)loadManifestTask;
- (id)videoProfileForURL:(id)arg1;
- (id)selectedAudioProfile;
- (id)URLForMasterManifest;
- (void)dealloc;
- (id)init;
- (id)initWithVideoSourceID:(id)arg1 playbackID:(id)arg2 manifestService:(id)arg3 segmentProxy:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

