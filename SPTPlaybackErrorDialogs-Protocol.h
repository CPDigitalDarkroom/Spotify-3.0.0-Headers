//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@protocol SPTPlaybackErrorDialogs <NSObject>
@property(nonatomic) __weak id <SPTPlaybackErrorDialogsDelegate> delegate;
- (void)showUnableToPlaySongDialogForError:(NSError *)arg1;
- (void)showCappingReachedDialogForError:(NSError *)arg1;
- (void)showOnlyAvailableInPremiumDialogForError:(NSError *)arg1;
- (void)showUnavailableDialogForError:(NSError *)arg1;
- (void)showGoOnlineForRadioDialogForError:(NSError *)arg1;
- (void)showNotInRegionGoOnlineForRadioDialogForError:(NSError *)arg1;
- (void)showOnlyOnlineDialogForError:(NSError *)arg1;
- (void)showNoForceOfflineDialogForError:(NSError *)arg1;
- (void)showLocalTrackUnsyncedDialogForError:(NSError *)arg1;
@end

