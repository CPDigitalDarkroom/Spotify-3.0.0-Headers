//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface XAAudioSessionManager : NSObject
{
    _Bool _previousAllowBlueToothInput;
    _Bool _previousDefaultToSpeaker;
    _Bool _previousMixWithOthers;
    unsigned long long configurationMode;
    double postListeningCueDelay;
    double preListeningCueDelay;
    double preListeningAudioSessionSetupDelay;
    NSString *_previousCategory;
    NSString *_previousMode;
    unsigned long long _previousOptions;
}

+ (id)debug;
+ (id)checkResult:(int)arg1;
+ (id)audioRouteChangeReason:(struct __CFNumber *)arg1;
+ (id)audioSessionRouteChangeReason:(id)arg1;
+ (_Bool)setPreferredInputToMicrophoneBuiltIn:(id *)arg1;
+ (void)debugOutputLatency;
+ (void)debugInputLatency;
+ (void)debugInputDataSources;
+ (void)debugAvailableInputs;
+ (_Bool)mixWithOthers;
+ (_Bool)allowBluetoothInput;
+ (_Bool)defaultToSpeaker;
+ (_Bool)usingAirPlayOutput;
+ (_Bool)usingBluetoothOutput;
+ (id)audioRouteInputPortName;
+ (id)audioRouteInputPortType;
+ (id)audioRouteOutputPortName;
+ (id)audioRouteOutputPortType;
+ (id)audioRoutePortName;
+ (id)audioRoutePortType;
+ (void)updateInstance:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic) unsigned long long previousOptions; // @synthesize previousOptions=_previousOptions;
@property(nonatomic) _Bool previousMixWithOthers; // @synthesize previousMixWithOthers=_previousMixWithOthers;
@property(nonatomic) _Bool previousDefaultToSpeaker; // @synthesize previousDefaultToSpeaker=_previousDefaultToSpeaker;
@property(nonatomic) _Bool previousAllowBlueToothInput; // @synthesize previousAllowBlueToothInput=_previousAllowBlueToothInput;
@property(retain, nonatomic) NSString *previousMode; // @synthesize previousMode=_previousMode;
@property(retain, nonatomic) NSString *previousCategory; // @synthesize previousCategory=_previousCategory;
@property double preListeningAudioSessionSetupDelay; // @synthesize preListeningAudioSessionSetupDelay;
@property double preListeningCueDelay; // @synthesize preListeningCueDelay;
@property double postListeningCueDelay; // @synthesize postListeningCueDelay;
@property unsigned long long configurationMode; // @synthesize configurationMode;
- (void).cxx_destruct;
- (void)stopAudioSession;
- (id)description;
- (void)publishEvent:(id)arg1;
- (void)updateConfiguration:(id)arg1;
- (void)onAudioSessionEvent:(id)arg1;
- (_Bool)setupAudioSessionCategory:(id)arg1 mode:(id)arg2 categoryOptions:(unsigned long long)arg3 withError:(id *)arg4;
- (_Bool)resetAudioSession:(id *)arg1;
- (_Bool)startAudioSessionWithCategory:(id)arg1 error:(id *)arg2;
- (_Bool)recognizingStateAudioSessionSetup:(id *)arg1;
- (void)postListeningCueDelay:(CDUnknownBlockType)arg1;
- (void)preListeningCueDelay:(CDUnknownBlockType)arg1;
- (_Bool)listeningStateAudioSessionSetup:(id *)arg1;
- (void)preListeningAudioSessionSetupDelay:(CDUnknownBlockType)arg1;
- (_Bool)startAudioSession:(id *)arg1;
- (void)unsubscribeToEvents;
- (void)subscribeToEvents;
- (void)dealloc;
- (id)init;

@end

