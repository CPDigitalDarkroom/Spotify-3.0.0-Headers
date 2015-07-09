//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSURL, SPTLoginWebAuthTokenRequest, SPWebTokenRequest;

@protocol SPTLoginWebAuthTokenRequestDelegate <NSObject>
- (void)webAuthTokenRequest:(SPTLoginWebAuthTokenRequest *)arg1 didFailWithError:(NSError *)arg2;
- (void)webAuthTokenRequest:(SPTLoginWebAuthTokenRequest *)arg1 didFinishWithURL:(NSURL *)arg2;
- (void)webAuthTokenRequestDidStart:(SPTLoginWebAuthTokenRequest *)arg1;

@optional
- (SPWebTokenRequest *)webAuthTokenRequest:(SPTLoginWebAuthTokenRequest *)arg1 createWebTokenRequestForURL:(NSURL *)arg2;
@end
