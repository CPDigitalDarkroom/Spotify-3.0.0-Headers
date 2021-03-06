//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTShowcaseModel : NSObject
{
}

+ (void)clearSeenFeatures;
+ (void)didShowFeature:(id)arg1;
+ (_Bool)isEnabledViaABBAFeatureFlag:(id)arg1 truthyValues:(id)arg2 ABBAFeatureFlags:(id)arg3;
+ (_Bool)isProductStateEnabledForFeatureFlag:(id)arg1 inProductState:(id)arg2 allowedValues:(id)arg3;
+ (_Bool)isCandidateEnabledForCurrentUser:(id)arg1 ABBAFeatureFlags:(id)arg2 productState:(id)arg3;
+ (id)standaloneFeatures:(id)arg1;
+ (id)contentToShowForProductState:(id)arg1 ABBAFeatureFlags:(id)arg2 dynamicShowcaseRegistry:(id)arg3 localSettings:(id)arg4;

@end

