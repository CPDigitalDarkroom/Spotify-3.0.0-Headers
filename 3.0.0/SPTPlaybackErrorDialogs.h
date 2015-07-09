//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTPlaybackErrorDialogs.h"

@class NSString, SPTask;

@interface SPTPlaybackErrorDialogs : NSObject <SPTPlaybackErrorDialogs>
{
    BOOL _dialogs_blocked;
    SPTask *_metadataTask;
    id <SPTPlaybackErrorDialogsDelegate> _delegate;
}

@property(nonatomic) __weak id <SPTPlaybackErrorDialogsDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)allowErrorDialogsAfterShortDelay;
- (void)allowErrorDialogs;
- (BOOL)blockErrorDialogs;
- (void)showAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)showLearnAboutSyncingDialog;
- (void)disableForceOffline;
- (void)showCappingReachedDialogForError:(id)arg1;
- (void)showOnlyAvailableInPremiumDialogForError:(id)arg1;
- (void)showUnableToPlaySongDialogForError:(id)arg1;
- (void)showGoOnlineForRadioDialogForError:(id)arg1;
- (void)showNotInRegionGoOnlineForRadioDialogForError:(id)arg1;
- (void)showUnavailableDialogForError:(id)arg1;
- (void)showOnlyOnlineDialogForError:(id)arg1;
- (void)showNoForceOfflineDialogForError:(id)arg1;
- (void)showLocalTrackUnsyncedDialogForError:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
