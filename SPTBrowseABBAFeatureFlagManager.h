//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAbbaFeatureFlagsObserver.h"

@class NSString;

@interface SPTBrowseABBAFeatureFlagManager : NSObject <SPTAbbaFeatureFlagsObserver>
{
    id <SPTBrowseABBAFeatureFlagManagerDelegate> _delegate;
    id <SPTAbbaFeatureFlags> _featureFlags;
}

@property(nonatomic) __weak id <SPTAbbaFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(nonatomic) __weak id <SPTBrowseABBAFeatureFlagManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isChartFeatureEnabled) BOOL chartFeatureEnabled;
@property(readonly, nonatomic, getter=isCeramicHomepageEnabled) BOOL ceramicHomepageEnabled;
@property(readonly, nonatomic, getter=isSpokenWordTestEnabled) BOOL spokenWordTestEnabled;
- (void)featureFlagsDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithFeatureFlags:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
