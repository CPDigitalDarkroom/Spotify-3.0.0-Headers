//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAccountProductInformationObserver.h"
#import "SPTOfflineModeStateObserver.h"

@class NSSet, NSString, SPTNetworkConnectivityController;

@interface SPTTelcoActivationPrerequisites : NSObject <SPTOfflineModeStateObserver, SPTAccountProductInformationObserver>
{
    BOOL _satisfied;
    NSSet *_prerequsites;
    NSSet *_missingPrerequsites;
    id <SPTOfflineModeState> _offlineState;
    id <SPTAccountProductInformationController> _productInformationController;
    SPTNetworkConnectivityController *_connectivityController;
}

+ (id)allRequisites;
@property(retain, nonatomic) SPTNetworkConnectivityController *connectivityController; // @synthesize connectivityController=_connectivityController;
@property(readonly, nonatomic) id <SPTAccountProductInformationController> productInformationController; // @synthesize productInformationController=_productInformationController;
@property(retain, nonatomic) id <SPTOfflineModeState> offlineState; // @synthesize offlineState=_offlineState;
@property(nonatomic) BOOL satisfied; // @synthesize satisfied=_satisfied;
@property(copy, nonatomic) NSSet *missingPrerequsites; // @synthesize missingPrerequsites=_missingPrerequsites;
@property(copy, nonatomic) NSSet *prerequsites; // @synthesize prerequsites=_prerequsites;
- (void).cxx_destruct;
- (void)currentProductDidChangeForProductInformationController:(id)arg1;
- (void)offlineModeState:(id)arg1 updated:(BOOL)arg2;
- (BOOL)checkNotConnectedToWiFi;
- (BOOL)checkConnectedToCellularNetwork;
- (BOOL)checkUserIsFree;
- (BOOL)checkClientIsOnline;
- (BOOL)isRequisiteSatisfied:(int)arg1;
- (void)updateRequisiteStatuses;
- (void)dealloc;
- (id)initWithPrerequisites:(id)arg1 offlineState:(id)arg2 productInformationController:(id)arg3 connectivityController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

