//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFeature.h"
#import "SPTPromotedContentFeature.h"

@class NSString, SPTAllocationContext;

@interface SPTPromotedContentFeatureImplementation : NSObject <SPTFeature, SPTPromotedContentFeature>
{
    id <BaseFeature> _baseFeature;
    id <SPTPlayerFeature> _playerFeature;
    id <SettingsFeature> _settingsFeature;
    id <AdsFeature> _adsFeature;
    id <SPTAdEventLogger> _adEventLogger;
}

+ (id)featureDependencies;
+ (id)featureIdentifier;
@property(retain, nonatomic) id <SPTAdEventLogger> adEventLogger; // @synthesize adEventLogger=_adEventLogger;
@property(nonatomic) __weak id <AdsFeature> adsFeature; // @synthesize adsFeature=_adsFeature;
@property(nonatomic) __weak id <SettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <BaseFeature> baseFeature; // @synthesize baseFeature=_baseFeature;
- (void).cxx_destruct;
- (BOOL)areAdsEnabled;
- (BOOL)isPromotedTrackEnabled;
- (id)providePromotedContentController;
- (void)setupSettingsSection;
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

