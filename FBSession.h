//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBLoginDialogDelegate.h"

@class FBAccessTokenData, FBLoginDialog, FBSessionAppEventsState, FBSessionAuthLogger, FBSessionTokenCachingStrategy, NSArray, NSDate, NSString, NSThread;

@interface FBSession : NSObject <FBLoginDialogDelegate>
{
    NSString *_urlSchemeSuffix;
    BOOL _isInStateTransition;
    int _loginTypeOfPendingOpenUrlCallback;
    int _defaultDefaultAudience;
    int _loginBehavior;
    BOOL _isRepairing;
    int _state;
    NSString *_appID;
    FBAccessTokenData *_accessTokenData;
    NSArray *_initializedPermissions;
    int _lastRequestedSystemAudience;
    FBSessionTokenCachingStrategy *_tokenCachingStrategy;
    NSDate *_attemptedRefreshDate;
    NSDate *_attemptedPermissionsRefreshDate;
    CDUnknownBlockType _loginHandler;
    CDUnknownBlockType _reauthorizeHandler;
    FBLoginDialog *_loginDialog;
    NSThread *_affinitizedThread;
    FBSessionAppEventsState *_appEventsState;
    FBSessionAuthLogger *_authLogger;
}

+ (id)sdkSurfacedErrorForNativeLoginError:(id)arg1;
+ (id)activeSessionIfOpen;
+ (id)activeSessionIfExists;
+ (BOOL)openActiveSessionWithPermissions:(id)arg1 allowLoginUI:(BOOL)arg2 loginBehavior:(int)arg3 isRead:(BOOL)arg4 defaultAudience:(int)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (BOOL)openActiveSessionWithPermissions:(id)arg1 allowLoginUI:(BOOL)arg2 allowSystemAccount:(BOOL)arg3 isRead:(BOOL)arg4 defaultAudience:(int)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)renewSystemCredentials:(CDUnknownBlockType)arg1;
+ (id)defaultUrlSchemeSuffix;
+ (void)setDefaultUrlSchemeSuffix:(id)arg1;
+ (id)defaultAppID;
+ (void)setDefaultAppID:(id)arg1;
+ (id)setActiveSession:(id)arg1 userInfo:(id)arg2;
+ (id)setActiveSession:(id)arg1;
+ (id)activeSession;
+ (BOOL)openActiveSessionWithPublishPermissions:(id)arg1 defaultAudience:(int)arg2 allowLoginUI:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (BOOL)openActiveSessionWithReadPermissions:(id)arg1 allowLoginUI:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (BOOL)openActiveSessionWithPermissions:(id)arg1 loginBehavior:(int)arg2 isRead:(BOOL)arg3 defaultAudience:(int)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (BOOL)openActiveSessionWithPermissions:(id)arg1 allowLoginUI:(BOOL)arg2 defaultAudience:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (BOOL)openActiveSessionWithPermissions:(id)arg1 allowLoginUI:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (BOOL)openActiveSessionWithAllowLoginUI:(BOOL)arg1;
@property(retain) FBSessionAuthLogger *authLogger; // @synthesize authLogger=_authLogger;
@property(retain) FBSessionAppEventsState *appEventsState; // @synthesize appEventsState=_appEventsState;
@property(retain) NSThread *affinitizedThread; // @synthesize affinitizedThread=_affinitizedThread;
@property(retain) FBLoginDialog *loginDialog; // @synthesize loginDialog=_loginDialog;
@property(copy) CDUnknownBlockType reauthorizeHandler; // @synthesize reauthorizeHandler=_reauthorizeHandler;
@property(copy) CDUnknownBlockType loginHandler; // @synthesize loginHandler=_loginHandler;
@property(copy) NSDate *attemptedPermissionsRefreshDate; // @synthesize attemptedPermissionsRefreshDate=_attemptedPermissionsRefreshDate;
@property(copy) NSDate *attemptedRefreshDate; // @synthesize attemptedRefreshDate=_attemptedRefreshDate;
@property(retain) FBSessionTokenCachingStrategy *tokenCachingStrategy; // @synthesize tokenCachingStrategy=_tokenCachingStrategy;
@property BOOL isRepairing; // @synthesize isRepairing=_isRepairing;
@property int lastRequestedSystemAudience; // @synthesize lastRequestedSystemAudience=_lastRequestedSystemAudience;
@property(copy) NSArray *initializedPermissions; // @synthesize initializedPermissions=_initializedPermissions;
@property(copy) FBAccessTokenData *accessTokenData; // @synthesize accessTokenData=_accessTokenData;
@property(copy) NSString *appID; // @synthesize appID=_appID;
@property int state; // @synthesize state=_state;
- (id)description;
- (void)closeAndClearTokenInformation:(id)arg1;
- (BOOL)openFromAccessTokenData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 raiseExceptionIfInvalidState:(BOOL)arg3;
- (id)jsonClientStateWithDictionary:(id)arg1;
- (id)errorLoginFailedWithReason:(id)arg1 errorCode:(id)arg2 innerError:(id)arg3 localizedDescription:(id)arg4;
- (id)errorLoginFailedWithReason:(id)arg1 errorCode:(id)arg2 innerError:(id)arg3;
@property(readonly) NSString *appBaseUrl;
- (void)callReauthorizeHandlerAndClearState:(id)arg1;
- (void)transitionAndCallHandlerWithState:(int)arg1 error:(id)arg2 tokenData:(id)arg3 shouldCache:(BOOL)arg4;
- (void)fbDialogNotLogin:(BOOL)arg1;
- (void)fbDialogLogin:(id)arg1 expirationDate:(id)arg2 params:(id)arg3;
- (void)checkThreadAffinity;
- (void)clearAffinitizedThread;
- (void)refreshPermissions:(id)arg1;
- (BOOL)shouldRefreshPermissions;
- (BOOL)shouldExtendAccessToken;
- (void)refreshAccessToken:(id)arg1 expirationDate:(id)arg2;
- (void)authorizeRequestWasImplicitlyCancelled;
- (void)completeReauthorizeWithAccessToken:(id)arg1 expirationDate:(id)arg2 permissions:(id)arg3;
- (void)repairWithHandler:(CDUnknownBlockType)arg1;
- (void)reauthorizeWithPermissions:(id)arg1 isRead:(BOOL)arg2 behavior:(int)arg3 defaultAudience:(int)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)validateReauthorizedAccessToken:(id)arg1 expirationDate:(id)arg2;
- (BOOL)handleReauthorize:(id)arg1 accessToken:(id)arg2;
- (BOOL)handleAuthorizationOpen:(id)arg1 accessToken:(id)arg2 loginType:(int)arg3;
- (void)authorizeUsingLoginDialog:(id)arg1;
- (BOOL)tryOpenURL:(id)arg1;
- (BOOL)authorizeUsingSafari:(id)arg1;
- (BOOL)authorizeUsingFacebookApplication:(id)arg1;
- (BOOL)isURLSchemeRegistered;
- (void)handleDidCompleteNativeLoginForAppCall:(id)arg1;
- (id)authorizeUsingFacebookNativeLoginWithPermissions:(id)arg1 defaultAudience:(int)arg2 clientState:(id)arg3;
- (id)getSystemAccountStoreAdapter;
- (void)authorizeUsingSystemAccountStore:(id)arg1 defaultAudience:(int)arg2 isReauthorize:(BOOL)arg3;
- (void)logIntegratedAuthAppEvent:(id)arg1 permissions:(id)arg2;
- (void)setLoginTypeOfPendingOpenUrlCallback:(int)arg1;
- (void)retryableAuthorizeWithPermissions:(id)arg1 defaultAudience:(int)arg2 integratedAuth:(BOOL)arg3 FBAppAuth:(BOOL)arg4 safariAuth:(BOOL)arg5 fallback:(BOOL)arg6 isReauthorize:(BOOL)arg7 canFetchAppSettings:(BOOL)arg8;
- (void)authorizeWithPermissions:(id)arg1 defaultAudience:(int)arg2 integratedAuth:(BOOL)arg3 FBAppAuth:(BOOL)arg4 safariAuth:(BOOL)arg5 fallback:(BOOL)arg6 isReauthorize:(BOOL)arg7 canFetchAppSettings:(BOOL)arg8;
- (void)authorizeWithPermissions:(id)arg1 behavior:(int)arg2 defaultAudience:(int)arg3 isReauthorize:(BOOL)arg4;
- (BOOL)transitionToState:(int)arg1 withAccessTokenData:(id)arg2 shouldCache:(BOOL)arg3;
- (void)setStateChangeHandler:(CDUnknownBlockType)arg1;
@property(copy) NSString *urlSchemeSuffix;
@property(readonly) BOOL isOpen;
- (void)handleDidBecomeActive;
- (BOOL)openFromAccessTokenData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)handleOpenURL:(id)arg1;
- (BOOL)handleAuthorizationCallbacks:(id)arg1 params:(id)arg2 loginType:(int)arg3;
- (void)closeAndClearTokenInformation;
- (void)close;
- (void)requestNewPublishPermissions:(id)arg1 defaultAudience:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)requestNewReadPermissions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reauthorizeWithPublishPermissions:(id)arg1 defaultAudience:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)reauthorizeWithReadPermissions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reauthorizeWithPermissions:(id)arg1 behavior:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)openWithBehavior:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly) int loginType;
@property(readonly) NSDate *expirationDate;
@property(readonly) NSString *accessToken;
- (id)refreshDate;
@property(readonly) NSArray *permissions;
- (void)dealloc;
- (BOOL)initializeFromCachedToken:(id)arg1 withPermissions:(id)arg2;
- (id)initWithAppID:(id)arg1 permissions:(id)arg2 defaultAudience:(int)arg3 urlSchemeSuffix:(id)arg4 tokenCacheStrategy:(id)arg5;
- (id)initWithAppID:(id)arg1 permissions:(id)arg2 urlSchemeSuffix:(id)arg3 tokenCacheStrategy:(id)arg4;
- (id)initWithPermissions:(id)arg1;
- (id)init;

@end

