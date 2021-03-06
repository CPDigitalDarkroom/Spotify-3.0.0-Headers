//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSCore, NSMutableArray, NSMutableString, NSString, NSURLConnection, NSURLRequest;

@interface CSOfflineCache : NSObject
{
    NSURLConnection *_connection;
    NSMutableArray *_arrayOfCacheFiles;
    NSURLRequest *_request;
    NSString *_url;
    int _flushesInARow;
    double _lastFlushDate;
    double _lastFailDate;
    NSString *_c12;
    NSString *_c1;
    NSString *_ns_ap_an;
    NSString *_ns_ap_pn;
    NSString *_ns_ap_device;
    NSString *_ns_ak;
    NSMutableString *_concatedProcessedEvents;
    CSCore *core;
    int maxSize;
    int maxBatchSize;
    int maxFlushesInARow;
    int minutesToRetry;
    int expiryInDays;
}

@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) int expiryInDays; // @synthesize expiryInDays;
@property(nonatomic) int minutesToRetry; // @synthesize minutesToRetry;
@property(nonatomic) int maxFlushesInARow; // @synthesize maxFlushesInARow;
@property(nonatomic) int maxBatchSize; // @synthesize maxBatchSize;
@property(nonatomic) int maxSize; // @synthesize maxSize;
- (BOOL)isAutomaticFlushAllowed;
- (id)getFolderPath;
- (void)createNewCacheFileWithEvent:(id)arg1;
- (void)incrementDroppedMeasurements:(int)arg1;
- (BOOL)isTimestampExpired:(id)arg1;
- (BOOL)isFirstMeasurementExpired:(id)arg1;
- (void)removeExpiredCacheFiles;
- (int)measurementCountIn:(id)arg1;
- (BOOL)deleteOldestCacheFile;
- (void)destroyPreviousRequest;
- (void)save:(id)arg1;
- (void)saveMeasurement:(id)arg1;
- (id)getOldestCacheFilePath;
- (id)getNewestCacheFilePath;
- (int)getCacheFilesCount;
- (id)getArrayOfCacheFileNames;
- (void)updateLastTransmissionDate;
- (void)processCommonLabelsInEvent:(id)arg1;
- (id)getEventsFormatted;
- (id)getXMLHeader;
- (id)getXMLBody;
- (id)requestWithAllCachedMeasurements;
- (BOOL)availableConnection;
- (id)getValueFromLabelWithName:(id)arg1 fromEvent:(id)arg2;
- (id)removeLabelWithName:(id)arg1 fromEvent:(id)arg2;
- (BOOL)isFlushingAllowed;
- (BOOL)flush;
- (BOOL)automaticFlush;
- (BOOL)removeNewestFile;
- (BOOL)removeCacheFile:(id)arg1 dropMeasurements:(BOOL)arg2;
- (BOOL)removeAllEvents;
- (id)newestEventBatch;
- (BOOL)isEmpty;
- (int)count;
- (void)releaseCommonLabels;
- (id)createFlushingURL;
- (void)dealloc;
- (id)initWithCore:(id)arg1;

@end

