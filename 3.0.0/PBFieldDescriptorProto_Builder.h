//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage_Builder.h"

@class PBFieldDescriptorProto;

@interface PBFieldDescriptorProto_Builder : PBGeneratedMessage_Builder
{
    PBFieldDescriptorProto *result;
}

@property(retain) PBFieldDescriptorProto *result; // @synthesize result;
- (id)clearOptions;
- (id)mergeOptions:(id)arg1;
- (id)setOptionsBuilder:(id)arg1;
- (id)setOptions:(id)arg1;
- (id)options;
- (BOOL)hasOptions;
- (id)clearDefaultValue;
- (id)setDefaultValue:(id)arg1;
- (id)defaultValue;
- (BOOL)hasDefaultValue;
- (id)clearExtendee;
- (id)setExtendee:(id)arg1;
- (id)extendee;
- (BOOL)hasExtendee;
- (id)clearTypeName;
- (id)setTypeName:(id)arg1;
- (id)typeName;
- (BOOL)hasTypeName;
- (id)clearType;
- (id)setType:(int)arg1;
- (int)type;
- (BOOL)hasType;
- (id)clearLabel;
- (id)setLabel:(int)arg1;
- (int)label;
- (BOOL)hasLabel;
- (id)clearNumber;
- (id)setNumber:(int)arg1;
- (int)number;
- (BOOL)hasNumber;
- (id)clearName;
- (id)setName:(id)arg1;
- (id)name;
- (BOOL)hasName;
- (id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (id)mergeFromCodedInputStream:(id)arg1;
- (id)mergeFrom:(id)arg1;
- (id)buildPartial;
- (id)build;
- (id)defaultInstance;
- (id)clone;
- (id)clear;
- (id)internalGetResult;
- (id)init;
- (void)dealloc;

@end

