//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SPTNowPlayingEntityDecorationControllerObserver.h"
#import "SPTNowPlayingNavigationBarProtocol.h"
#import "SPTSleepTimerEventObserver.h"
#import "SPTSleepTimerTimeObserver.h"

@class NSHashTable, NSString, NSURL, SPTNowPlayingEntityDecorationController;

@interface SPTNowPlayingNavigationBarModel : UIView <SPTNowPlayingEntityDecorationControllerObserver, SPTSleepTimerTimeObserver, SPTSleepTimerEventObserver, SPTNowPlayingNavigationBarProtocol>
{
    _Bool _shouldDisableLeftBarButton;
    NSString *_entityName;
    NSString *_entityDescription;
    NSString *_entityTimerDescription;
    NSURL *_entityClickURI;
    SPTNowPlayingEntityDecorationController *_entityDecorationController;
    id <SPTSleepTimerController> _sleepTimerController;
    id <SPTSleepTimerFeature> _sleepTimerFeature;
    NSHashTable *_observers;
}

@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) __weak id <SPTSleepTimerFeature> sleepTimerFeature; // @synthesize sleepTimerFeature=_sleepTimerFeature;
@property(nonatomic) __weak id <SPTSleepTimerController> sleepTimerController; // @synthesize sleepTimerController=_sleepTimerController;
@property(retain, nonatomic) SPTNowPlayingEntityDecorationController *entityDecorationController; // @synthesize entityDecorationController=_entityDecorationController;
@property(nonatomic) _Bool shouldDisableLeftBarButton; // @synthesize shouldDisableLeftBarButton=_shouldDisableLeftBarButton;
@property(retain, nonatomic) NSURL *entityClickURI; // @synthesize entityClickURI=_entityClickURI;
@property(retain, nonatomic) NSString *entityTimerDescription; // @synthesize entityTimerDescription=_entityTimerDescription;
@property(retain, nonatomic) NSString *entityDescription; // @synthesize entityDescription=_entityDescription;
@property(retain, nonatomic) NSString *entityName; // @synthesize entityName=_entityName;
- (void).cxx_destruct;
- (void)disableNavigationBarMinimization:(_Bool)arg1;
- (id)contextMenuActionsForSleepTimerWithActionsFactory:(id)arg1;
- (_Bool)shouldEnableSleepTimer;
- (void)notifyObservers;
- (void)removeEntityTimerDescription;
- (void)timerDidCancel:(id)arg1;
- (void)timerDidEnd:(id)arg1;
- (void)timerDidStart:(id)arg1;
- (void)timer:(id)arg1 timeWasUpdated:(double)arg2;
- (void)entityDecorationControllerDidUpdate:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithEntityDecorationController:(id)arg1 sleepTimerFeature:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

