//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BITFeedbackComposeViewControllerDelegate.h"
#import "NSObject.h"

@class BITFeedbackManager;

@protocol BITFeedbackManagerDelegate <NSObject, BITFeedbackComposeViewControllerDelegate>

@optional
- (void)feedbackManagerDidReceiveNewFeedback:(BITFeedbackManager *)arg1;
@end

