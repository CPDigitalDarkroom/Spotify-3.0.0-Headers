//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage_Builder.h"

@class PBEnumValueDescriptorProto;

@interface PBEnumValueDescriptorProto_Builder : PBGeneratedMessage_Builder
{
    PBEnumValueDescriptorProto *result;
}

@property(retain) PBEnumValueDescriptorProto *result; // @synthesize result;
- (id)clearOptions;
- (id)mergeOptions:(id)arg1;
- (id)setOptionsBuilder:(id)arg1;
- (id)setOptions:(id)arg1;
- (id)options;
- (_Bool)hasOptions;
- (id)clearNumber;
- (id)setNumber:(int)arg1;
- (int)number;
- (_Bool)hasNumber;
- (id)clearName;
- (id)setName:(id)arg1;
- (id)name;
- (_Bool)hasName;
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

