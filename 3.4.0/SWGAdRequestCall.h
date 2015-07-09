//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SWGObject.h"

@class NSNumber, NSString, SWGAdRequestContext, SWGDfpAdRequest;

@interface SWGAdRequestCall : SWGObject
{
    SWGAdRequestContext *_context;
    NSNumber *_duration;
    NSString *_adName;
    NSNumber *_demo;
    NSString *_audioRouteName;
    NSNumber *_latestAd;
    NSNumber *_dfp;
    SWGDfpAdRequest *_dfpRequest;
    NSNumber *_adId;
    NSString *_sessionKey;
    NSString *_audioRouteType;
}

@property(retain, nonatomic) NSString *audioRouteType; // @synthesize audioRouteType=_audioRouteType;
@property(retain, nonatomic) NSString *sessionKey; // @synthesize sessionKey=_sessionKey;
@property(retain, nonatomic) NSNumber *adId; // @synthesize adId=_adId;
@property(retain, nonatomic) SWGDfpAdRequest *dfpRequest; // @synthesize dfpRequest=_dfpRequest;
@property(retain, nonatomic) NSNumber *dfp; // @synthesize dfp=_dfp;
@property(retain, nonatomic) NSNumber *latestAd; // @synthesize latestAd=_latestAd;
@property(retain, nonatomic) NSString *audioRouteName; // @synthesize audioRouteName=_audioRouteName;
@property(retain, nonatomic) NSNumber *demo; // @synthesize demo=_demo;
@property(retain, nonatomic) NSString *adName; // @synthesize adName=_adName;
@property(retain, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) SWGAdRequestContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)asDictionary;
- (id)initWithValues:(id)arg1;
- (id)context:(id)arg1 duration:(id)arg2 adName:(id)arg3 demo:(id)arg4 audioRouteName:(id)arg5 latestAd:(id)arg6 dfp:(id)arg7 dfpRequest:(id)arg8 adId:(id)arg9 sessionKey:(id)arg10 audioRouteType:(id)arg11;

@end
