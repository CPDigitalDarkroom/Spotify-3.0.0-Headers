//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface XAXMLogger : NSObject
{
    long long level;
}

+ (id)errorDescription:(id)arg1;
+ (id)sharedInstance;
@property long long level; // @synthesize level;
- (void)debugAudioSessionCallback;
- (id)debugAudioSessionCommand;
- (void)debugAudioSession:(id)arg1;
- (id)trimToMethodNameOnly:(id)arg1;
- (id)trimToClassNameOnly:(id)arg1;
- (id)cleanClassInfo:(id)arg1;
- (void)log:(id)arg1;
- (long long)logLevel;
- (void)setLogLevel:(long long)arg1;
- (void)debug:(id)arg1:(int)arg2:(id)arg3;
- (void)info:(id)arg1:(int)arg2:(id)arg3;
- (void)warn:(id)arg1:(int)arg2:(id)arg3;
- (void)error:(id)arg1:(int)arg2:(id)arg3;
- (void)errorWithPayload:(id)arg1:(id)arg2:(int)arg3:(id)arg4;
- (id)init;

@end

