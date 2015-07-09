//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface TrialPaymentState : NSObject
{
    NSString *_type;
    NSString *_durationTimestamp;
    NSString *_expirationTimestamp;
    NSDate *_expirationDate;
    double _duration;
}

@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, copy, nonatomic) NSString *expirationTimestamp; // @synthesize expirationTimestamp=_expirationTimestamp;
@property(readonly, copy, nonatomic) NSString *durationTimestamp; // @synthesize durationTimestamp=_durationTimestamp;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithPaymentState:(id)arg1;

@end
