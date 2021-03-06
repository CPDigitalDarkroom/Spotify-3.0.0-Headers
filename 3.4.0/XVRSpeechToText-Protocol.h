//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSInputStream, NSString;

@protocol XVRSpeechToText <NSObject>

@optional
@property int streamingBytesWritten;
@property(retain) NSString *xvrUrl;
- (void)speechEnded;
- (void)cancel:(void (^)(void))arg1;
- (void)convertFromStream:(NSInputStream *)arg1 encoding:(int)arg2 configuration:(id <XVRSpeechToTextConfiguration>)arg3 result:(void (^)(XVRSpeechRecognitionResult *, NSError *))arg4;
- (void)convertFromFile:(NSString *)arg1 encoding:(int)arg2;
- (id)initWithEndpointUrl:(NSString *)arg1 configuration:(NSDictionary *)arg2;
@end

