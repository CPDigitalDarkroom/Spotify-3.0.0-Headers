//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFeature.h"

@class NSObject<SPTNewMusicTuesdayControllerProtocol>, NSString, SPKVObservation, SPTAllocationContext;

@interface SPTNewMusicTuesdayFeatureImplementation : NSObject <SPTFeature>
{
    id <BaseFeature> _baseFeature;
    NSObject<SPTNewMusicTuesdayControllerProtocol> *_theNewMusicTuesdayController;
    id <SettingsFeature> _settings;
    id <SPTAbbaFeature> _abba;
    id <SettingsRegistry> _settingsRegistry;
    SPKVObservation *_isUserInModalGroupObservation;
    id <SPTPlayerFeature> _playerFeature;
    id <SPTShareFeature> _shareFeature;
    id <SPTProductState> _productState;
}

+ (id)featureDependencies;
+ (id)featureIdentifier;
@property(nonatomic) __weak id <SPTProductState> productState; // @synthesize productState=_productState;
@property(nonatomic) __weak id <SPTShareFeature> shareFeature; // @synthesize shareFeature=_shareFeature;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(retain, nonatomic) SPKVObservation *isUserInModalGroupObservation; // @synthesize isUserInModalGroupObservation=_isUserInModalGroupObservation;
@property(retain, nonatomic) id <SettingsRegistry> settingsRegistry; // @synthesize settingsRegistry=_settingsRegistry;
@property(nonatomic) __weak id <SPTAbbaFeature> abba; // @synthesize abba=_abba;
@property(nonatomic) __weak id <SettingsFeature> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) NSObject<SPTNewMusicTuesdayControllerProtocol> *theNewMusicTuesdayController; // @synthesize theNewMusicTuesdayController=_theNewMusicTuesdayController;
@property(nonatomic) __weak id <BaseFeature> baseFeature; // @synthesize baseFeature=_baseFeature;
- (void).cxx_destruct;
- (void)unload;
- (void)applicationDidBecomeActive;
- (id)createPlayer;
- (id)provideCommunicationsSettingsSectionForViewController:(id)arg1;
- (void)registerForCommunicationsSectionIfInUS;
- (void)load;
- (void)configureWithFeatures:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
