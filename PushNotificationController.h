//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTOfflineModeStateObserver.h"

@class NSString;

@interface PushNotificationController : NSObject <SPTOfflineModeStateObserver>
{
    NSString *_apnsToken;
}

+ (id)provideSaveAction;
+ (void)failedToRegisterForRemoteNotificationsWithError:(id)arg1;
+ (void)setNewDeviceToken:(id)arg1;
+ (void)setup;
+ (void)handleIncomingNotification:(id)arg1 forIdentifier:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (void)handleIncomingNotification:(id)arg1;
+ (id)sharedPushNotificationController;
@property(retain, nonatomic) NSString *apnsToken; // @synthesize apnsToken=_apnsToken;
- (void).cxx_destruct;
- (void)offlineModeState:(id)arg1 updated:(BOOL)arg2;
- (void)dealloc;
- (void)handleIncomingWebViewURL:(id)arg1;
- (void)deregisterOldDeviceToken;
- (void)registerDeviceTokenWithCurrentUser;
- (void)willLogout;
- (void)didLogin;
- (void)handleIncomingNotification:(id)arg1 forIdentifier:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)handleIncomingNotification:(id)arg1;
- (void)logIncomingNotification:(id)arg1 applicationActive:(BOOL)arg2;
- (void)unsubscribeFromAPN;
- (void)subscribeToAPN;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

