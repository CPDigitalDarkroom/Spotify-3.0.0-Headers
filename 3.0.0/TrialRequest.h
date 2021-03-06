//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SPApHermesController, SPApHermesRequest;

@interface TrialRequest : NSObject
{
    id <TrialRequestDelegate> _delegate;
    NSString *_country;
    NSString *_deviceId;
    SPApHermesController *_hermesController;
    SPApHermesRequest *_request;
}

@property(retain, nonatomic) SPApHermesRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) SPApHermesController *hermesController; // @synthesize hermesController=_hermesController;
@property(retain, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(nonatomic) __weak id <TrialRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)failWithError:(id)arg1;
- (void)finishWithResponse:(id)arg1;
- (void)cancel;
- (void)start;
- (void)dealloc;
- (id)initWithDeviceId:(id)arg1 withUserCountry:(id)arg2 hermesController:(id)arg3;

@end

