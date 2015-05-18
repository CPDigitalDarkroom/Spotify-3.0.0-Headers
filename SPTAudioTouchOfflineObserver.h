//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTOfflineModeStateObserver.h"

@class NSHashTable, NSString;

@interface SPTAudioTouchOfflineObserver : NSObject <SPTOfflineModeStateObserver>
{
    id <SPTOfflineModeState> _offlineNotifier;
    NSHashTable *_engines;
}

@property(retain, nonatomic) NSHashTable *engines; // @synthesize engines=_engines;
@property(retain, nonatomic) id <SPTOfflineModeState> offlineNotifier; // @synthesize offlineNotifier=_offlineNotifier;
- (void).cxx_destruct;
- (void)offlineModeState:(id)arg1 updated:(BOOL)arg2;
- (void)stateChanged;
- (BOOL)isOnline;
- (void)addViewEngine:(id)arg1;
- (void)dealloc;
- (id)initWithOfflineNotifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

