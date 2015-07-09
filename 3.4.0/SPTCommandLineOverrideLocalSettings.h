//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTLocalSettings.h"
#import "SPTLocalSettingsObserver.h"

@class NSMapTable, NSMutableDictionary, NSString;

@interface SPTCommandLineOverrideLocalSettings : NSObject <SPTLocalSettingsObserver, SPTLocalSettings>
{
    id <SPTLocalSettings> _underlyingSettings;
    NSMutableDictionary *_overrides;
    NSMapTable *_observers;
}

@property(readonly, nonatomic) NSMapTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) NSMutableDictionary *overrides; // @synthesize overrides=_overrides;
@property(readonly, nonatomic) id <SPTLocalSettings> underlyingSettings; // @synthesize underlyingSettings=_underlyingSettings;
- (void).cxx_destruct;
- (void)localSettingsDidChange:(id)arg1;
- (void)invokeObservers;
- (void)removeNotifications;
- (void)registerNotifications;
- (id)allKeys;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 onQueue:(id)arg2;
- (id)initWithArguments:(id)arg1 underlyingSettings:(id)arg2 featureIdentifier:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

