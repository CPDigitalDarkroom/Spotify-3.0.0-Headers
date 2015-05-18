//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFeature.h"

@class NSString, SPTAllocationContext;

@interface SPTBMWCarAPIFeatureImplementation : NSObject <SPTFeature>
{
    id <BaseFeature> _baseUI;
    id <ExternalContentProvider> _externalContentProviderFeature;
}

+ (id)featureDependencies;
+ (id)featureIdentifier;
+ (void)applicationDidFinishLaunching:(id)arg1;
+ (void)load;
@property(nonatomic) __weak id <ExternalContentProvider> externalContentProviderFeature; // @synthesize externalContentProviderFeature=_externalContentProviderFeature;
@property(nonatomic) __weak id <BaseFeature> baseUI; // @synthesize baseUI=_baseUI;
- (void).cxx_destruct;
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

