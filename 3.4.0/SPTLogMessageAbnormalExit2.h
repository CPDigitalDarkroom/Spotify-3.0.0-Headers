//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageAbnormalExit2 : SPTLogMessage
{
    _Bool _foundCrashDumpValue;
    NSString *_uuidValue;
    long long _timestampValue;
}

+ (id)messageWithFoundCrashDump:(_Bool)arg1 uuid:(id)arg2 timestamp:(long long)arg3;
@property(nonatomic) long long timestampValue; // @synthesize timestampValue=_timestampValue;
@property(retain, nonatomic) NSString *uuidValue; // @synthesize uuidValue=_uuidValue;
@property(nonatomic) _Bool foundCrashDumpValue; // @synthesize foundCrashDumpValue=_foundCrashDumpValue;
- (void).cxx_destruct;

@end
