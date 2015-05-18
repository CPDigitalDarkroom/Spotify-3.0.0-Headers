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
    NSArray *_permissions;
    NSDate *_expirationDate;
    int _loginType;
    NSDate *_refreshDate;
    NSDate *_permissionsRefreshDate;
}

+ (id)createTokenFromString:(id)arg1 permissions:(id)arg2 expirationDate:(id)arg3 loginType:(int)arg4 refreshDate:(id)arg5 permissionsRefreshDate:(id)arg6;
+ (id)createTokenFromString:(id)arg1 permissions:(id)arg2 expirationDate:(id)arg3 loginType:(int)arg4 refreshDate:(id)arg5;
+ (id)createTokenFromDictionary:(id)arg1;
+ (id)createTokenFromFacebookURL:(id)arg1 appID:(id)arg2 urlSchemeSuffix:(id)arg3;
@property(copy, nonatomic) NSDate *permissionsRefreshDate; // @synthesize permissionsRefreshDate=_permissionsRefreshDate;
@property(copy, nonatomic) NSDate *refreshDate; // @synthesize refreshDate=_refreshDate;
@property(readonly, nonatomic) int loginType; // @synthesize loginType=_loginType;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSArray *permissions; // @synthesize permissions=_permissions;
@property(readonly, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
- (id)description;
- (id)dictionary;
- (BOOL)isEqualToAccessTokenData:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithToken:(id)arg1 permissions:(id)arg2 expirationDate:(id)arg3 loginType:(int)arg4 refreshDate:(id)arg5 permissionsRefreshDate:(id)arg6;

@end

