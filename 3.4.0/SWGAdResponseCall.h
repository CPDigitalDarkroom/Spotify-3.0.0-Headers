//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SWGObject.h"

@class NSArray, NSNumber, NSString, SWGDiagnostics;

@interface SWGAdResponseCall : SWGObject
{
    NSString *_errorMessage;
    NSString *_errorCode;
    NSString *_actionType;
    NSString *_callPhoneNumber;
    NSArray *_actionText;
    NSString *_callType;
    NSArray *_moreInfoText;
    NSNumber *_moreInfoUttered;
    NSNumber *_success;
    NSNumber *_deferred;
    NSString *_responseTimestamp;
    NSString *_bluetoothDeviceName;
    NSString *_cancellationMethod;
    NSString *_cancellationDetails;
    NSNumber *_canceled;
    NSNumber *_touchClicked;
    NSString *_adId;
    SWGDiagnostics *_diagnostics;
    NSString *_sessionKey;
    NSString *_requestKey;
    NSString *_email;
}

@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSString *requestKey; // @synthesize requestKey=_requestKey;
@property(retain, nonatomic) NSString *sessionKey; // @synthesize sessionKey=_sessionKey;
@property(retain, nonatomic) SWGDiagnostics *diagnostics; // @synthesize diagnostics=_diagnostics;
@property(retain, nonatomic) NSString *adId; // @synthesize adId=_adId;
@property(retain, nonatomic) NSNumber *touchClicked; // @synthesize touchClicked=_touchClicked;
@property(retain, nonatomic) NSNumber *canceled; // @synthesize canceled=_canceled;
@property(retain, nonatomic) NSString *cancellationDetails; // @synthesize cancellationDetails=_cancellationDetails;
@property(retain, nonatomic) NSString *cancellationMethod; // @synthesize cancellationMethod=_cancellationMethod;
@property(retain, nonatomic) NSString *bluetoothDeviceName; // @synthesize bluetoothDeviceName=_bluetoothDeviceName;
@property(retain, nonatomic) NSString *responseTimestamp; // @synthesize responseTimestamp=_responseTimestamp;
@property(retain, nonatomic) NSNumber *deferred; // @synthesize deferred=_deferred;
@property(retain, nonatomic) NSNumber *success; // @synthesize success=_success;
@property(retain, nonatomic) NSNumber *moreInfoUttered; // @synthesize moreInfoUttered=_moreInfoUttered;
@property(retain, nonatomic) NSArray *moreInfoText; // @synthesize moreInfoText=_moreInfoText;
@property(retain, nonatomic) NSString *callType; // @synthesize callType=_callType;
@property(retain, nonatomic) NSArray *actionText; // @synthesize actionText=_actionText;
@property(retain, nonatomic) NSString *callPhoneNumber; // @synthesize callPhoneNumber=_callPhoneNumber;
@property(retain, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
- (void).cxx_destruct;
- (id)asDictionary;
- (id)initWithValues:(id)arg1;
- (id)errorMessage:(id)arg1 errorCode:(id)arg2 actionType:(id)arg3 callPhoneNumber:(id)arg4 actionText:(id)arg5 callType:(id)arg6 moreInfoText:(id)arg7 moreInfoUttered:(id)arg8 success:(id)arg9 deferred:(id)arg10 responseTimestamp:(id)arg11 bluetoothDeviceName:(id)arg12 cancellationMethod:(id)arg13 cancellationDetails:(id)arg14 canceled:(id)arg15 touchClicked:(id)arg16 adId:(id)arg17 diagnostics:(id)arg18 sessionKey:(id)arg19 requestKey:(id)arg20 email:(id)arg21;

@end
