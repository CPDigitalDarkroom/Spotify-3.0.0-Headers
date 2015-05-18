//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AsyncReadPacket, AsyncWritePacket, NSArray, NSMutableArray, NSMutableData, NSTimer;

@interface AsyncSocket : NSObject
{
    struct __CFSocket *theSocket4;
    struct __CFSocket *theSocket6;
    struct __CFReadStream *theReadStream;
    struct __CFWriteStream *theWriteStream;
    struct __CFRunLoopSource *theSource4;
    struct __CFRunLoopSource *theSource6;
    struct __CFRunLoop *theRunLoop;
    struct {
        int version;
        void *info;
        CDUnknownFunctionPointerType retain;
        CDUnknownFunctionPointerType release;
        CDUnknownFunctionPointerType copyDescription;
    } theContext;
    NSArray *theRunLoopModes;
    NSTimer *theConnectTimer;
    NSMutableArray *theReadQueue;
    AsyncReadPacket *theCurrentRead;
    NSTimer *theReadTimer;
    NSMutableData *partialReadBuffer;
    NSMutableArray *theWriteQueue;
    AsyncWritePacket *theCurrentWrite;
    NSTimer *theWriteTimer;
    id theDelegate;
    unsigned short theFlags;
    long theUserData;
}

+ (id)ZeroData;
+ (id)LFData;
+ (id)CRData;
+ (id)CRLFData;
- (void)doCFWriteStreamCallback:(unsigned long)arg1 forStream:(struct __CFWriteStream *)arg2;
- (void)doCFReadStreamCallback:(unsigned long)arg1 forStream:(struct __CFReadStream *)arg2;
- (void)doCFSocketCallback:(unsigned long)arg1 forSocket:(struct __CFSocket *)arg2 withAddress:(id)arg3 withData:(const void *)arg4;
- (void)onTLSHandshakeSuccessful;
- (void)maybeStartTLS;
- (void)startTLS:(id)arg1;
- (void)doWriteTimeout:(id)arg1;
- (void)endCurrentWrite;
- (void)completeCurrentWrite;
- (void)doSendBytes;
- (BOOL)canAcceptBytes;
- (void)maybeDequeueWrite;
- (void)scheduleDequeueWrite;
- (void)writeData:(id)arg1 withTimeout:(double)arg2 tag:(long)arg3;
- (void)doReadTimeout:(id)arg1;
- (void)endCurrentRead;
- (void)completeCurrentRead;
- (void)doBytesAvailable;
- (long)readIntoBuffer:(char *)arg1 maxLength:(long)arg2;
- (BOOL)hasBytesAvailable;
- (void)maybeDequeueRead;
- (void)scheduleDequeueRead;
- (void)readDataWithTimeout:(double)arg1 tag:(long)arg2;
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 maxLength:(long)arg3 tag:(long)arg4;
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 tag:(long)arg3;
- (void)readDataToLength:(long)arg1 withTimeout:(double)arg2 tag:(long)arg3;
- (id)description;
- (BOOL)areStreamsConnected;
- (BOOL)isSocketConnected;
- (BOOL)isIPv6;
- (BOOL)isIPv4;
- (id)localAddress;
- (id)connectedAddress;
- (unsigned short)addressPort:(struct __CFData *)arg1;
- (id)addressHost:(struct __CFData *)arg1;
- (unsigned short)localPort:(struct __CFSocket *)arg1;
- (id)localHost:(struct __CFSocket *)arg1;
- (unsigned short)connectedPort:(struct __CFSocket *)arg1;
- (id)connectedHost:(struct __CFSocket *)arg1;
- (unsigned short)localPort;
- (id)localHost;
- (unsigned short)connectedPort;
- (id)connectedHost;
- (BOOL)isConnected;
- (id)errorFromCFStreamError:(CDStruct_1ef3fb1f)arg1;
- (id)getWriteTimeoutError;
- (id)getReadTimeoutError;
- (id)getReadMaxedOutError;
- (id)getConnectTimeoutError;
- (id)getAbortError;
- (id)getStreamError;
- (id)getSocketError;
- (id)getErrnoError;
- (id)unreadData;
- (void)maybeScheduleDisconnect;
- (void)disconnectAfterReadingAndWriting;
- (void)disconnectAfterWriting;
- (void)disconnectAfterReading;
- (void)disconnect;
- (void)close;
- (void)emptyQueues;
- (void)recoverUnreadData;
- (void)closeWithError:(id)arg1;
- (BOOL)setSocketFromStreamsAndReturnError:(id *)arg1;
- (void)doStreamOpen;
- (BOOL)openStreamsAndReturnError:(id *)arg1;
- (BOOL)configureStreamsAndReturnError:(id *)arg1;
- (BOOL)attachStreamsToRunLoop:(id)arg1 error:(id *)arg2;
- (BOOL)createStreamsToHost:(id)arg1 onPort:(unsigned short)arg2 error:(id *)arg3;
- (BOOL)createStreamsFromNative:(int)arg1 error:(id *)arg2;
- (void)doSocketOpen:(struct __CFSocket *)arg1 withCFSocketError:(long)arg2;
- (void)doAcceptWithSocket:(int)arg1;
- (BOOL)connectSocketToAddress:(id)arg1 error:(id *)arg2;
- (BOOL)configureSocketAndReturnError:(id *)arg1;
- (BOOL)attachSocketsToRunLoop:(id)arg1 error:(id *)arg2;
- (BOOL)createSocketForAddress:(id)arg1 error:(id *)arg2;
- (struct __CFSocket *)newAcceptSocketForAddress:(id)arg1 error:(id *)arg2;
- (void)doConnectTimeout:(id)arg1;
- (void)endConnectTimeout;
- (void)startConnectTimeout:(double)arg1;
- (BOOL)connectToAddress:(id)arg1 withTimeout:(double)arg2 error:(id *)arg3;
- (BOOL)connectToAddress:(id)arg1 error:(id *)arg2;
- (BOOL)connectToHost:(id)arg1 onPort:(unsigned short)arg2 withTimeout:(double)arg3 error:(id *)arg4;
- (BOOL)connectToHost:(id)arg1 onPort:(unsigned short)arg2 error:(id *)arg3;
- (BOOL)acceptOnInterface:(id)arg1 port:(unsigned short)arg2 error:(id *)arg3;
- (BOOL)acceptOnPort:(unsigned short)arg1 error:(id *)arg2;
- (id)runLoopModes;
- (BOOL)setRunLoopModes:(id)arg1;
- (BOOL)moveToRunLoop:(id)arg1;
- (void)enablePreBuffering;
- (void)runLoopUnscheduleWriteStream;
- (void)runLoopUnscheduleReadStream;
- (void)runLoopRemoveTimer:(id)arg1;
- (void)runLoopAddTimer:(id)arg1;
- (void)runLoopRemoveSource:(struct __CFRunLoopSource *)arg1;
- (void)runLoopAddSource:(struct __CFRunLoopSource *)arg1;
- (float)progressOfWriteReturningTag:(long *)arg1 bytesDone:(int *)arg2 total:(int *)arg3;
- (float)progressOfReadReturningTag:(long *)arg1 bytesDone:(int *)arg2 total:(int *)arg3;
- (struct __CFWriteStream *)getCFWriteStream;
- (struct __CFReadStream *)getCFReadStream;
- (struct __CFSocket *)getCFSocket;
- (BOOL)canSafelySetDelegate;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setUserData:(long)arg1;
- (long)userData;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 userData:(long)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

