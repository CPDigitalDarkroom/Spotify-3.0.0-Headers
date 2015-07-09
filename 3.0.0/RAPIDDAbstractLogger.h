//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DDLogger.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface RAPIDDAbstractLogger : NSObject <DDLogger>
{
    id <DDLogFormatter> _logFormatter;
    NSObject<OS_dispatch_queue> *_loggerQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *loggerQueue; // @synthesize loggerQueue=_loggerQueue;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isOnInternalLoggerQueue) BOOL onInternalLoggerQueue;
@property(readonly, nonatomic, getter=isOnGlobalLoggingQueue) BOOL onGlobalLoggingQueue;
@property(readonly, nonatomic) NSString *loggerName;
@property(retain, nonatomic) id <DDLogFormatter> logFormatter;
- (void)logMessage:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
