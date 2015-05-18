//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDataDelegate.h"
#import "SPTTouchDownloadDelegate.h"

@class NSHashTable, NSObject<OS_dispatch_queue>, NSString, NSURL, NSURLSession, NSURLSessionDataTask, SPTTouchDownloadLog;

@interface SPTTouchDownloadEntry : NSObject <SPTTouchDownloadDelegate, NSURLSessionDataDelegate>
{
    NSURL *_url;
    NSURLSession *_session;
    id <SPTPersistentDataStream> _dataStream;
    NSObject<OS_dispatch_queue> *_workQueue;
    unsigned int _bytesRequested;
    SPTTouchDownloadLog *_downloadLog;
    NSHashTable *_downloads;
    NSURLSessionDataTask *_dataTask;
    id <SPTLogCenterProtocol> _logCenter;
    unsigned int _bytesDownloaded;
}

@property(nonatomic) unsigned int bytesDownloaded; // @synthesize bytesDownloaded=_bytesDownloaded;
@property(readonly, nonatomic) id <SPTLogCenterProtocol> logCenter; // @synthesize logCenter=_logCenter;
@property(retain, nonatomic) NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
@property(readonly, nonatomic) NSHashTable *downloads; // @synthesize downloads=_downloads;
@property(retain, nonatomic) SPTTouchDownloadLog *downloadLog; // @synthesize downloadLog=_downloadLog;
@property unsigned int bytesRequested; // @synthesize bytesRequested=_bytesRequested;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) id <SPTPersistentDataStream> dataStream; // @synthesize dataStream=_dataStream;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)downloadDidInvalidate:(id)arg1;
- (void)download:(id)arg1 readDataWithCallback:(CDUnknownBlockType)arg2;
- (unsigned int)downloadNumberOfBytesDownloaded:(id)arg1;
- (void)downloadDidChangeBytesRequested:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)createSessionIfNeeded;
- (void)cancelSession;
- (void)updateRequest;
- (void)updateBytesRequested;
- (BOOL)isOnWorkQueue;
@property(readonly, nonatomic) BOOL hasConnectedDataStream;
- (id)createDownload;
- (void)readData:(CDUnknownBlockType)arg1;
- (void)appendData:(id)arg1;
- (void)didCreateDataStream:(id)arg1;
- (id)initWithURL:(id)arg1 logCenter:(id)arg2;
- (id)initWithURL:(id)arg1 session:(id)arg2 logCenter:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

