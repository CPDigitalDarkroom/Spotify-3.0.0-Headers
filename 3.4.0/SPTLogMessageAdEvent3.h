//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageAdEvent3 : SPTLogMessage
{
    NSString *_genderValue;
    NSString *_agegroupValue;
    NSString *_lineitemIdValue;
    NSString *_creativeIdValue;
    NSString *_adFormatValue;
    NSString *_sourceValue;
    NSString *_contextValue;
    NSString *_eventValue;
    NSString *_eventVersionValue;
    NSString *_jsondataValue;
    NSString *_sourceVersionValue;
    NSString *_slotValue;
    long long _msFromStartValue;
}

+ (id)messageWithGender:(id)arg1 agegroup:(id)arg2 lineitemId:(id)arg3 creativeId:(id)arg4 adFormat:(id)arg5 source:(id)arg6 context:(id)arg7 event:(id)arg8 eventVersion:(id)arg9 jsondata:(id)arg10 sourceVersion:(id)arg11 slot:(id)arg12 msFromStart:(long long)arg13;
@property(nonatomic) long long msFromStartValue; // @synthesize msFromStartValue=_msFromStartValue;
@property(retain, nonatomic) NSString *slotValue; // @synthesize slotValue=_slotValue;
@property(retain, nonatomic) NSString *sourceVersionValue; // @synthesize sourceVersionValue=_sourceVersionValue;
@property(retain, nonatomic) NSString *jsondataValue; // @synthesize jsondataValue=_jsondataValue;
@property(retain, nonatomic) NSString *eventVersionValue; // @synthesize eventVersionValue=_eventVersionValue;
@property(retain, nonatomic) NSString *eventValue; // @synthesize eventValue=_eventValue;
@property(retain, nonatomic) NSString *contextValue; // @synthesize contextValue=_contextValue;
@property(retain, nonatomic) NSString *sourceValue; // @synthesize sourceValue=_sourceValue;
@property(retain, nonatomic) NSString *adFormatValue; // @synthesize adFormatValue=_adFormatValue;
@property(retain, nonatomic) NSString *creativeIdValue; // @synthesize creativeIdValue=_creativeIdValue;
@property(retain, nonatomic) NSString *lineitemIdValue; // @synthesize lineitemIdValue=_lineitemIdValue;
@property(retain, nonatomic) NSString *agegroupValue; // @synthesize agegroupValue=_agegroupValue;
@property(retain, nonatomic) NSString *genderValue; // @synthesize genderValue=_genderValue;
- (void).cxx_destruct;

@end
