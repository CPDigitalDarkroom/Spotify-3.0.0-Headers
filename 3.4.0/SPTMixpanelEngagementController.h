//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTMixpanelEngagementController.h"

@class Mixpanel, NSDictionary, NSString;

@interface SPTMixpanelEngagementController : NSObject <SPTMixpanelEngagementController>
{
    Mixpanel *_mixpanel;
}

@property(retain, nonatomic) Mixpanel *mixpanel; // @synthesize mixpanel=_mixpanel;
- (void).cxx_destruct;
- (void)clearSuperProperties;
- (void)unregisterSuperProperty:(id)arg1;
- (void)registerSuperPropertiesOnce:(id)arg1 defaultValue:(id)arg2;
- (void)registerSuperPropertiesOnce:(id)arg1;
- (void)registerSuperProperties:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *currentSuperProperties;
- (void)trackEvent:(id)arg1 properties:(id)arg2;
- (void)trackEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
