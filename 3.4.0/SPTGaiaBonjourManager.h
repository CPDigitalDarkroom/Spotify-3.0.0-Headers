//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSNetServiceBrowserDelegate.h"
#import "NSNetServiceDelegate.h"
#import "SPTOfflineModeStateObserver.h"

@class NSMutableArray, NSNetServiceBrowser, NSString, SPTGaiaDeviceManager;

@interface SPTGaiaBonjourManager : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate, SPTOfflineModeStateObserver>
{
    _Bool _searchingForDevices;
    SPTGaiaDeviceManager *_deviceManager;
    NSMutableArray *_services;
    NSNetServiceBrowser *_netServiceBrowser;
    id <SPTOfflineModeState> _offlineMode;
}

@property(nonatomic) _Bool searchingForDevices; // @synthesize searchingForDevices=_searchingForDevices;
@property(retain, nonatomic) id <SPTOfflineModeState> offlineMode; // @synthesize offlineMode=_offlineMode;
@property(retain, nonatomic) NSNetServiceBrowser *netServiceBrowser; // @synthesize netServiceBrowser=_netServiceBrowser;
@property(retain, nonatomic) NSMutableArray *services; // @synthesize services=_services;
@property(retain, nonatomic) SPTGaiaDeviceManager *deviceManager; // @synthesize deviceManager=_deviceManager;
- (void).cxx_destruct;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(_Bool)arg3;
- (void)stopSearchingForDevices;
- (_Bool)searchForDevices;
- (void)dealloc;
- (id)initWithDeviceManager:(id)arg1 offlineMode:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

