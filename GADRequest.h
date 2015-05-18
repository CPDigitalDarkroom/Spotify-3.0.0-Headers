//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class GADLocation, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface GADRequest : NSObject <NSCopying>
{
    NSArray *_testDevices;
    int _gender;
    NSDate *_birthday;
    NSArray *_keywords;
    NSString *_contentURL;
    NSString *_requestAgent;
    NSMutableDictionary *_networkExtrasMap;
    GADLocation *_location;
    NSNumber *_childDirectedTreatment;
    NSDictionary *_privateMediationExtras;
    NSArray *_formatParameters;
    int _responseType;
    unsigned int _correlationID;
}

+ (id)sdkVersion;
+ (int)requestTypeFromString:(id)arg1;
+ (void)initialize;
+ (id)request;
+ (id)extendedSDKVersionNumber;
+ (id)sdkVersionIdentifiers;
+ (id)sdkVersionMetadata;
@property(nonatomic) unsigned int correlationID; // @synthesize correlationID=_correlationID;
@property(nonatomic) int responseType; // @synthesize responseType=_responseType;
@property(copy, nonatomic) NSArray *formatParameters; // @synthesize formatParameters=_formatParameters;
@property(copy, nonatomic) NSDictionary *privateMediationExtras; // @synthesize privateMediationExtras=_privateMediationExtras;
@property(copy, nonatomic) NSNumber *childDirectedTreatment; // @synthesize childDirectedTreatment=_childDirectedTreatment;
@property(copy, nonatomic) GADLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSMutableDictionary *networkExtrasMap; // @synthesize networkExtrasMap=_networkExtrasMap;
@property(copy, nonatomic) NSString *requestAgent; // @synthesize requestAgent=_requestAgent;
@property(copy, nonatomic) NSString *contentURL; // @synthesize contentURL=_contentURL;
@property(copy, nonatomic) NSArray *keywords; // @synthesize keywords=_keywords;
@property(copy, nonatomic) NSDate *birthday; // @synthesize birthday=_birthday;
@property(nonatomic) int gender; // @synthesize gender=_gender;
@property(copy, nonatomic) NSArray *testDevices; // @synthesize testDevices=_testDevices;
- (void).cxx_destruct;
- (void)setBirthdayWithMonth:(int)arg1 day:(int)arg2 year:(int)arg3;
- (id)parameters;
- (BOOL)isATestDevice;
- (id)analyticsIDs;
- (void)tagForChildDirectedTreatment:(BOOL)arg1;
- (void)setLocationWithDescription:(id)arg1;
- (void)setLocationWithLatitude:(float)arg1 longitude:(float)arg2 accuracy:(float)arg3;
- (id)contentURLString;
- (id)birthdayString;
- (id)genderString;
- (id)networkExtrasAdditionalParameters;
- (void)removeAdNetworkExtrasFor:(Class)arg1;
- (id)adNetworkExtrasFor:(Class)arg1;
- (void)registerAdNetworkExtras:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

