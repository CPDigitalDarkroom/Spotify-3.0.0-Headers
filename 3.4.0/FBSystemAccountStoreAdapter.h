//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccountStore, ACAccountType;

@interface FBSystemAccountStoreAdapter : NSObject
{
    _Bool _forceBlockingRenew;
    ACAccountStore *_accountStore;
    ACAccountType *_accountTypeFB;
}

+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;
- (id)renewSystemAuthorizationAsTask;
- (void)renewSystemAuthorization:(CDUnknownBlockType)arg1;
- (void)requestAccessToFacebookAccountStore:(id)arg1 session:(id)arg2 retrying:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
- (void)requestAccessToFacebookAccountStore:(id)arg1 defaultAudience:(unsigned long long)arg2 isReauthorize:(_Bool)arg3 appID:(id)arg4 session:(id)arg5 handler:(CDUnknownBlockType)arg6;
- (id)requestAccessToFacebookAccountStoreAsTask:(id)arg1;
@property(readonly) _Bool canRequestAccessWithoutUI;
@property _Bool forceBlockingRenew;
@property(readonly, retain, nonatomic) ACAccountType *accountTypeFB;
@property(readonly, retain, nonatomic) ACAccountStore *accountStore;
- (void)dealloc;
- (id)init;

@end

