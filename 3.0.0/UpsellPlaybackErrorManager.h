//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DeferredTrialController, SPTLogCenter;

@interface UpsellPlaybackErrorManager : NSObject
{
    CDUnknownBlockType _startRadio;
    SPTLogCenter *_logCenter;
    DeferredTrialController *_deferredTrialController;
}

@property(retain, nonatomic) DeferredTrialController *deferredTrialController; // @synthesize deferredTrialController=_deferredTrialController;
@property(retain, nonatomic) SPTLogCenter *logCenter; // @synthesize logCenter=_logCenter;
@property(copy, nonatomic) CDUnknownBlockType startRadio; // @synthesize startRadio=_startRadio;
- (void).cxx_destruct;
- (BOOL)showUpsellWithTitle:(id)arg1 message:(id)arg2 primaryButtonText:(id)arg3 secondaryButtonText:(id)arg4 viewEventUri:(id)arg5 viewContext:(id)arg6 startRadio:(CDUnknownBlockType)arg7 track:(id)arg8;
- (BOOL)showCappingReachedDialog;
- (BOOL)showOnlyAvailableInPremiumDialogEligibleForTrial:(BOOL)arg1;
- (BOOL)showUnavailableTrack:(id)arg1;
- (id)initWithLogCenter:(id)arg1 withDeferredTrialController:(id)arg2 startRadio:(CDUnknownBlockType)arg3;

@end
