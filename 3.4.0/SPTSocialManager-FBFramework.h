//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTSocialManager.h"

@interface SPTSocialManager (FBFramework)
- (void)fbSessionInvalidated;
- (void)fbDidLogout;
- (void)fbDidExtendToken:(id)arg1 expiresAt:(id)arg2;
- (void)fbDidNotLogin:(_Bool)arg1;
- (void)fbDidLogin;
- (void)endAuthBackgroundTask;
- (void)startAuthBackgroundTask;
- (void)appBecameActive;
- (void)cancelFBAuth;
- (void)connectToFacebookWithPermissions:(id)arg1 delegate:(CDUnknownBlockType)arg2 allowsTransferringFBUID:(_Bool)arg3;
- (void)connectToFacebookWithPermissions:(id)arg1 delegate:(CDUnknownBlockType)arg2;
- (id)facebookAuthInformation;
@end

