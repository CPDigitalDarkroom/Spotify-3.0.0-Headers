//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTTinkerbellManager.h"

@class NSString;

@interface SPTTinkerbellManagerProxy : NSObject <SPTTinkerbellManager>
{
    id <SPTTinkerbellManager> _underlyingTinkerbellManager;
}

@property(retain, nonatomic) id <SPTTinkerbellManager> underlyingTinkerbellManager; // @synthesize underlyingTinkerbellManager=_underlyingTinkerbellManager;
- (void).cxx_destruct;
- (void)markStory:(id)arg1 asPermanentlyDismissedStartingWithItem:(id)arg2;
- (void)resetStateOfTinkerbellItem:(id)arg1;
- (long long)stateOfTinkerbellItem:(id)arg1;
- (_Bool)hasCompletedTinkerbellItem:(id)arg1;
- (_Bool)hasCompletedTinkerbellStory:(id)arg1;
- (id)presentItem:(id)arg1 anchoredToView:(id)arg2 dimNonInteractable:(_Bool)arg3 error:(out id *)arg4 action:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (id)presentTooltipItem:(id)arg1 anchoredToView:(id)arg2 dimNonInteractable:(_Bool)arg3 error:(out id *)arg4 completion:(CDUnknownBlockType)arg5;
- (id)presentBannerItem:(id)arg1 error:(out id *)arg2 action:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)canPresentTinkerbellItem:(id)arg1;
@property(readonly, nonatomic, getter=isPresentingTinkerbellItem) _Bool presentingTinkerbellItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

