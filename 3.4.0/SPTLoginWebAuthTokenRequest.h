//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, SPTCoreTime, SPWebTokenRequest;

@interface SPTLoginWebAuthTokenRequest : NSObject
{
    NSURL *_requestURL;
    id <SPTLoginWebAuthTokenRequestDelegate> _delegate;
    SPWebTokenRequest *_webTokenRequest;
    SPTCoreTime *_coreTime;
}

@property(retain, nonatomic) SPTCoreTime *coreTime; // @synthesize coreTime=_coreTime;
@property(retain, nonatomic) SPWebTokenRequest *webTokenRequest; // @synthesize webTokenRequest=_webTokenRequest;
@property(nonatomic) __weak id <SPTLoginWebAuthTokenRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSURL *requestURL; // @synthesize requestURL=_requestURL;
- (void).cxx_destruct;
- (_Bool)verifyReturnURLString:(id)arg1 withSignatureData:(id)arg2 signatureExpiry:(id)arg3 error:(id *)arg4;
- (double)getCurrentTime;
- (id)generateResponseURLWithToken:(id)arg1 forwardURL:(id)arg2 signatureExpiry:(id)arg3 signatureData:(id)arg4 error:(id *)arg5;
- (id)createWebTokenRequestForURL:(id)arg1;
- (void)requestWebTokenWithBlock:(CDUnknownBlockType)arg1;
- (id)queryItemsFromURL:(id)arg1;
- (void)failWithReason:(id)arg1;
- (id)errorWithReason:(id)arg1;
- (_Bool)extractParametersFromURL:(id)arg1 forwardURL:(id *)arg2 signatureExpiry:(id *)arg3 signatureData:(id *)arg4 error:(id *)arg5;
- (void)invalidate;
- (void)start;
- (id)initWithRequestURL:(id)arg1 coreTime:(id)arg2 delegate:(id)arg3;

@end

