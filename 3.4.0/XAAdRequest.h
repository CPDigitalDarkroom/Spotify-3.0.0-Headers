//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSDictionary, NSMutableArray, NSNumber, NSString;

@interface XAAdRequest : NSObject <NSCopying>
{
    _Bool _dfpRequest;
    _Bool _latestAd;
    NSString *_uuid;
    NSString *_adName;
    NSString *_tag;
    unsigned long long _length;
    NSNumber *_networkId;
    NSString *_adUnit;
    NSDictionary *_dfpParameters;
    NSString *_genre;
    NSString *_stationFormat;
    double _latitude;
    double _longitude;
    NSString *_appKey;
    NSString *_apiKey;
    NSArray *_adNames;
    NSString *_locationDescription;
    NSMutableArray *_keywords;
    struct __CFUUID *_uuidRef;
}

+ (id)bulkAdRequestWithAppKey:(id)arg1 apiKey:(id)arg2 withAdNames:(id)arg3;
+ (id)bulkAdRequestWithAppKey:(id)arg1 apiKey:(id)arg2;
+ (id)adRequestWithAdLength:(unsigned long long)arg1;
+ (id)adRequestWithAdTag:(id)arg1;
+ (id)adRequestWithAdName:(id)arg1;
+ (id)adRequestForDfpWithNetworkId:(id)arg1 andAdUnit:(id)arg2 withParameters:(id)arg3;
+ (id)adRequestForDfp;
@property struct __CFUUID *uuidRef; // @synthesize uuidRef=_uuidRef;
@property(retain, nonatomic) NSMutableArray *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) NSString *locationDescription; // @synthesize locationDescription=_locationDescription;
@property(retain, nonatomic) NSArray *adNames; // @synthesize adNames=_adNames;
@property(copy, nonatomic) NSString *apiKey; // @synthesize apiKey=_apiKey;
@property(copy, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(nonatomic) _Bool latestAd; // @synthesize latestAd=_latestAd;
@property(readonly, nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(readonly, nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *stationFormat; // @synthesize stationFormat=_stationFormat;
@property(retain, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property(retain, nonatomic) NSDictionary *dfpParameters; // @synthesize dfpParameters=_dfpParameters;
@property(retain, nonatomic) NSString *adUnit; // @synthesize adUnit=_adUnit;
@property(retain, nonatomic) NSNumber *networkId; // @synthesize networkId=_networkId;
@property(nonatomic) _Bool dfpRequest; // @synthesize dfpRequest=_dfpRequest;
@property(nonatomic) unsigned long long length; // @synthesize length=_length;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSString *adName; // @synthesize adName=_adName;
@property(readonly, retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (void)setLocationWithDescription:(id)arg1;
- (void)setLocationWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)keywordsAsCommaDelimitedString;
- (void)addKeyword:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToAdRequest:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithNetworkId:(id)arg1 andAdUnit:(id)arg2 withParameters:(id)arg3;
- (id)initWithAppKey:(id)arg1 apiKey:(id)arg2;
- (id)initWithAdName:(id)arg1 adLength:(unsigned long long)arg2;
- (id)initWithUUID:(id)arg1;
- (id)init;

@end

