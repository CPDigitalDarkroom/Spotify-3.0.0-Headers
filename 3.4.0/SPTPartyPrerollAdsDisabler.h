//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTPartyPrerollAdsDisabler : NSObject
{
    id <SPTAdsManager> _adsManager;
}

@property(nonatomic) __weak id <SPTAdsManager> adsManager; // @synthesize adsManager=_adsManager;
- (void).cxx_destruct;
- (void)enablePrerollAds;
- (void)disablePrerollAdsIfViewingPartyForFirstTime;
- (id)initWithAdsManager:(id)arg1;

@end

