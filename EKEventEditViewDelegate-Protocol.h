//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EKCalendar, EKEventEditViewController;

@protocol EKEventEditViewDelegate <NSObject>
- (void)eventEditViewController:(EKEventEditViewController *)arg1 didCompleteWithAction:(int)arg2;

@optional
- (EKCalendar *)eventEditViewControllerDefaultCalendarForNewEvents:(EKEventEditViewController *)arg1;
@end

