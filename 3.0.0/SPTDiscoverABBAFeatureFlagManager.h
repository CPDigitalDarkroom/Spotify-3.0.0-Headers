//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAbbaFeatureFlagsObserver.h"

@class NSString;

@interface SPTDiscoverABBAFeatureFlagManager : NSObject <SPTAbbaFeatureFlagsObserver>
{
    id <SPTDiscoverABBAFeatureFlagManagerDelegate> _delegate;
    id <SPTAbbaFeatureFlags> _featureFlags;
}

@property(nonatomic) __weak id <SPTAbbaFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(nonatomic) __weak id <SPTDiscoverABBAFeatureFlagManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)featureFlagsDidChange:(id)arg1;
@property(readonly, nonatomic, getter=isGroupedDiscoverTestEnabled) BOOL groupedDiscoverTestEnabled;
- (void)dealloc;
- (id)initWithFeatureFlags:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

