//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBExtensionField.h"

@interface PBConcreteExtensionField : NSObject <PBExtensionField>
{
    int type;
    Class extendedClass;
    int fieldNumber;
    id defaultValue;
    Class messageOrGroupClass;
    BOOL isRepeated;
    BOOL isPacked;
    BOOL isMessageSetWireFormat;
}

+ (id)extensionWithType:(int)arg1 extendedClass:(Class)arg2 fieldNumber:(int)arg3 defaultValue:(id)arg4 messageOrGroupClass:(Class)arg5 isRepeated:(BOOL)arg6 isPacked:(BOOL)arg7 isMessageSetWireFormat:(BOOL)arg8;
@property BOOL isMessageSetWireFormat; // @synthesize isMessageSetWireFormat;
@property BOOL isPacked; // @synthesize isPacked;
@property BOOL isRepeated; // @synthesize isRepeated;
@property Class messageOrGroupClass; // @synthesize messageOrGroupClass;
@property(retain) id defaultValue; // @synthesize defaultValue;
@property int fieldNumber; // @synthesize fieldNumber;
@property Class extendedClass; // @synthesize extendedClass;
@property int type; // @synthesize type;
- (void)mergeFromCodedInputStream:(id)arg1 unknownFields:(id)arg2 extensionRegistry:(id)arg3 builder:(id)arg4 tag:(int)arg5;
- (id)readSingleValueFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)mergeMessageSetExtentionFromCodedInputStream:(id)arg1 unknownFields:(id)arg2;
- (void)writeDescriptionOf:(id)arg1 to:(id)arg2 withIndent:(id)arg3;
- (int)computeSerializedSizeIncludingTag:(id)arg1;
- (int)computeRepeatedSerializedSizeIncludingTags:(id)arg1;
- (void)writeValue:(id)arg1 includingTagToCodedOutputStream:(id)arg2;
- (void)writeRepeatedValues:(id)arg1 includingTagsToCodedOutputStream:(id)arg2;
- (void)writeDescriptionOfSingleValue:(id)arg1 to:(id)arg2 withIndent:(id)arg3;
- (int)computeSingleSerializedSizeIncludingTag:(id)arg1;
- (int)computeSingleSerializedSizeNoTag:(id)arg1;
- (void)writeSingleValue:(id)arg1 noTagToCodedOutputStream:(id)arg2;
- (void)writeSingleValue:(id)arg1 includingTagToCodedOutputStream:(id)arg2;
- (int)wireType;
- (id)initWithType:(int)arg1 extendedClass:(Class)arg2 fieldNumber:(int)arg3 defaultValue:(id)arg4 messageOrGroupClass:(Class)arg5 isRepeated:(BOOL)arg6 isPacked:(BOOL)arg7 isMessageSetWireFormat:(BOOL)arg8;
- (void)dealloc;

@end

