//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTLoginWebAuthTokenRequestDelegate.h"

@class NSString, SPTCoreTime, SPTLoginWebAuthTokenRequest;

@interface SPTWebAuthController : NSObject <SPTLoginWebAuthTokenRequestDelegate>
{
    SPTLoginWebAuthTokenRequest *_request;
    SPTCoreTime *_coreTime;
}

@property(nonatomic) __weak SPTCoreTime *coreTime; // @synthesize coreTime=_coreTime;
@property(retain, nonatomic) SPTLoginWebAuthTokenRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)webAuthTokenRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)webAuthTokenRequest:(id)arg1 didFinishWithURL:(id)arg2;
- (void)webAuthTokenRequestDidStart:(id)arg1;
- (void)handleWebAuthForURL:(id)arg1;
- (id)initWithCoreTime:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

