//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, SPTDriverDistractionDebugLogNavController, UIWindow;

@interface SPTDriverDistractionDebugLogger : NSObject
{
    NSMutableArray *_waitingLogEntries;
    NSMutableArray *_archivedEntries;
    id <SPTDriverDistractionDebugLoggerConsumer> _consumer;
    UIWindow *_loggerWindow;
    SPTDriverDistractionDebugLogNavController *_defaultNavController;
    double _startTime;
}

+ (id)stringFromMessage:(unsigned int)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) SPTDriverDistractionDebugLogNavController *defaultNavController; // @synthesize defaultNavController=_defaultNavController;
@property(retain, nonatomic) UIWindow *loggerWindow; // @synthesize loggerWindow=_loggerWindow;
@property double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) __weak id <SPTDriverDistractionDebugLoggerConsumer> consumer; // @synthesize consumer=_consumer;
@property(retain, nonatomic) NSMutableArray *archivedEntries; // @synthesize archivedEntries=_archivedEntries;
@property(retain) NSMutableArray *waitingLogEntries; // @synthesize waitingLogEntries=_waitingLogEntries;
- (void).cxx_destruct;
- (void)log:(id)arg1 logString:(id)arg2 icon:(unsigned int)arg3;
- (void)reset;
- (void)flush;
- (void)show;
- (void)hideAndThen:(CDUnknownBlockType)arg1;

@end

