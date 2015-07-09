//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CSComScore : NSObject
{
}

+ (void)setOfflineURL:(id)arg1;
+ (void)waitForTasks;
+ (void)setDebug:(_Bool)arg1;
+ (id)version;
+ (void)update;
+ (void)onUxInactive;
+ (void)onUxActive;
+ (void)onUserInteraction;
+ (void)onExitForeground;
+ (void)onEnterForeground;
+ (_Bool)isAutoUpdateEnabled;
+ (int)runsCount;
+ (id)previousVersion;
+ (long long)installId;
+ (long long)firstInstallId;
+ (id)currentVersion;
+ (long long)coldStartId;
+ (int)coldStartCount;
+ (void)enableAutoUpdate:(int)arg1 foregroundOnly:(_Bool)arg2;
+ (void)disableAutoUpdate;
+ (void)setMeasurementLabelOrder:(id)arg1;
+ (id)measurementLabelOrder;
+ (id)crossPublisherId;
+ (void)allowOfflineTransmission:(int)arg1;
+ (void)allowLiveTransmission:(int)arg1;
+ (_Bool)autoStartEnabled;
+ (void)setAutoStartEnabled:(_Bool)arg1;
+ (_Bool)isErrorHandlingEnabled;
+ (void)setErrorHandlingEnabled:(_Bool)arg1;
+ (void)setCacheFlushingInterval:(long long)arg1;
+ (long long)cacheFlushingInterval;
+ (int)cacheExpiryInDays;
+ (void)setCacheExpiryInDays:(int)arg1;
+ (int)cacheMinutesToRetry;
+ (void)setCacheMinutesToRetry:(int)arg1;
+ (int)cacheMaxFlushesInARow;
+ (void)setCacheMaxFlushesInARow:(int)arg1;
+ (int)cacheMaxBatchSize;
+ (void)setCacheMaxBatchSize:(int)arg1;
+ (int)cacheMaxSize;
+ (void)setCacheMaxSize:(int)arg1;
+ (int)offlineTransmissionMode;
+ (int)liveTransmissionMode;
+ (_Bool)isSecure;
+ (void)setSecure:(_Bool)arg1;
+ (void)setKeepAliveEnabled:(_Bool)arg1;
+ (_Bool)isKeepAliveEnabled;
+ (id)autoStartLabels;
+ (id)autoStartLabel:(id)arg1;
+ (void)setAutoStartLabels:(id)arg1;
+ (void)setAutoStartLabel:(id)arg1 value:(id)arg2;
+ (id)labels;
+ (id)label:(id)arg1;
+ (void)setLabels:(id)arg1;
+ (void)setLabel:(id)arg1 value:(id)arg2;
+ (_Bool)isJailbroken;
+ (void)flushCache;
+ (void)setVisitorID:(id)arg1;
+ (id)visitorID;
+ (void)setPublisherSecret:(id)arg1;
+ (id)publisherSecret;
+ (long long)previousGenesis;
+ (long long)genesis;
+ (id)devModel;
+ (void)setAppName:(id)arg1;
+ (id)appName;
+ (void)setCustomerC2:(id)arg1;
+ (id)customerC2;
+ (id)setPixelURL:(id)arg1;
+ (id)pixelURL;
+ (void)aggregateWithLabels:(id)arg1;
+ (void)hiddenWithLabels:(id)arg1;
+ (void)hidden;
+ (void)viewWithLabels:(id)arg1;
+ (void)view;
+ (void)startWithLabels:(id)arg1;
+ (void)start;
+ (void)setAppContext;
+ (void)initialize;
+ (id)core;
+ (_Bool)enabled;
+ (void)setEnabled:(_Bool)arg1;
+ (id)census;

@end

