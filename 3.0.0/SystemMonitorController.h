//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPSessionObserver.h"
#import "SPTNetworkConnectivityControllerObserver.h"

@class MessageBarItem, NSString, NSTimer, SPTNetworkConnectivityController;

@interface SystemMonitorController : NSObject <SPTNetworkConnectivityControllerObserver, SPSessionObserver>
{
    MessageBarItem *_offlineItem;
    MessageBarItem *_connectingItem;
    MessageBarItem *_offlineModeItem;
    MessageBarItem *_privateModeItem;
    MessageBarItem *_systemMonitoringItem;
    BOOL _systemMonitoringEnabled;
    NSTimer *_systemMonitoringTimer;
    long _previousMemoryUsage;
    id <NSObject> _reachabilityObservation;
    SPTNetworkConnectivityController *_networkConnectivityController;
}

+ (id)defaultController;
@property(retain, nonatomic) SPTNetworkConnectivityController *networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
- (void).cxx_destruct;
- (void)session:(id)arg1 incognitoModeChangedByTimeout:(BOOL)arg2;
- (void)sessionLoginModeChanged:(id)arg1;
@property(nonatomic, getter=isSystemMonitoringEnabled) BOOL systemMonitoringEnabled;
- (void)applicationDidReceiveMemoryWarningNotification:(id)arg1;
- (void)_updateSystemMonitoringMessageItem;
- (unsigned int)_freeMemory;
- (unsigned int)_usedMemory;
- (void)_updateIncognitoMode;
- (void)_updateSyncOver3G;
- (void)_updateOffline;
- (void)_presentConnectingItem;
- (void)networkConnectivityController:(id)arg1 didChangeAllowSyncOver3G:(BOOL)arg2;
- (void)networkConnectivityController:(id)arg1 didChangeForcedOffline:(BOOL)arg2;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

