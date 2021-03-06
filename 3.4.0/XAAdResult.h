//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSDate, NSError, NSMutableDictionary, NSNumber, NSString, NSURL, XAAction;

@interface XAAdResult : NSObject <NSCopying>
{
    _Bool _success;
    _Bool _clicked;
    _Bool _expansionAudioInitiated;
    _Bool _conversion;
    _Bool _deferredAction;
    _Bool _cancelled;
    NSString *_adID;
    NSString *_adName;
    NSString *_adRequestKey;
    NSArray *_advertisementActionTypes;
    NSString *_startPlay;
    NSString *_endPlay;
    NSError *_error;
    XAAction *_recognizedAction;
    NSString *_action;
    NSString *_customActionMetadata;
    NSURL *_customGoToUrl;
    NSURL *_deferredActionURL;
    NSString *_cancellationType;
    double _cancellationTime;
    NSArray *_actionResultsArray;
    NSArray *_expansionAudioResultsArray;
    NSArray *_recognitionResults;
    NSNumber *_endOfStartListeningCueToStartListening;
    NSDate *_finishedVoiceRecognizerBaseAudioInitialization;
    NSDate *_finishVoiceRecognizerBaseAudioRecognition;
    NSDate *_finishVoiceRecognizerExpansionAudioInitialization;
    NSDate *_finishVoiceRecognizerExpansionRecognition;
    NSDate *_startVoiceRecognizerBaseAudioInitialization;
    NSDate *_startVoiceRecognizerBaseAudioRecognition;
    NSDate *_startVoiceRecognizerExpansionAudioInitialization;
    NSDate *_startVoiceRecognizerExpansionAudioRecognition;
    NSNumber *_baseAudioLoadTimeInMilliseconds;
    NSNumber *_expansionAudioLoadTimeInMilliseconds;
    NSNumber *_imageLoadTimeInMilliseconds;
    NSNumber *_totalLoadTimeInMilliseconds;
    NSNumber *_audioSessionPrepareTime;
    NSString *_audioRoute;
    NSString *_audioRouteName;
    NSString *_outputPortTypeAtPlaybackStart;
    unsigned long long _bluetoothConfiguration;
    double _bluetoothConfigurationThreeDelay;
    double _bluetoothConfigurationTwoActionAudioCompletionDelay;
    double _bluetoothConfigurationTwoMinimumA2DPSwitchTime;
    double _bluetoothConfigurationTwoStartListeningCueDelay;
    NSMutableDictionary *_events;
    NSMutableDictionary *_states;
    NSString *_callType;
    NSString *_connectionType;
}

