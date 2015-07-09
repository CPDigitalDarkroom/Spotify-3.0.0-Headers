//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageClientEvent3 : SPTLogMessage
{
    NSString *_sourceValue;
    NSString *_contextValue;
    NSString *_eventValue;
    NSString *_eventVersionValue;
    NSString *_testVersionValue;
    NSString *_sourceVersionValue;
    NSString *_sourceVendorValue;
    NSString *_jsonDataValue;
}

+ (id)messageWithSource:(id)arg1 context:(id)arg2 event:(id)arg3 eventVersion:(id)arg4 testVersion:(id)arg5 sourceVersion:(id)arg6 sourceVendor:(id)arg7 jsonData:(id)arg8;
@property(retain, nonatomic) NSString *jsonDataValue; // @synthesize jsonDataValue=_jsonDataValue;
@property(retain, nonatomic) NSString *sourceVendorValue; // @synthesize sourceVendorValue=_sourceVendorValue;
@property(retain, nonatomic) NSString *sourceVersionValue; // @synthesize sourceVersionValue=_sourceVersionValue;
@property(retain, nonatomic) NSString *testVersionValue; // @synthesize testVersionValue=_testVersionValue;
@property(retain, nonatomic) NSString *eventVersionValue; // @synthesize eventVersionValue=_eventVersionValue;
@property(retain, nonatomic) NSString *eventValue; // @synthesize eventValue=_eventValue;
@property(retain, nonatomic) NSString *contextValue; // @synthesize contextValue=_contextValue;
@property(retain, nonatomic) NSString *sourceValue; // @synthesize sourceValue=_sourceValue;
- (void).cxx_destruct;

@end

