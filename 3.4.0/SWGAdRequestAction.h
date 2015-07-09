//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SWGObject.h"

@class NSArray, NSString;

@interface SWGAdRequestAction : SWGObject
{
    NSString *_actionType;
    NSString *_customPhrase;
    NSArray *_pollChoices;
    NSString *_callPhoneNumber;
    NSString *_customClassAndroid;
    NSString *_customClassIos;
    NSString *_customData;
    NSString *_downloadUrlAndroid;
    NSString *_downloadUrlIos;
    NSString *_gotoUrl;
    NSString *_notificationMessage;
    NSString *_audioUrl;
    NSString *_trailingBackgroundAudioUrl;
    NSString *_trailingForegroundAudioUrl;
    NSString *_twilioCallerIdNumber;
}

@property(retain, nonatomic) NSString *twilioCallerIdNumber; // @synthesize twilioCallerIdNumber=_twilioCallerIdNumber;
@property(retain, nonatomic) NSString *trailingForegroundAudioUrl; // @synthesize trailingForegroundAudioUrl=_trailingForegroundAudioUrl;
@property(retain, nonatomic) NSString *trailingBackgroundAudioUrl; // @synthesize trailingBackgroundAudioUrl=_trailingBackgroundAudioUrl;
@property(retain, nonatomic) NSString *audioUrl; // @synthesize audioUrl=_audioUrl;
@property(retain, nonatomic) NSString *notificationMessage; // @synthesize notificationMessage=_notificationMessage;
@property(retain, nonatomic) NSString *gotoUrl; // @synthesize gotoUrl=_gotoUrl;
@property(retain, nonatomic) NSString *downloadUrlIos; // @synthesize downloadUrlIos=_downloadUrlIos;
@property(retain, nonatomic) NSString *downloadUrlAndroid; // @synthesize downloadUrlAndroid=_downloadUrlAndroid;
@property(retain, nonatomic) NSString *customData; // @synthesize customData=_customData;
@property(retain, nonatomic) NSString *customClassIos; // @synthesize customClassIos=_customClassIos;
@property(retain, nonatomic) NSString *customClassAndroid; // @synthesize customClassAndroid=_customClassAndroid;
@property(retain, nonatomic) NSString *callPhoneNumber; // @synthesize callPhoneNumber=_callPhoneNumber;
@property(retain, nonatomic) NSArray *pollChoices; // @synthesize pollChoices=_pollChoices;
@property(retain, nonatomic) NSString *customPhrase; // @synthesize customPhrase=_customPhrase;
@property(retain, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
- (void).cxx_destruct;
- (id)asDictionary;
- (id)initWithValues:(id)arg1;
- (id)actionType:(id)arg1 customPhrase:(id)arg2 pollChoices:(id)arg3 callPhoneNumber:(id)arg4 customClassAndroid:(id)arg5 customClassIos:(id)arg6 customData:(id)arg7 downloadUrlAndroid:(id)arg8 downloadUrlIos:(id)arg9 gotoUrl:(id)arg10 notificationMessage:(id)arg11 audioUrl:(id)arg12 trailingBackgroundAudioUrl:(id)arg13 trailingForegroundAudioUrl:(id)arg14 twilioCallerIdNumber:(id)arg15;

@end

