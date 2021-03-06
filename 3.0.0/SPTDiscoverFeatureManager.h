//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTDiscoverABBAFeatureFlagManager;

@interface SPTDiscoverFeatureManager : NSObject
{
    id <SPTLocalSettings> _localSettings;
    id <SPTProductState> _productState;
    SPTDiscoverABBAFeatureFlagManager *_ABBAFeatureFlagManager;
}

@property(retain, nonatomic) SPTDiscoverABBAFeatureFlagManager *ABBAFeatureFlagManager; // @synthesize ABBAFeatureFlagManager=_ABBAFeatureFlagManager;
@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
- (void).cxx_destruct;
- (BOOL)isGroupedDiscoverEnabled;
- (id)initWithLocalSettings:(id)arg1 productState:(id)arg2 ABBAFeatureFlagManager:(id)arg3;

@end

