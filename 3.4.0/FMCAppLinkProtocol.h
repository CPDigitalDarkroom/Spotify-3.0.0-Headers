//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMCAbstractProtocol.h"

#import "FMCProtocolListener.h"

@class FMCApplinkProtocolRecievedMessageRouter, FMCPrioritizedObjectCollection, NSMutableData, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface FMCAppLinkProtocol : FMCAbstractProtocol <FMCProtocolListener>
{
    unsigned int _messageID;
    NSObject<OS_dispatch_queue> *_recieveQueue;
    NSObject<OS_dispatch_queue> *_sendQueue;
    FMCPrioritizedObjectCollection *_prioritizedCollection;
    NSMutableDictionary *_sessionIDs;
    _Bool _alreadyDestructed;
    unsigned char _version;
    unsigned char _maxVersionSupportedByHeadUnit;
    NSMutableData *_recieveBuffer;
    FMCApplinkProtocolRecievedMessageRouter *_messageRouter;
}

@property(retain) FMCApplinkProtocolRecievedMessageRouter *messageRouter; // @synthesize messageRouter=_messageRouter;
@property(retain) NSMutableData *recieveBuffer; // @synthesize recieveBuffer=_recieveBuffer;
@property unsigned char maxVersionSupportedByHeadUnit; // @synthesize maxVersionSupportedByHeadUnit=_maxVersionSupportedByHeadUnit;
@property unsigned char version; // @synthesize version=_version;
- (void).cxx_destruct;
- (void)dealloc;
- (void)dispose;
- (void)destructObjects;
- (void)onError:(id)arg1 exception:(id)arg2;
- (void)onProtocolClosed;
- (void)onProtocolOpened;
- (void)onProtocolMessageReceived:(id)arg1;
- (void)handleProtocolSessionStarted:(unsigned char)arg1 sessionID:(unsigned char)arg2 version:(unsigned char)arg3;
- (void)sendRawData:(id)arg1 withServiceType:(unsigned char)arg2;
- (void)sendRawDataStream:(id)arg1 withServiceType:(unsigned char)arg2;
- (void)sendHeartbeat;
- (void)processMessages;
- (void)handleBytesFromTransport:(id)arg1;
- (void)sendDataToTransport:(id)arg1 withPriority:(long long)arg2;
- (void)logRPCSend:(id)arg1;
- (void)sendRPCRequest:(id)arg1;
- (void)sendEndSessionWithType:(unsigned char)arg1;
- (void)sendStartSessionWithType:(unsigned char)arg1;
- (unsigned char)retrieveSessionIDforServiceType:(unsigned char)arg1;
- (void)storeSessionID:(unsigned char)arg1 forServiceType:(unsigned char)arg2;
- (id)init;

@end

