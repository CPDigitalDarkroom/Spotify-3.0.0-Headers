//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSObject<XVRRecognizer>, NSObject<XappAdsDelegate>, NSString, UILocalNotification, XADeferredAction;

@interface XAGlobal : NSObject
{
    _Bool started;
    _Bool _useLocalNotifications;
    double latitude;
    double longitude;
    NSObject<XappAdsDelegate> *sharedDelegate;
    NSObject<XVRRecognizer> *sharedSpeechRecognizer;
    UILocalNotification *pendingNotification;
    NSError *startError;
    NSString *_applicationKey;
    XADeferredAction *_mostRecentDeferredAction;
}

+ (id)sharedGlobal;
@property(retain) XADeferredAction *mostRecentDeferredAction; // @synthesize mostRecentDeferredAction=_mostRecentDeferredAction;
@property(retain) NSString *applicationKey; // @synthesize applicationKey=_applicationKey;
@property _Bool useLocalNotifications; // @synthesize useLocalNotifications=_useLocalNotifications;
@property(retain) NSError *startError; // @synthesize startError;
@property(retain) UILocalNotification *pendingNotification; // @synthesize pendingNotification;
@property(readonly) _Bool started; // @synthesize started;
@property(retain) NSObject<XVRRecognizer> *sharedSpeechRecognizer; // @synthesize sharedSpeechRecognizer;
@property(retain) NSObject<XappAdsDelegate> *sharedDelegate; // @synthesize sharedDelegate;
@property double longitude; // @synthesize longitude;
@property double latitude; // @synthesize latitude;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setSpeechRecognizer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)speechRecognizer;
- (id)delegate;
- (id)debugInformation;
- (void)selfDestruct;
- (void)primeSpeechEngine;
- (void)setupWithAPIKey:(id)arg1 withApplicationKey:(id)arg2 withAdsDelegate:(id)arg3 withUserData:(id)arg4;
- (id)init;

@end
