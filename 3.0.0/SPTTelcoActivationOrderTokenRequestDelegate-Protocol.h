//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSError, NSString, SPTTelcoActivationOrderTokenRequest;

@protocol SPTTelcoActivationOrderTokenRequestDelegate <NSObject>
- (void)orderTokenRequest:(SPTTelcoActivationOrderTokenRequest *)arg1 didFailWithError:(NSError *)arg2;
- (void)orderTokenRequest:(SPTTelcoActivationOrderTokenRequest *)arg1 didFinishWithOrderToken:(NSString *)arg2 responseData:(NSData *)arg3;
- (void)orderTokenRequestDidStart:(SPTTelcoActivationOrderTokenRequest *)arg1;
@end

