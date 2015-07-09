//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPSessionObserver.h"
#import "SPTNetworkConnectivityControllerObserver.h"

@class MessageBarController, MessageBarItem, NSDictionary, NSString, Reachability, SPSession, SPTNetworkConnectivityController;

@interface SPTPlayModeMonitor : NSObject <SPTNetworkConnectivityControllerObserver, SPSessionObserver>
{
    SPSession *_session;
    double _connectingMessageDelay;
    MessageBarController *_messageBarController;
    MessageBarItem *_privateModeItem;
    Reachability *_reachability;
    id <NSObject> _reachabilityObservation;
    NSDictionary *_barItems;
    SPTNetworkConnectivityController *_networkConnectivityController;
}

@property(retain, nonatomic) SPTNetworkConnectivityController *networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(retain, nonatomic) NSDictionary *barItems; // @synthesize barItems=_barItems;
@property(retain, nonatomic) id <NSObject> reachabilityObservation; // @synthesize reachabilityObservation=_reachabilityObservation;
@property(retain, nonatomic) Reachability *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) MessageBarItem *privateModeItem; // @synthesize privateModeItem=_privateModeItem;
@property(retain, nonatomic) MessageBarController *messageBarController; // @synthesize messageBarController=_messageBarController;
@property(nonatomic) double connectingMessageDelay; // @synthesize connectingMessageDelay=_connectingMessageDelay;
@property(retain, nonatomic) SPSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)session:(id)arg1 incognitoModeChangedByTimeout:(_Bool)arg2;
- (void)sessionLoginModeChanged:(id)arg1;
- (void)updateIncognitoMode;
- (void)updateOffline;
- (id)messageBarItemForState:(long long)arg1;
- (long long)playModeMonitorState;
- (void)presentConnectingItem;
- (void)dismissConnectionBarItems;
- (void)presentBarItemForState:(long long)arg1;
- (void)dismissBarItemForState:(long long)arg1;
- (void)networkConnectivityController:(id)arg1 didChangeAllowSyncOver3G:(_Bool)arg2;
- (void)networkConnectivityController:(id)arg1 didChangeForcedOffline:(_Bool)arg2;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithMessageBarController:(id)arg1 networkConnectivityController:(id)arg2 reachability:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
