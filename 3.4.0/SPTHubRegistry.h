//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface SPTHubRegistry : NSObject
{
    NSMutableDictionary *_registrationsForIdentifiers;
    NSMutableDictionary *_registrationsForRootViewURIs;
}

@property(readonly, nonatomic) NSMutableDictionary *registrationsForRootViewURIs; // @synthesize registrationsForRootViewURIs=_registrationsForRootViewURIs;
@property(readonly, nonatomic) NSMutableDictionary *registrationsForIdentifiers; // @synthesize registrationsForIdentifiers=_registrationsForIdentifiers;
- (void).cxx_destruct;
- (id)hubRegistrationForViewURI:(id)arg1;
- (id)hubRegistrationForIdentifier:(id)arg1;
- (id)registerHubWithIdentifier:(id)arg1 rootViewURI:(id)arg2 title:(id)arg3 icon:(unsigned long long)arg4 contentProviderFactory:(id)arg5 viewHandler:(id)arg6 externalDataRootEndpointPath:(id)arg7 isPartOfMomentsExperience:(_Bool)arg8;
- (void)addHubRegistration:(id)arg1;
- (id)init;

@end
