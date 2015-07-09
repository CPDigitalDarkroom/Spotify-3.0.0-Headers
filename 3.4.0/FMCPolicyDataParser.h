//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface FMCPolicyDataParser : NSObject
{
    unsigned char _protocolVersion;
    _Bool _isResponseRequired;
    _Bool _isHighBandwidth;
    _Bool _isSigned;
    _Bool _isEncrypted;
    _Bool _hasESN;
    unsigned char _serviceType;
    unsigned char _commandType;
    _Bool _CPUDestination;
    unsigned char _encryptionKeyIndex;
    unsigned char _messageStatus;
    unsigned int _payloadSize;
    unsigned int _moduleMessageId;
    unsigned int _serverMessageId;
    NSData *_ESN;
    NSData *_initializationVector;
    NSData *_payload;
    NSData *_signatureTag;
}

@property(retain) NSData *signatureTag; // @synthesize signatureTag=_signatureTag;
@property(retain) NSData *payload; // @synthesize payload=_payload;
@property(retain) NSData *initializationVector; // @synthesize initializationVector=_initializationVector;
@property unsigned char messageStatus; // @synthesize messageStatus=_messageStatus;
@property unsigned int serverMessageId; // @synthesize serverMessageId=_serverMessageId;
@property unsigned int moduleMessageId; // @synthesize moduleMessageId=_moduleMessageId;
@property(retain) NSData *ESN; // @synthesize ESN=_ESN;
@property unsigned int payloadSize; // @synthesize payloadSize=_payloadSize;
@property unsigned char encryptionKeyIndex; // @synthesize encryptionKeyIndex=_encryptionKeyIndex;
@property _Bool CPUDestination; // @synthesize CPUDestination=_CPUDestination;
@property unsigned char commandType; // @synthesize commandType=_commandType;
@property unsigned char serviceType; // @synthesize serviceType=_serviceType;
@property _Bool hasESN; // @synthesize hasESN=_hasESN;
@property _Bool isEncrypted; // @synthesize isEncrypted=_isEncrypted;
@property _Bool isSigned; // @synthesize isSigned=_isSigned;
@property _Bool isHighBandwidth; // @synthesize isHighBandwidth=_isHighBandwidth;
@property _Bool isResponseRequired; // @synthesize isResponseRequired=_isResponseRequired;
@property unsigned char protocolVersion; // @synthesize protocolVersion=_protocolVersion;
- (void).cxx_destruct;
- (id)description;
- (void)parsePolicyData:(id)arg1;
- (id)unwrap:(id)arg1;

@end

