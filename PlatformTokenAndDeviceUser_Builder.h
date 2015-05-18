//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage_Builder.h"

@class PlatformTokenAndDeviceUser;

@interface PlatformTokenAndDeviceUser_Builder : PBGeneratedMessage_Builder
{
    PlatformTokenAndDeviceUser *result;
}

@property(retain) PlatformTokenAndDeviceUser *result; // @synthesize result;
- (id)clearDeviceUser;
- (id)mergeDeviceUser:(id)arg1;
- (id)setDeviceUserBuilder:(id)arg1;
- (id)setDeviceUser:(id)arg1;
- (id)deviceUser;
- (BOOL)hasDeviceUser;
- (id)clearPlatformToken;
- (id)mergePlatformToken:(id)arg1;
- (id)setPlatformTokenBuilder:(id)arg1;
- (id)setPlatformToken:(id)arg1;
- (id)platformToken;
- (BOOL)hasPlatformToken;
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

