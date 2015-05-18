//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBExtendableMessage_Builder.h"

@class PBServiceOptions;

@interface PBServiceOptions_Builder : PBExtendableMessage_Builder
{
    PBServiceOptions *result;
}

@property(retain) PBServiceOptions *result; // @synthesize result;
- (id)addUninterpretedOption:(id)arg1;
- (id)clearUninterpretedOptionList;
- (id)addAllUninterpretedOption:(id)arg1;
- (id)replaceUninterpretedOptionAtIndex:(int)arg1 with:(id)arg2;
- (id)uninterpretedOptionAtIndex:(int)arg1;
- (id)uninterpretedOptionList;
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

