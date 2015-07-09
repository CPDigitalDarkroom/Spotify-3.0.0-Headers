//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SPTLoginMarketSignupRestrictions, SignupController;

@protocol SignupControllerDelegate <NSObject>
- (void)signupController:(SignupController *)arg1 failedWithErrorMessage:(NSString *)arg2 fieldType:(unsigned long long)arg3;
- (void)signupController:(SignupController *)arg1 failedWithErrorMessage:(NSString *)arg2;

@optional
- (void)signupController:(SignupController *)arg1 marketSignupRestrictions:(SPTLoginMarketSignupRestrictions *)arg2;
- (void)signupControllerDidRegisterUser:(SignupController *)arg1;
- (void)signupController:(SignupController *)arg1 didSuggestUsername:(NSString *)arg2;
@end
