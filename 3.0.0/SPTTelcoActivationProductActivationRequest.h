//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface SPTTelcoActivationProductActivationRequest : NSObject
{
    id <SPTTelcoActivationProductActivationRequestDelegate> _delegate;
    NSData *_orderTokenResponseBody;
}

@property(copy, nonatomic) NSData *orderTokenResponseBody; // @synthesize orderTokenResponseBody=_orderTokenResponseBody;
@property(nonatomic) __weak id <SPTTelcoActivationProductActivationRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleJSONResponse:(id)arg1;
- (void)invalidate;
- (void)start;
- (id)initWithOrderTokenResponseBody:(id)arg1 delegate:(id)arg2;

@end

