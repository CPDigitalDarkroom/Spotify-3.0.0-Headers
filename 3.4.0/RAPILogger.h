//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDLogAppender.h"

@class NSString, RAPIDDFileLogger;

@interface RAPILogger : NSObject <IDLogAppender>
{
    _Bool _logToConsole;
    _Bool _logToCallback;
    _Bool _logToFile;
    NSString *_logDirectory;
    RAPIDDFileLogger *_fileLogger;
}

+ (void)logWithSource:(long long)arg1 formatString:(id)arg2 andArguments:(char *)arg3;
+ (void)logWithSource:(long long)arg1 formatString:(id)arg2;
+ (void)forwardLogsTo:(id)arg1 withHandler:(SEL)arg2 andLogToConsole:(_Bool)arg3 andLogToCallback:(_Bool)arg4 andLogToFile:(_Bool)arg5;
+ (id)getStaticLogger;
@property(retain) RAPIDDFileLogger *fileLogger; // @synthesize fileLogger=_fileLogger;
@property(retain) NSString *logDirectory; // @synthesize logDirectory=_logDirectory;
@property _Bool logToFile; // @synthesize logToFile=_logToFile;
@property _Bool logToCallback; // @synthesize logToCallback=_logToCallback;
@property _Bool logToConsole; // @synthesize logToConsole=_logToConsole;
- (void).cxx_destruct;
- (void)logInternal:(id)arg1 source:(long long)arg2;
- (void)forwardLogsTo:(id)arg1 withHandler:(SEL)arg2 andLogToConsole:(_Bool)arg3 andLogToCallback:(_Bool)arg4 andLogToFile:(_Bool)arg5;
- (void)appendLoggerEvent:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
