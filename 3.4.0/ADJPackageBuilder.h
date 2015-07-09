//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ADJActivityState, ADJAttribution, ADJConfig, ADJDeviceInfo, NSDate, NSDictionary;

@interface ADJPackageBuilder : NSObject
{
    ADJDeviceInfo *_deviceInfo;
    ADJActivityState *_activityState;
    ADJConfig *_adjustConfig;
    ADJAttribution *_attribution;
    NSDate *_clickTime;
    NSDate *_purchaseTime;
    NSDictionary *_deeplinkParameters;
}

@property(retain, nonatomic) NSDictionary *deeplinkParameters; // @synthesize deeplinkParameters=_deeplinkParameters;
@property(copy, nonatomic) NSDate *purchaseTime; // @synthesize purchaseTime=_purchaseTime;
@property(copy, nonatomic) NSDate *clickTime; // @synthesize clickTime=_clickTime;
@property(copy, nonatomic) ADJAttribution *attribution; // @synthesize attribution=_attribution;
@property(copy, nonatomic) ADJConfig *adjustConfig; // @synthesize adjustConfig=_adjustConfig;
@property(copy, nonatomic) ADJActivityState *activityState; // @synthesize activityState=_activityState;
@property(copy, nonatomic) ADJDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
- (void).cxx_destruct;
- (id)joinParamters:(id)arg1 parameters:(id)arg2;
- (void)parameters:(id)arg1 setNumber:(id)arg2 forKey:(id)arg3;
- (void)parameters:(id)arg1 setNumberBool:(id)arg2 forKey:(id)arg3;
- (void)parameters:(id)arg1 setBool:(_Bool)arg2 forKey:(id)arg3;
- (void)parameters:(id)arg1 setDictionaryJson:(id)arg2 forKey:(id)arg3;
- (void)parameters:(id)arg1 setDuration:(double)arg2 forKey:(id)arg3;
- (void)parameters:(id)arg1 setDate:(id)arg2 forKey:(id)arg3;
- (void)parameters:(id)arg1 setDate1970:(double)arg2 forKey:(id)arg3;
- (void)parameters:(id)arg1 setInt:(int)arg2 forKey:(id)arg3;
- (void)parameters:(id)arg1 setString:(id)arg2 forKey:(id)arg3;
- (id)eventSuffix:(id)arg1;
- (void)injectActivityState:(id)arg1 intoParamters:(id)arg2;
- (void)injectDeviceInfo:(id)arg1 config:(id)arg2 intoParameters:(id)arg3;
- (id)defaultParameters;
- (id)defaultActivityPackage;
- (id)buildAttributionPackage;
- (id)buildClickPackage:(id)arg1;
- (id)buildEventPackage:(id)arg1;
- (id)buildSessionPackage;
- (id)initWithDeviceInfo:(id)arg1 activityState:(id)arg2 config:(id)arg3;

@end

