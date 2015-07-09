//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSDate, NSString;

@interface FBAccessTokenData : NSObject <NSCopying>
{
    NSString *_accessToken;
    NSString *_appID;
    NSString *_userID;
    NSArray *_permissions;
    NSArray *_declinedPermissions;
    NSDate *_expirationDate;
    unsigned long long _loginType;
    NSDate *_refreshDate;
    NSDate *_permissionsRefreshDate;
}

+ (id)createTokenFromString:(id)arg1 permissions:(id)arg2 declinedPermissions:(id)arg3 expirationDate:(id)arg4 loginType:(unsigned long long)arg5 refreshDate:(id)arg6 permissionsRefreshDate:(id)arg7 appID:(id)arg8 userID:(id)arg9;
+ (id)createTokenFromString:(id)arg1 permissions:(id)arg2 expirationDate:(id)arg3 loginType:(unsigned long long)arg4 refreshDate:(id)arg5 permissionsRefreshDate:(id)arg6 appID:(id)arg7;
+ (id)createTokenFromString:(id)arg1 permissions:(id)arg2 expirationDate:(id)arg3 loginType:(unsigned long long)arg4 refreshDate:(id)arg5 permissionsRefreshDate:(id)arg6;
+ (id)createTokenFromString:(id)arg1 permissions:(id)arg2 expirationDate:(id)arg3 loginType:(unsigned long long)arg4 refreshDate:(id)arg5;
+ (id)createTokenFromDictionary:(id)arg1;
+ (id)createTokenFromFacebookURL:(id)arg1 appID:(id)arg2 urlSchemeSuffix:(id)arg3;
@property(copy, nonatomic) NSDate *permissionsRefreshDate; // @synthesize permissionsRefreshDate=_permissionsRefreshDate;
@property(copy, nonatomic) NSDate *refreshDate; // @synthesize refreshDate=_refreshDate;
@property(readonly, nonatomic) unsigned long long loginType; // @synthesize loginType=_loginType;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSArray *declinedPermissions; // @synthesize declinedPermissions=_declinedPermissions;
@property(copy, nonatomic) NSArray *permissions; // @synthesize permissions=_permissions;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(readonly, copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
- (id)description;
- (id)dictionary;
- (_Bool)isEqualToAccessTokenData:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithToken:(id)arg1 permissions:(id)arg2 declinedPermissions:(id)arg3 expirationDate:(id)arg4 loginType:(unsigned long long)arg5 refreshDate:(id)arg6 permissionsRefreshDate:(id)arg7 appID:(id)arg8 userID:(id)arg9;

@end

