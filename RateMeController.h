//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTPlayerObserver.h"

@class NSMutableArray, NSString;

@interface RateMeController : NSObject <SPTPlayerObserver>
{
    NSMutableArray *_requirementSets;
    BOOL _showingAlert;
    id <SPTProductState> _productState;
    id <SPTLocalSettings> _localSettings;
    id <SPTPlayer> _player;
}

@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(nonatomic, getter=isShowingAlert) BOOL showingAlert; // @synthesize showingAlert=_showingAlert;
- (void).cxx_destruct;
- (BOOL)showAlert:(BOOL)arg1;
- (void)addRequirementSet:(id)arg1;
@property(readonly, nonatomic) NSMutableArray *requirementSets;
- (void)applicationWillResignActiveNotification:(id)arg1;
- (void)applicationWillEnterForegroundNotification:(id)arg1;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)_showAlertDelayed:(BOOL)arg1;
- (void)_showAlert;
- (void)_actionNever;
- (void)_actionLater;
- (void)_actionRate;
- (BOOL)_allRequirementsMet;
- (void)_logEvent:(id)arg1 subEvent:(id)arg2 data:(id)arg3;
- (void)_setSetting:(id)arg1 forKey:(id)arg2;
- (id)_settingForKey:(id)arg1;
- (void)applyDefaults;
- (void)dealloc;
- (id)initWithProductState:(id)arg1 localSettings:(id)arg2 player:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
