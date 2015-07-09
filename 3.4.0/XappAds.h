//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface XappAds : NSObject
{
}

+ (void)crashApp;
+ (void)setRemoteLoggingEnabled:(_Bool)arg1;
+ (void)setAdService:(id)arg1;
+ (id)xvrCloudUrl;
+ (void)setXVRCloudUrl:(id)arg1;
+ (void)setResultsOnMockRecognizerWithPhrase:(id)arg1 confidence:(double)arg2;
+ (void)setCloseOnTouch:(_Bool)arg1;
+ (void)setLazyLoadImages:(_Bool)arg1;
+ (void)setDefaultPlaceholderImage:(id)arg1;
+ (void)setAirPlayPlayback:(_Bool)arg1;
+ (void)setBluetoothPlayback:(_Bool)arg1;
+ (void)setBluetoothConfigurationTwoMinimumA2DPSwitchingTime:(double)arg1;
+ (void)setBluetoothConfigurationTwoStartListeningCueDelay:(double)arg1;
+ (void)setBluetoothConfigurationTwoActionAudioCompletionDelay:(double)arg1;
+ (void)setBluetoothConfigurationThreeDelay:(double)arg1;
+ (void)setBluetoothConfiguration:(unsigned long long)arg1;
+ (void)setManagedBluetoothConfiguration:(_Bool)arg1;
+ (id)voiceRecognizer;
+ (void)setVoiceRecognizer:(id)arg1;
+ (id)mockAdService;
+ (void)setAdsServerURL:(id)arg1;
+ (id)adsServerURL;
+ (void)runInHeadlessMode;
+ (void)adViewTouched:(_Bool)arg1;
+ (void)adViewTouched;
+ (void)post:(id)arg1 forEvent:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (void)postForEvent:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)setGoToCallbackURLSchemeFilter:(id)arg1;
+ (void)set1136CreativeCropLocationFor960Screens:(struct CGRect)arg1;
+ (void)setDisplayCloseButtonAdAudio:(_Bool)arg1 afterSeconds:(double)arg2;
+ (void)setRequestAdTimout:(double)arg1;
+ (void)setMicrophoneProgressColor:(id)arg1;
+ (void)setMicrophoneBackgroundColor:(id)arg1;
+ (void)setMicrophoneBezierPath:(id)arg1;
+ (void)setMicrophoneImage:(id)arg1;
+ (void)setMicrophoneFrame:(struct CGRect)arg1;
+ (void)setDisplayMicrophoneImageOverlay:(_Bool)arg1;
+ (void)setLogLevel:(unsigned long long)arg1;
+ (id)nextAd;
+ (_Bool)adAvailable;
+ (id)adQueue;
+ (void)cancelAd:(id)arg1;
+ (void)resumeAd;
+ (void)pauseAd;
+ (void)microphoneLevel:(CDUnknownBlockType)arg1;
+ (void)playAdAsAudioOnly:(id)arg1;
+ (void)playAdAsInTunerTile:(id)arg1 withContainingView:(id)arg2;
+ (void)playAdAsInterstitial:(id)arg1 withRootViewController:(id)arg2;
+ (void)bulkAdRequest:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
+ (void)requestAd:(id)arg1;
+ (void)adRequest:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
+ (void)adRequests:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
+ (void)setLocationWithLatitude:(double)arg1 longitude:(double)arg2;
+ (_Bool)microphonePermission;
+ (id)version;
+ (_Bool)playingAdvertisement;
+ (_Bool)adPlaying;
+ (_Bool)adPresented;
+ (_Bool)pluginStarted;
+ (void)updateDelegate:(id)arg1;
+ (void)terminateXappAds;
+ (void)startWithAPIKey:(id)arg1 withApplicationKey:(id)arg2 withAdsDelegate:(id)arg3 withUserData:(id)arg4;

@end

