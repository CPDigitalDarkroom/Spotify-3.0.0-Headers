//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CSApplicationMeasurement.h"

@interface CSAggregateMeasurement : CSApplicationMeasurement
{
}

- (void)formatLists;
- (id)getElementsFromList:(id)arg1;
- (id)addValue:(id)arg1 toList:(id)arg2;
- (_Bool)existingString:(id)arg1 string:(id)arg2;
- (_Bool)isList:(id)arg1;
- (_Bool)isInteger:(id)arg1;
- (void)aggregateLabels:(id)arg1;
- (id)getAggregateLabels;
- (id)initWithCore:(id)arg1 eventType:(int)arg2 pixelURL:(id)arg3 timestamp:(long long)arg4;

@end
