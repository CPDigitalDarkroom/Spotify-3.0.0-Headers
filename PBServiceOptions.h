//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBExtendableMessage.h"

@class NSMutableArray;

@interface PBServiceOptions : PBExtendableMessage
{
    NSMutableArray *mutableUninterpretedOptionList;
}

+ (id)builderWithPrototype:(id)arg1;
+ (id)builder;
+ (id)parseFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromCodedInputStream:(id)arg1;
+ (id)parseFromInputStream:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromInputStream:(id)arg1;
+ (id)parseFromData:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromData:(id)arg1;
+ (id)defaultInstance;
+ (void)initialize;
@property(retain) NSMutableArray *mutableUninterpretedOptionList; // @synthesize mutableUninterpretedOptionList;
- (id)builder;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)uninterpretedOptionAtIndex:(int)arg1;
- (id)uninterpretedOptionList;
- (id)defaultInstance;
- (id)init;
- (void)dealloc;

@end

