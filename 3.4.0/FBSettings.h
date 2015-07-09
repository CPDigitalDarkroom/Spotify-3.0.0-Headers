//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBSettings : NSObject
{
}

+ (void)publishInstall:(id)arg1;
+ (void)setLimitEventAndDataUsage:(_Bool)arg1;
+ (_Bool)limitEventAndDataUsage;
+ (_Bool)isBetaFeatureEnabled:(unsigned long long)arg1;
+ (void)disableBetaFeature:(unsigned long long)arg1;
+ (void)enableBetaFeature:(unsigned long long)arg1;
+ (void)enableBetaFeatures:(unsigned long long)arg1;
+ (id)defaultURLSchemeWithAppID:(id)arg1 urlSchemeSuffix:(id)arg2;
+ (void)setRestrictedTreatment:(unsigned long long)arg1;
+ (unsigned long long)restrictedTreatment;
+ (void)setResourceBundleName:(id)arg1;
+ (id)resourceBundleName;
+ (void)setLoggingBehavior:(id)arg1;
+ (id)loggingBehavior;
+ (void)setFacebookDomainPart:(id)arg1;
+ (id)facebookDomainPart;
+ (void)setDefaultUrlSchemeSuffix:(id)arg1;
+ (id)defaultUrlSchemeSuffix;
+ (void)setdefaultJPEGCompressionQuality:(double)arg1;
+ (double)defaultJPEGCompressionQuality;
+ (void)setDefaultDisplayName:(id)arg1;
+ (id)defaultDisplayName;
+ (void)setDefaultAppID:(id)arg1;
+ (id)defaultAppID;
+ (void)setClientToken:(id)arg1;
+ (id)clientToken;
+ (void)setAppVersion:(id)arg1;
+ (id)appVersion;
+ (id)platformVersion;
+ (void)enablePlatformCompatibility:(_Bool)arg1;
+ (_Bool)isPlatformCompatibilityEnabled;
+ (id)sdkVersion;
+ (void)FBSDKInitializeWithLaunchData:(id)arg1;
+ (void)load;

@end

