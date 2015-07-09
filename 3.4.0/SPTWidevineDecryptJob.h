//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSError;

@interface SPTWidevineDecryptJob : NSObject
{
    _Bool _finished;
    CDUnknownBlockType _completion;
    NSData *_encryptedData;
    NSData *_keyID;
    NSData *_iv;
    NSData *_decryptedData;
    NSError *_error;
    CDUnknownBlockType _doneBlock;
}

@property(copy, nonatomic) CDUnknownBlockType doneBlock; // @synthesize doneBlock=_doneBlock;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSData *decryptedData; // @synthesize decryptedData=_decryptedData;
@property(readonly, nonatomic) NSData *iv; // @synthesize iv=_iv;
@property(readonly, nonatomic) NSData *keyID; // @synthesize keyID=_keyID;
@property(readonly, nonatomic) NSData *encryptedData; // @synthesize encryptedData=_encryptedData;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)done;
- (void)completeWithData:(id)arg1 error:(id)arg2;
- (void)completeWithData:(id)arg1;
- (void)failWithError:(id)arg1;
- (void)cancel;
- (id)initWithEncryptedData:(id)arg1 keyID:(id)arg2 iv:(id)arg3;

@end

