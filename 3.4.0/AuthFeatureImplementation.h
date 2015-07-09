//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFeature.h"

@class NSString, SPTAllocationContext;

@interface AuthFeatureImplementation : NSObject <SPTFeature>
{
    id <BaseFeature> _baseFeature;
}

+ (id)featureDependencies;
+ (id)featureIdentifier;
+ (id)sharedInstance;
@property(nonatomic) __weak id <BaseFeature> baseFeature; // @synthesize baseFeature=_baseFeature;
- (void).cxx_destruct;
- (id)provideAuthViewControllerForURL:(id)arg1 sourceApplication:(id)arg2;
- (void)unload;
- (void)load;
- (void)configureWithFeatures:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

