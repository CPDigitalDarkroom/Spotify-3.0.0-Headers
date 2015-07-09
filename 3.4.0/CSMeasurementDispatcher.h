//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSAggregateMeasurement, CSCore;

@interface CSMeasurementDispatcher : NSObject
{
    CSCore *_core;
    CSAggregateMeasurement *_aggregateData;
    int _eventCounter;
    double _secondEventCheckOffset;
    int _secondEventCheckCounter;
    double _dayEventCheckOffset;
    int _dayEventCheckCounter;
}

- (_Bool)checkCounters;
- (void)writeToCache:(id)arg1;
- (void)sendRequest:(id)arg1;
- (void)dispatch:(int)arg1 labels:(id)arg2 pixelURL:(id)arg3 cache:(_Bool)arg4 timestamp:(long long)arg5;
- (void)send:(int)arg1 labels:(id)arg2 pixelURL:(id)arg3 cache:(_Bool)arg4 background:(_Bool)arg5;
- (void)appendAggregateData:(id)arg1;
- (void)saveAggregateData:(id)arg1;
- (void)processAggregateDataIn:(id)arg1;
- (void)loadEventData;
- (void)reset;
- (void)dealloc;
- (id)initWithCore:(id)arg1;

@end
