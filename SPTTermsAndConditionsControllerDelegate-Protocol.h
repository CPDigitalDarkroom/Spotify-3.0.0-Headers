//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTTermsAndConditionsController;

@protocol SPTTermsAndConditionsControllerDelegate <NSObject>
- (void)termsAndConditionsControllerDidDeclineTermsAndConditions:(SPTTermsAndConditionsController *)arg1;
- (void)termsAndConditionsControllerDidAcceptTermsAndConditions:(SPTTermsAndConditionsController *)arg1;

@optional
- (void)termsAndConditionsControllerWillShow:(SPTTermsAndConditionsController *)arg1;
@end

