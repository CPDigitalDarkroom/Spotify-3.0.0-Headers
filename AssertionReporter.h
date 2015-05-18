//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, UIAlertView;

@interface AssertionReporter : NSObject
{
    int messageReturn;
    NSMutableArray *ignores;
    NSMutableArray *queuedMessages;
    UIAlertView *currentAlert;
}

+ (id)reporter;
@property(retain) UIAlertView *currentAlert; // @synthesize currentAlert;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)reportFailureInFile:(id)arg1 line:(unsigned int)arg2 message:(id)arg3;
- (void)showNextQueuedMessage;
- (BOOL)messageIsIgnored:(id)arg1;
- (id)init;

@end

