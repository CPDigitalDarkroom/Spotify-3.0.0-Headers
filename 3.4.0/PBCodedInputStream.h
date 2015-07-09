//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSInputStream, NSMutableData;

@interface PBCodedInputStream : NSObject
{
    NSMutableData *buffer;
    int bufferSize;
    int bufferSizeAfterLimit;
    int bufferPos;
    NSInputStream *input;
    int lastTag;
    int totalBytesRetired;
    int currentLimit;
    int recursionDepth;
    int recursionLimit;
    int sizeLimit;
}

+ (id)streamWithInputStream:(id)arg1;
+ (id)streamWithData:(id)arg1;
@property(retain) NSInputStream *input; // @synthesize input;
@property(retain) NSMutableData *buffer; // @synthesize buffer;
- (void)skipRawData:(int)arg1;
- (id)readRawData:(int)arg1;
- (BOOL)readRawByte;
- (_Bool)refillBuffer:(_Bool)arg1;
- (_Bool)isAtEnd;
- (int)bytesUntilLimit;
- (void)popLimit:(int)arg1;
- (void)recomputeBufferSizeAfterLimit;
- (int)pushLimit:(int)arg1;
- (void)resetSizeCounter;
- (int)setSizeLimit:(int)arg1;
- (int)setRecursionLimit:(int)arg1;
- (long long)readRawLittleEndian64;
- (int)readRawLittleEndian32;
- (long long)readRawVarint64;
- (int)readRawVarint32;
- (long long)readSInt64;
- (int)readSInt32;
- (long long)readSFixed64;
- (int)readSFixed32;
- (int)readEnum;
- (int)readUInt32;
- (id)readData;
- (void)readMessage:(id)arg1 extensionRegistry:(id)arg2;
- (void)readUnknownGroup:(int)arg1 builder:(id)arg2;
- (void)readGroup:(int)arg1 builder:(id)arg2 extensionRegistry:(id)arg3;
- (id)readString;
- (_Bool)readBool;
- (int)readFixed32;
- (long long)readFixed64;
- (int)readInt32;
- (long long)readInt64;
- (long long)readUInt64;
- (float)readFloat;
- (double)readDouble;
- (void)skipMessage;
- (_Bool)skipField:(int)arg1;
- (void)checkLastTagWas:(int)arg1;
- (int)readTag;
- (id)initWithInputStream:(id)arg1;
- (id)initWithData:(id)arg1;
- (void)commonInit;
- (void)dealloc;

@end

