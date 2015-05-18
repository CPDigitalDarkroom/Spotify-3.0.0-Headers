//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BITPLCrashProcessInfo : NSObject
{
    int _processID;
    NSString *_processName;
    int _parentProcessID;
    struct timeval _startTime;
    BOOL _traced;
}

+ (id)currentProcessInfo;
@property(readonly, nonatomic) struct timeval startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic, getter=isTraced) BOOL traced; // @synthesize traced=_traced;
@property(readonly, nonatomic) int parentProcessID; // @synthesize parentProcessID=_parentProcessID;
@property(readonly, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(readonly, nonatomic) int processID; // @synthesize processID=_processID;
- (void)dealloc;
- (id)initWithProcessID:(int)arg1;

@end

