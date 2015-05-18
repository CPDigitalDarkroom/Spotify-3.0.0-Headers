//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface SPTLoginMarketSignupRestrictions : NSObject
{
    BOOL _canAcceptLicensesInOneStep;
    BOOL _canAcceptLicenseAgreementsImplicitly;
    BOOL _canOptInToMarketingImplicitly;
    NSString *_currentCountry;
    NSURL *_optInToMarketingContactUsURL;
}

+ (BOOL)boolValueFromJSONDictionary:(id)arg1 forKey:(id)arg2 inverted:(BOOL)arg3;
+ (id)marketSignupRestrictionsWithJSONDictionary:(id)arg1;
@property(readonly, nonatomic) NSURL *optInToMarketingContactUsURL; // @synthesize optInToMarketingContactUsURL=_optInToMarketingContactUsURL;
@property(readonly, nonatomic) BOOL canOptInToMarketingImplicitly; // @synthesize canOptInToMarketingImplicitly=_canOptInToMarketingImplicitly;
@property(readonly, nonatomic) BOOL canAcceptLicenseAgreementsImplicitly; // @synthesize canAcceptLicenseAgreementsImplicitly=_canAcceptLicenseAgreementsImplicitly;
@property(readonly, nonatomic) BOOL canAcceptLicensesInOneStep; // @synthesize canAcceptLicensesInOneStep=_canAcceptLicensesInOneStep;
@property(readonly, copy, nonatomic) NSString *currentCountry; // @synthesize currentCountry=_currentCountry;
- (void).cxx_destruct;
- (id)description;

@end
