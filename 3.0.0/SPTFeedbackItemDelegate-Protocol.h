//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTFeedbackItem;

@protocol SPTFeedbackItemDelegate <NSObject>
- (void)feedbackItemDidComplete:(SPTFeedbackItem *)arg1;
- (void)feedbackItemDidCancel:(SPTFeedbackItem *)arg1;
@end