@property(retain, nonatomic) NSString *connectionType; // @synthesize connectionType=_connectionType;
@property(retain, nonatomic) NSString *callType; // @synthesize callType=_callType;
@property(retain, nonatomic) NSMutableDictionary *states; // @synthesize states=_states;
@property(retain, nonatomic) NSMutableDictionary *events; // @synthesize events=_events;
@property(nonatomic) double bluetoothConfigurationTwoStartListeningCueDelay; // @synthesize bluetoothConfigurationTwoStartListeningCueDelay=_bluetoothConfigurationTwoStartListeningCueDelay;
@property(nonatomic) double bluetoothConfigurationTwoMinimumA2DPSwitchTime; // @synthesize bluetoothConfigurationTwoMinimumA2DPSwitchTime=_bluetoothConfigurationTwoMinimumA2DPSwitchTime;
@property(nonatomic) double bluetoothConfigurationTwoActionAudioCompletionDelay; // @synthesize bluetoothConfigurationTwoActionAudioCompletionDelay=_bluetoothConfigurationTwoActionAudioCompletionDelay;
@property(nonatomic) double bluetoothConfigurationThreeDelay; // @synthesize bluetoothConfigurationThreeDelay=_bluetoothConfigurationThreeDelay;
@property(nonatomic) unsigned long long bluetoothConfiguration; // @synthesize bluetoothConfiguration=_bluetoothConfiguration;
@property(retain, nonatomic) NSString *outputPortTypeAtPlaybackStart; // @synthesize outputPortTypeAtPlaybackStart=_outputPortTypeAtPlaybackStart;
@property(retain, nonatomic) NSString *audioRouteName; // @synthesize audioRouteName=_audioRouteName;
@property(retain, nonatomic) NSString *audioRoute; // @synthesize audioRoute=_audioRoute;
@property(retain, nonatomic) NSNumber *audioSessionPrepareTime; // @synthesize audioSessionPrepareTime=_audioSessionPrepareTime;
@property(retain, nonatomic) NSNumber *totalLoadTimeInMilliseconds; // @synthesize totalLoadTimeInMilliseconds=_totalLoadTimeInMilliseconds;
@property(retain, nonatomic) NSNumber *imageLoadTimeInMilliseconds; // @synthesize imageLoadTimeInMilliseconds=_imageLoadTimeInMilliseconds;
@property(retain, nonatomic) NSNumber *expansionAudioLoadTimeInMilliseconds; // @synthesize expansionAudioLoadTimeInMilliseconds=_expansionAudioLoadTimeInMilliseconds;
@property(retain, nonatomic) NSNumber *baseAudioLoadTimeInMilliseconds; // @synthesize baseAudioLoadTimeInMilliseconds=_baseAudioLoadTimeInMilliseconds;
@property(retain, nonatomic) NSDate *startVoiceRecognizerExpansionAudioRecognition; // @synthesize startVoiceRecognizerExpansionAudioRecognition=_startVoiceRecognizerExpansionAudioRecognition;
@property(retain, nonatomic) NSDate *startVoiceRecognizerExpansionAudioInitialization; // @synthesize startVoiceRecognizerExpansionAudioInitialization=_startVoiceRecognizerExpansionAudioInitialization;
@property(retain, nonatomic) NSDate *startVoiceRecognizerBaseAudioRecognition; // @synthesize startVoiceRecognizerBaseAudioRecognition=_startVoiceRecognizerBaseAudioRecognition;
@property(retain, nonatomic) NSDate *startVoiceRecognizerBaseAudioInitialization; // @synthesize startVoiceRecognizerBaseAudioInitialization=_startVoiceRecognizerBaseAudioInitialization;
@property(retain, nonatomic) NSDate *finishVoiceRecognizerExpansionRecognition; // @synthesize finishVoiceRecognizerExpansionRecognition=_finishVoiceRecognizerExpansionRecognition;
@property(retain, nonatomic) NSDate *finishVoiceRecognizerExpansionAudioInitialization; // @synthesize finishVoiceRecognizerExpansionAudioInitialization=_finishVoiceRecognizerExpansionAudioInitialization;
@property(retain, nonatomic) NSDate *finishVoiceRecognizerBaseAudioRecognition; // @synthesize finishVoiceRecognizerBaseAudioRecognition=_finishVoiceRecognizerBaseAudioRecognition;
@property(retain, nonatomic) NSDate *finishedVoiceRecognizerBaseAudioInitialization; // @synthesize finishedVoiceRecognizerBaseAudioInitialization=_finishedVoiceRecognizerBaseAudioInitialization;
@property(retain, nonatomic) NSNumber *endOfStartListeningCueToStartListening; // @synthesize endOfStartListeningCueToStartListening=_endOfStartListeningCueToStartListening;
@property(retain, nonatomic) NSArray *recognitionResults; // @synthesize recognitionResults=_recognitionResults;
@property(retain, nonatomic) NSArray *expansionAudioResultsArray; // @synthesize expansionAudioResultsArray=_expansionAudioResultsArray;
@property(retain, nonatomic) NSArray *actionResultsArray; // @synthesize actionResultsArray=_actionResultsArray;
@property(nonatomic) double cancellationTime; // @synthesize cancellationTime=_cancellationTime;
@property(retain, nonatomic) NSString *cancellationType; // @synthesize cancellationType=_cancellationType;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(retain, nonatomic) NSURL *deferredActionURL; // @synthesize deferredActionURL=_deferredActionURL;
@property(nonatomic) _Bool deferredAction; // @synthesize deferredAction=_deferredAction;
@property(nonatomic) _Bool conversion; // @synthesize conversion=_conversion;
@property(nonatomic) _Bool expansionAudioInitiated; // @synthesize expansionAudioInitiated=_expansionAudioInitiated;
@property(retain, nonatomic) NSURL *customGoToUrl; // @synthesize customGoToUrl=_customGoToUrl;
@property(retain, nonatomic) NSString *customActionMetadata; // @synthesize customActionMetadata=_customActionMetadata;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) XAAction *recognizedAction; // @synthesize recognizedAction=_recognizedAction;
@property(nonatomic) _Bool clicked; // @synthesize clicked=_clicked;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(retain, nonatomic) NSString *endPlay; // @synthesize endPlay=_endPlay;
@property(retain, nonatomic) NSString *startPlay; // @synthesize startPlay=_startPlay;
@property(retain, nonatomic) NSArray *advertisementActionTypes; // @synthesize advertisementActionTypes=_advertisementActionTypes;
@property(retain, nonatomic) NSString *adRequestKey; // @synthesize adRequestKey=_adRequestKey;
@property(retain, nonatomic) NSString *adName; // @synthesize adName=_adName;
@property(retain, nonatomic) NSString *adID; // @synthesize adID=_adID;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isCustomGoToActionRecognized;
- (_Bool)isCustomActionRecognized;
- (id)voiceRecognizerExpansionAudioRecognitionTimeInMilliseconds;
- (id)voiceRecognizerExpansionAudioInitializationTimeInMilliseconds;
- (id)voiceRecognizerBaseAudioRecognitionTimeInMilliseconds;
- (id)voiceRecognizerBaseAudioInitializationTimeInMilliseconds;
- (void)addState:(id)arg1 atTime:(id)arg2;
- (void)addEvent:(id)arg1 atTime:(id)arg2;
- (id)init;

@end

