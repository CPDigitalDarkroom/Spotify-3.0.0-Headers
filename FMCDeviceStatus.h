//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMCRPCStruct.h"

@class FMCDeviceLevelStatus, FMCPrimaryAudioSource, NSNumber;

@interface FMCDeviceStatus : FMCRPCStruct
{
}

@property(retain) NSNumber *eCallEventActive;
@property(retain) FMCPrimaryAudioSource *primaryAudioSource;
@property(retain) FMCDeviceLevelStatus *signalLevelStatus;
@property(retain) NSNumber *monoAudioOutputMuted;
@property(retain) NSNumber *stereoAudioOutputMuted;
@property(retain) FMCDeviceLevelStatus *battLevelStatus;
@property(retain) NSNumber *textMsgAvailable;
@property(retain) NSNumber *phoneRoaming;
@property(retain) NSNumber *callActive;
@property(retain) NSNumber *btIconOn;
@property(retain) NSNumber *voiceRecOn;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

