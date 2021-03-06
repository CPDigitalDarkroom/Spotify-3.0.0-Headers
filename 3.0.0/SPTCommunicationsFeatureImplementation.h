//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCommunicationsFeature.h"

@class NSString, SPTAllocationContext;

@interface SPTCommunicationsFeatureImplementation : NSObject <SPTCommunicationsFeature>
{
    id <BaseFeature> _baseFeature;
    id <SettingsFeature> _settingsFeature;
    id <SPTCommunicationsController> _communicationsController;
}

+ (id)featureDependencies;
+ (id)featureIdentifier;
@property(retain, nonatomic) id <SPTCommunicationsController> communicationsController; // @synthesize communicationsController=_communicationsController;
@property(nonatomic) __weak id <SettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(nonatomic) __weak id <BaseFeature> baseFeature; // @synthesize baseFeature=_baseFeature;
- (void).cxx_destruct;
- (id)provideEmailNotificationsSettingsSection:(id)arg1;
- (id)providePushNotificationsSettingsSection:(id)arg1;
- (id)provideMarketingSettingsSection:(id)arg1;
- (id)provideCommunicationsSettingsSection:(id)arg1 forType:(int)arg2 title:(id)arg3;
- (id)provideCommunicationsController;
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

