//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTOfflineModeStateObserver.h"

@class NSMapTable, NSString;

@interface SPTNewMusicTuesdayOnlineObserver : NSObject <SPTOfflineModeStateObserver>
{
    id <SPTOfflineModeState> _offlineNotifier;
    NSMapTable *_observers;
}

@property(retain, nonatomic) NSMapTable *observers; // @synthesize observers=_observers;
@property(nonatomic) __weak id <SPTOfflineModeState> offlineNotifier; // @synthesize offlineNotifier=_offlineNotifier;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 on:(id)arg2;
- (void)offlineModeState:(id)arg1 updated:(BOOL)arg2;
- (id)initWithOfflineNotifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
