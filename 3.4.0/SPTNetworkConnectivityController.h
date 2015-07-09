//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, NSNotificationCenter, NSUserDefaults, Reachability, SPCore;

@interface SPTNetworkConnectivityController : NSObject
{
    _Bool _forcedOffline;
    _Bool _allowSyncOver3G;
    long long _connectionType;
    id <SPTConnectivityManager> _connectivityManager;
    Reachability *_reachability;
    SPCore *_core;
    NSMapTable *_observers;
    NSNotificationCenter *_center;
    NSUserDefaults *_defaults;
}

@property(retain, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
@property(retain, nonatomic) NSNotificationCenter *center; // @synthesize center=_center;
@property(retain, nonatomic) NSMapTable *observers; // @synthesize observers=_observers;
@property(nonatomic) __weak SPCore *core; // @synthesize core=_core;
@property(retain, nonatomic) Reachability *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) id <SPTConnectivityManager> connectivityManager; // @synthesize connectivityManager=_connectivityManager;
@property(nonatomic) long long connectionType; // @synthesize connectionType=_connectionType;
@property(nonatomic) _Bool allowSyncOver3G; // @synthesize allowSyncOver3G=_allowSyncOver3G;
@property(nonatomic) _Bool forcedOffline; // @synthesize forcedOffline=_forcedOffline;
- (void).cxx_destruct;
- (void)defaultsChanged;
- (void)updateAllowSyncOver3G:(_Bool)arg1 persist:(_Bool)arg2;
- (_Bool)userDefaultsAllowSyncOver3G;
- (void)setUserDefaultsAllowSyncOver3G:(_Bool)arg1;
- (void)emitAllowSyncOver3GChangeToObservers:(_Bool)arg1;
- (void)updateForcedOffline:(_Bool)arg1 persist:(_Bool)arg2;
- (void)emitForcedOfflineChangeToObservers:(_Bool)arg1;
- (_Bool)userDefaultsForcedOffline;
- (void)setUserDefaultsForcedOffline:(_Bool)arg1;
- (void)networkReachabilityChanged;
- (long long)coreConnectionTypeFor:(long long)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 on:(id)arg2;
- (void)invalidate;
- (void)dealloc;
- (id)initWithConnectivityManager:(id)arg1 core:(id)arg2;

@end

