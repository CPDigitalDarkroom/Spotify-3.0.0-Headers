//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class PBAppendableArray, PBArray;

@interface PlatformTokenAndDeviceUserList : PBGeneratedMessage
{
    PBAppendableArray *platformTokenAndDeviceUserArray;
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
@property(retain) PBAppendableArray *platformTokenAndDeviceUserArray; // @synthesize platformTokenAndDeviceUserArray;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeDescriptionTo:(id)arg1 withIndent:(id)arg2;
- (id)toBuilder;
- (id)builder;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (_Bool)isInitialized;
- (id)platformTokenAndDeviceUserAtIndex:(unsigned long long)arg1;
@property(readonly, retain) PBArray *platformTokenAndDeviceUser; // @dynamic platformTokenAndDeviceUser;
- (id)defaultInstance;
- (id)init;
- (void)dealloc;

@end

