//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAbbaFeatureFlagsObserver.h"
#import "SPTBuddyListFeature.h"

@class NSString, SPTAllocationContext;

@interface SPTBuddyListFeatureImplementation : NSObject <SPTAbbaFeatureFlagsObserver, SPTBuddyListFeature>
{
    id <BaseFeature> _base;
    id <SettingsFeature> _settings;
    id <SPTApolloFeature> _apollo;
    id <SPTPlayerFeature> _player;
    id <SPTAudioTouchFeature> _audioTouch;
    id <SPTLocalSettings> _localSettings;
    id <SPTAbbaFeature> _abba;
    id <SPTAbbaFeatureFlags> _abbaFeatureFlags;
}

+ (id)featureDependencies;
+ (id)featureVersion;
+ (id)featureIdentifier;
@property(retain, nonatomic) id <SPTAbbaFeatureFlags> abbaFeatureFlags; // @synthesize abbaFeatureFlags=_abbaFeatureFlags;
@property(nonatomic) __weak id <SPTAbbaFeature> abba; // @synthesize abba=_abba;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(nonatomic) __weak id <SPTAudioTouchFeature> audioTouch; // @synthesize audioTouch=_audioTouch;
@property(nonatomic) __weak id <SPTPlayerFeature> player; // @synthesize player=_player;
@property(nonatomic) __weak id <SPTApolloFeature> apollo; // @synthesize apollo=_apollo;
@property(nonatomic) __weak id <SettingsFeature> settings; // @synthesize settings=_settings;
@property(nonatomic) __weak id <BaseFeature> base; // @synthesize base=_base;
- (void).cxx_destruct;
- (id)provideBuddyListBarButtonItem;
- (void)openBuddyList;
- (BOOL)shouldEnableBuddyList;
- (id)provideBuddyListVC;
- (BOOL)isBuddyListEnabledOnBackend;
- (void)registerFeatureSettingsPage;
- (void)featureFlagsDidChange:(id)arg1;
- (void)unload;
- (void)load;
- (void)configureWithFeatures:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

