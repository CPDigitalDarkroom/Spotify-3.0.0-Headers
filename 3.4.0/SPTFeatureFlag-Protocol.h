//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SPTFeatureFlag <NSObject>
@property(readonly, nonatomic) NSString *featureOverrideKey;
@property(readonly, nonatomic) NSString *featureFlagKey;
@property(readonly, nonatomic, getter=isEnabledByDefault) _Bool enabledByDefault;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
- (void)removeObserver:(id <SPTFeatureFlagObserver>)arg1;
- (void)addObserver:(id <SPTFeatureFlagObserver>)arg1;
- (void)stop;
- (void)start;
@end

