//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTShowcaseStatic.h"

#import "SPTShowcaseDynamicFeatureProtocol.h"

@class NSString, SPTShowcaseFeatureModel;

@interface SPTOfflineLibraryDynamicShowcase : SPTShowcaseStatic <SPTShowcaseDynamicFeatureProtocol>
{
    SPTShowcaseFeatureModel *_featureModel;
    id <SPTOfflineLibraryFeature> _offlineLibraryFeature;
    id <SPTProductState> _productState;
}

@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) id <SPTOfflineLibraryFeature> offlineLibraryFeature; // @synthesize offlineLibraryFeature=_offlineLibraryFeature;
@property(retain, nonatomic) SPTShowcaseFeatureModel *featureModel; // @synthesize featureModel=_featureModel;
- (void).cxx_destruct;
- (_Bool)isStandAlone;
- (_Bool)shouldShowcaseBeFeatured;
- (_Bool)shouldShowcaseBeInteractive;
- (id)provideContent;
- (void)setStaticContent:(id)arg1;
- (id)initWithOfflineLibraryFeature:(id)arg1 productState:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
