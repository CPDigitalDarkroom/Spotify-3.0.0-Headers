//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CSUncaughtExceptionHandler : NSObject
{
    BOOL _dismissed;
}

+ (id)signalName:(int)arg1;
+ (id)parseCall:(id)arg1;
+ (id)parseBacktrace:(id)arg1;
+ (id)backtrace;
- (void)handleException:(id)arg1;
- (void)validateAndSaveCriticalApplicationData:(id)arg1;

@end

