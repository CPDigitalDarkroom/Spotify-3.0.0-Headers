//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFeature.h"
#import "SPTTelcoActivationControllerDelegate.h"
#import "SPTTelcoActivationDebugSettingsPageDelegate.h"

@class NSString, SPTAllocationContext, SPTTelcoActivationController, SPTTelcoActivationDebugSettingsPage, SPTTelcoActivationFlagObserver, SPTTelcoActivationPrerequisites;

@interface SPTTelcoActivationFeatureImplementation : NSObject <SPTTelcoActivationDebugSettingsPageDelegate, SPTTelcoActivationControllerDelegate, SPTFeature>
{
    id <BaseFeature> _baseFeature;
    id <SPTAbbaFeature> _abbaFeature;
    id <SPTAccountFeature> _accountFeature;
    id <SettingsFeature> _settingsFeature;
    SPTTelcoActivationFlagObserver *_flagObserver;
    SPTTelcoActivationController *_controller;
    struct SPTTelcoActivationPrerequisites *_prerequisities;
    SPTTelcoActivationDebugSettingsPage *_debugSettingsPage;
}

+ (id)featureDependencies;
+ (id)featureIdentifier;
@property(retain, nonatomic) SPTTelcoActivationDebugSettingsPage *debugSettingsPage; // @synthesize debugSettingsPage=_debugSettingsPage;
@property(retain, nonatomic) SPTTelcoActivationPrerequisites *prerequisities; // @synthesize prerequisities=_prerequisities;
@property(retain, nonatomic) SPTTelcoActivationController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) SPTTelcoActivationFlagObserver *flagObserver; // @synthesize flagObserver=_flagObserver;
@property(nonatomic) __weak id <SettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(nonatomic) __weak id <SPTAccountFeature> accountFeature; // @synthesize accountFeature=_accountFeature;
@property(nonatomic) __weak id <SPTAbbaFeature> abbaFeature; // @synthesize abbaFeature=_abbaFeature;
@property(nonatomic) __weak id <BaseFeature> baseFeature; // @synthesize baseFeature=_baseFeature;
- (void).cxx_destruct;
- (void)debugSettingsPageDidApplyChanges:(id)arg1;
- (void)telcoController:(id)arg1 didFailActivatingProductWithError:(id)arg2;
- (void)telcoControllerDidFinishActivatingProduct:(id)arg1;
- (void)telcoControllerDidStartActivatingProduct:(id)arg1;
- (void)presentConfirmationDialog;
- (void)enabledFlagDidChange;
- (void)registerFeatureSettingsPage;
- (void)unload;
- (void)load;
- (void)destroyController;
- (id)createTelcoActivationController;
- (id)operatorModels;
- (void)configureWithFeatures:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

