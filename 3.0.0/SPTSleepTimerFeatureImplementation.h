//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFeature.h"

@class NSString, SPTAllocationContext;

@interface SPTSleepTimerFeatureImplementation : NSObject <SPTFeature>
{
    id <BaseFeature> _baseFeature;
    id <SettingsFeature> _settingsFeature;
    id <SPTPlayerFeature> _playerFeature;
    id <GaiaFeature> _gaiaFeature;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTSleepTimerController> _sleepTimerController;
    id <SPTSleepTimerContextMenuActionsProvider> _sleepTimerContextMenuActionsProvider;
}

+ (id)featureDependencies;
+ (id)featureIdentifier;
@property(retain, nonatomic) id <SPTSleepTimerContextMenuActionsProvider> sleepTimerContextMenuActionsProvider; // @synthesize sleepTimerContextMenuActionsProvider=_sleepTimerContextMenuActionsProvider;
@property(retain, nonatomic) id <SPTSleepTimerController> sleepTimerController; // @synthesize sleepTimerController=_sleepTimerController;
@property(retain, nonatomic) id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(nonatomic) __weak id <GaiaFeature> gaiaFeature; // @synthesize gaiaFeature=_gaiaFeature;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <SettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(nonatomic) __weak id <BaseFeature> baseFeature; // @synthesize baseFeature=_baseFeature;
- (void).cxx_destruct;
- (BOOL)isSleepTimerEnabled;
- (id)provideSleepTimerContextMenuActionsProvider;
- (id)provideSleepTimerController;
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

