//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BITHockeyBaseManager.h"

#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class BITFeedbackComposeViewController, BITFeedbackListViewController, NSDate, NSFileManager, NSMutableArray, NSNumber, NSString, UITapGestureRecognizer;

@interface BITFeedbackManager : BITHockeyBaseManager <UIGestureRecognizerDelegate, UIAlertViewDelegate>
{
    NSFileManager *_fileManager;
    NSString *_settingsFile;
    id _appDidBecomeActiveObserver;
    id _appDidEnterBackgroundObserver;
    id _networkDidBecomeReachableObserver;
    _Bool _incomingMessagesAlertShowing;
    _Bool _didEnterBackgroundState;
    _Bool _networkRequestInProgress;
    long long _observationMode;
    _Bool _showAlertOnIncomingMessages;
    _Bool _showFirstRequiredPresentationModal;
    _Bool _disableFeedbackManager;
    _Bool _didAskUserData;
    _Bool _screenshotNotificationEnabled;
    long long _requireUserName;
    long long _requireUserEmail;
    long long _feedbackObservationMode;
    id <BITFeedbackManagerDelegate> _delegate;
    NSMutableArray *_feedbackList;
    NSString *_token;
    BITFeedbackListViewController *_currentFeedbackListViewController;
    BITFeedbackComposeViewController *_currentFeedbackComposeViewController;
    NSDate *_lastCheck;
    NSNumber *_lastMessageID;
    NSString *_userID;
    NSString *_userName;
    NSString *_userEmail;
    UITapGestureRecognizer *_tapRecognizer;
}

@property(nonatomic) _Bool screenshotNotificationEnabled; // @synthesize screenshotNotificationEnabled=_screenshotNotificationEnabled;
@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(copy, nonatomic) NSString *userEmail; // @synthesize userEmail=_userEmail;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSNumber *lastMessageID; // @synthesize lastMessageID=_lastMessageID;
@property(retain, nonatomic) NSDate *lastCheck; // @synthesize lastCheck=_lastCheck;
@property(nonatomic) _Bool didAskUserData; // @synthesize didAskUserData=_didAskUserData;
@property(retain, nonatomic) BITFeedbackComposeViewController *currentFeedbackComposeViewController; // @synthesize currentFeedbackComposeViewController=_currentFeedbackComposeViewController;
@property(retain, nonatomic) BITFeedbackListViewController *currentFeedbackListViewController; // @synthesize currentFeedbackListViewController=_currentFeedbackListViewController;
@property(nonatomic, getter=isFeedbackManagerDisabled) _Bool disableFeedbackManager; // @synthesize disableFeedbackManager=_disableFeedbackManager;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSMutableArray *feedbackList; // @synthesize feedbackList=_feedbackList;
@property(nonatomic) __weak id <BITFeedbackManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showFirstRequiredPresentationModal; // @synthesize showFirstRequiredPresentationModal=_showFirstRequiredPresentationModal;
@property(nonatomic) long long feedbackObservationMode; // @synthesize feedbackObservationMode=_feedbackObservationMode;
@property(nonatomic) _Bool showAlertOnIncomingMessages; // @synthesize showAlertOnIncomingMessages=_showAlertOnIncomingMessages;
@property(nonatomic) long long requireUserEmail; // @synthesize requireUserEmail=_requireUserEmail;
@property(nonatomic) long long requireUserName; // @synthesize requireUserName=_requireUserName;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)screenshotTripleTap:(id)arg1;
- (void)extractLastPictureFromLibraryAndLaunchFeedback;
- (void)screenshotNotificationReceived:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)submitMessageWithText:(id)arg1 andAttachments:(id)arg2;
- (void)submitPendingMessages;
- (void)fetchMessageUpdates;
- (void)sendNetworkRequestWithHTTPMethod:(id)arg1 withMessage:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateMessageListFromResponse:(id)arg1;
- (_Bool)isManualUserDataAvailable;
- (_Bool)requireManualUserDataMissing;
- (_Bool)askManualUserDataAvailable;
- (void)deleteAllMessages;
- (_Bool)deleteMessageAtIndex:(unsigned long long)arg1;
- (void)updateLastMessageID;
- (void)markSendInProgressMessagesAsInConflict;
- (void)markSendInProgressMessagesAsPending;
- (id)lastMessageHavingID;
- (id)messagesWithStatus:(long long)arg1;
- (id)messageWithID:(id)arg1;
- (id)messageAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfMessages;
- (void)sortFeedbackList;
- (void)updateDidAskUserData;
- (void)saveMessages;
- (void)loadMessages;
- (void)updateAppDefinedUserData;
- (_Bool)updateUserEmailUsingKeychainAndDelegate;
- (_Bool)updateUserNameUsingKeychainAndDelegate;
- (_Bool)updateUserIDUsingKeychainAndDelegate;
- (void)updateMessagesListIfRequired;
- (void)updateMessagesList;
- (void)startManager;
- (void)showFeedbackComposeViewWithGeneratedScreenshot;
- (void)showFeedbackComposeViewWithPreparedItems:(id)arg1;
- (void)showFeedbackComposeView;
- (id)feedbackComposeViewController;
- (void)showFeedbackListView;
- (id)feedbackListViewController:(_Bool)arg1;
- (id)screenshot;
- (id)uuidAsLowerCaseAndShortened;
- (id)uuidString;
- (void)unregisterObservers;
- (void)registerObservers;
- (void)didEnterBackgroundActions;
- (void)didBecomeActiveActions;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

