//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RAPIConfiguration : NSObject
{
    _Bool _logToConsole;
    _Bool _logToCallback;
    _Bool _logToFile;
    _Bool _presentLockScreenViewControllerAutomatically;
}

@property _Bool presentLockScreenViewControllerAutomatically; // @synthesize presentLockScreenViewControllerAutomatically=_presentLockScreenViewControllerAutomatically;
@property _Bool logToFile; // @synthesize logToFile=_logToFile;
@property _Bool logToCallback; // @synthesize logToCallback=_logToCallback;
@property _Bool logToConsole; // @synthesize logToConsole=_logToConsole;
- (id)init;

@end

