//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, SPTAccountTargetingRequest;

@protocol SPTAccountTargetingRequestDelegate <NSObject>
- (void)targetingRequest:(SPTAccountTargetingRequest *)arg1 didFinishWithTrialEligibilityResult:(_Bool)arg2;

@optional
- (void)targetingRequest:(SPTAccountTargetingRequest *)arg1 didFailWithError:(NSError *)arg2;
- (void)targetingRequestDidStart:(SPTAccountTargetingRequest *)arg1;
@end

