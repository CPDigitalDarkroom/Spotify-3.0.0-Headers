//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SpotifyPreferences : NSObject
{
    struct Prefs *_prefs;
}

+ (id)preferencesWithPrefs:(struct Prefs *)arg1;
+ (id)sharedPreferences;
- (void)setPreferredLocale:(id)arg1;
- (id)preferredLocale;
- (void)setPsPostOpenGraph:(int)arg1;
- (int)psPostOpenGraph;
- (void)setAudioResyncBitrate:(_Bool)arg1;
- (_Bool)audioResyncBitrate;
- (void)setAudioSyncBitrate:(long long)arg1;
- (long long)audioSyncBitrate;
- (void)setAudioPlayBitrate:(long long)arg1;
- (long long)audioPlayBitrate;
- (void)setAudioCrossfadeTime:(long long)arg1;
- (long long)audioCrossfadeTime;
- (void)setAudioCrossfade:(_Bool)arg1;
- (_Bool)audioCrossfade;
- (void)setAudioGapless:(_Bool)arg1;
- (_Bool)audioGapless;
- (void)setLanguage:(id)arg1;
- (id)language;
@property(nonatomic) long long connectLocalNetwork;
@property(nonatomic) long long remoteControlVersion;
@property(nonatomic) long long remoteControl;
@property(nonatomic) _Bool publishActivity;
- (id)initWithPrefs:(struct Prefs *)arg1;

@end

