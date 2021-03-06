//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XVRReceiver.h"

@class NSInputStream, NSOutputStream, NSString;

@interface XVRFLACReceiver : NSObject <XVRReceiver>
{
    int _compressedLength;
    NSInputStream *_audioStream;
    NSOutputStream *_outputStream;
    CDStruct_e2d27cc5 *_flacState;
}

@property CDStruct_e2d27cc5 *flacState; // @synthesize flacState=_flacState;
@property(retain) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property int compressedLength; // @synthesize compressedLength=_compressedLength;
@property(retain) NSInputStream *audioStream; // @synthesize audioStream=_audioStream;
- (void).cxx_destruct;
- (int)bytesWritten;
- (void)speechDetected;
- (void)finishReceiving;
- (int)encoding;
- (void)dealloc;
- (void *)onBufferCallback;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

