//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFormatter, NSMutableArray, NSString;

@interface NRStats : NSObject
{
    NSString *_name;
    NSMutableArray *_times;
    NSMutableArray *_data;
    id <NRStatsDelegate> _delegate;
    double _maximumDataAge;
    double _timeGranuality;
    NSFormatter *_formatter;
}

@property(retain, nonatomic) NSFormatter *formatter; // @synthesize formatter=_formatter;
@property(nonatomic) double timeGranuality; // @synthesize timeGranuality=_timeGranuality;
@property(nonatomic) double maximumDataAge; // @synthesize maximumDataAge=_maximumDataAge;
@property(nonatomic) id <NRStatsDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *data; // @synthesize data=_data;
@property(retain, nonatomic) NSMutableArray *times; // @synthesize times=_times;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)dictionaryRepresentation;
- (void)addPoint:(float)arg1 atTime:(double)arg2;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end
