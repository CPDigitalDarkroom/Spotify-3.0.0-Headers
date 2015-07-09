//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSNetServiceBrowserDelegate.h"
#import "NSNetServiceDelegate.h"

@class NSMutableArray, NSNetService, NSNetServiceBrowser, NSString;

@interface IDNetServiceBrowser : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate>
{
    NSNetService *_selectedHmiService;
    id <IDNetServiceBrowserDelegate> _delegate;
    NSNetServiceBrowser *_netServiceBrowser;
    NSMutableArray *_foundServices;
    NSString *_serviceType;
    NSString *_serviceDomain;
}

@property(copy) NSString *serviceDomain; // @synthesize serviceDomain=_serviceDomain;
@property(copy) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(retain) NSMutableArray *foundServices; // @synthesize foundServices=_foundServices;
@property(retain) NSNetServiceBrowser *netServiceBrowser; // @synthesize netServiceBrowser=_netServiceBrowser;
@property id <IDNetServiceBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSNetService *selectedHmiService; // @synthesize selectedHmiService=_selectedHmiService;
- (void).cxx_destruct;
- (id)createNetServiceDescriptionForNetService:(id)arg1;
- (id)hostnameWithSocketAddress:(struct sockaddr *)arg1;
- (id)hostnameWithAddressData:(id)arg1;
- (long long)portWithSocketAddress:(struct sockaddr *)arg1;
- (long long)portWithAddressData:(id)arg1;
- (_Bool)isNetServiceLocal:(id)arg1;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)netServiceBrowserDidStopSearch:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(_Bool)arg3;
- (void)cancelNetServiceResolution;
- (void)resolveNetService;
- (void)dealloc;
- (id)initWithServiceType:(id)arg1 serviceDomain:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

