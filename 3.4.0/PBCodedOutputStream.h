//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOutputStream, RingBuffer;

@interface PBCodedOutputStream : NSObject
{
    NSOutputStream *output;
    RingBuffer *buffer;
}

+ (id)streamWithData:(id)arg1;
+ (id)streamWithOutputStream:(id)arg1;
+ (id)streamWithOutputStream:(id)arg1 bufferSize:(int)arg2;
- (void)writeRawLittleEndian64:(long long)arg1;
- (void)writeRawLittleEndian32:(int)arg1;
- (void)writeRawVarint64:(long long)arg1;
- (void)writeRawVarint32:(int)arg1;
- (void)writeTag:(int)arg1 format:(int)arg2;
- (void)writeRawMessageSetExtension:(int)arg1 value:(id)arg2;
- (void)writeMessageSetExtension:(int)arg1 value:(id)arg2;
- (void)writeSInt64:(int)arg1 value:(long long)arg2;
- (void)writeSInt64NoTag:(long long)arg1;
- (void)writeSInt32:(int)arg1 value:(int)arg2;
- (void)writeSInt32NoTag:(int)arg1;
- (void)writeSFixed64:(int)arg1 value:(long long)arg2;
- (void)writeSFixed64NoTag:(long long)arg1;
- (void)writeSFixed32:(int)arg1 value:(int)arg2;
- (void)writeSFixed32NoTag:(int)arg1;
- (void)writeEnum:(int)arg1 value:(int)arg2;
- (void)writeEnumNoTag:(int)arg1;
- (void)writeUInt32:(int)arg1 value:(int)arg2;
- (void)writeUInt32NoTag:(int)arg1;
- (void)writeData:(int)arg1 value:(id)arg2;
- (void)writeDataNoTag:(id)arg1;
- (void)writeMessage:(int)arg1 value:(id)arg2;
- (void)writeMessageNoTag:(id)arg1;
- (void)writeUnknownGroup:(int)arg1 value:(id)arg2;
- (void)writeUnknownGroupNoTag:(int)arg1 value:(id)arg2;
- (void)writeGroup:(int)arg1 value:(id)arg2;
- (void)writeGroupNoTag:(int)arg1 value:(id)arg2;
- (void)writeString:(int)arg1 value:(id)arg2;
- (void)writeStringNoTag:(id)arg1;
- (void)writeBool:(int)arg1 value:(_Bool)arg2;
- (void)writeBoolNoTag:(_Bool)arg1;
- (void)writeFixed32:(int)arg1 value:(int)arg2;
- (void)writeFixed32NoTag:(int)arg1;
- (void)writeFixed64:(int)arg1 value:(long long)arg2;
- (void)writeFixed64NoTag:(long long)arg1;
- (void)writeInt32:(int)arg1 value:(int)arg2;
- (void)writeInt32NoTag:(int)arg1;
- (void)writeInt64:(int)arg1 value:(long long)arg2;
- (void)writeInt64NoTag:(long long)arg1;
- (void)writeUInt64:(int)arg1 value:(long long)arg2;
- (void)writeUInt64NoTag:(long long)arg1;
- (void)writeFloat:(int)arg1 value:(float)arg2;
- (void)writeFloatNoTag:(float)arg1;
- (void)writeDouble:(int)arg1 value:(double)arg2;
- (void)writeDoubleNoTag:(double)arg1;
- (void)writeRawData:(id)arg1 offset:(int)arg2 length:(int)arg3;
- (void)writeRawData:(id)arg1;
- (void)writeRawByte:(unsigned char)arg1;
- (void)flush;
- (void)dealloc;
- (id)initWithOutputStream:(id)arg1 data:(id)arg2;

@end

