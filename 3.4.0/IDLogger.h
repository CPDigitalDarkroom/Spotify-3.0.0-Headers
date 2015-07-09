//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface IDLogger : NSObject
{
    NSMutableArray *_logAppenders;
    int _maximumLogLevel;
}

+ (id)defaultLogger;
@property int maximumLogLevel; // @synthesize maximumLogLevel=_maximumLogLevel;
- (void).cxx_destruct;
- (void)logMessage:(id)arg1 tag:(id)arg2 level:(int)arg3;
- (void)removeAppender:(id)arg1;
- (void)addAppender:(id)arg1;
- (id)init;

@end

