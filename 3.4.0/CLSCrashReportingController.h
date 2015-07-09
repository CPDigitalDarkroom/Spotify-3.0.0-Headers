//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLSNetworkClientDelegate.h"
#import "CLSReportsControllerDelegate.h"

@class CLSFileManager, CLSInternalReport, CLSNetworkClient, CLSReportsController, CLSSettings, NSOperationQueue, NSString, UIAlertView;

@interface CLSCrashReportingController : NSObject <CLSNetworkClientDelegate, CLSReportsControllerDelegate>
{
    CLSFileManager *_fileMananger;
    CLSNetworkClient *_networkClient;
    CLSReportsController *_reportsController;
    NSOperationQueue *_operationQueue;
    CLSSettings *_settings;
    long long _alwaysSendButtonIndex;
    UIAlertView *_crashReportSubmissionAlert;
    CLSInternalReport *_promptedReport;
    long long _promptChoice;
    id <CLSCrashReportingControllerDelegate> _delegate;
    CLSFileManager *_fileManager;
}

@property(retain, nonatomic) CLSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(retain, nonatomic) CLSNetworkClient *networkClient; // @synthesize networkClient=_networkClient;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) __weak id <CLSCrashReportingControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reportsControllerDidCompleteAllSubmissions:(id)arg1;
- (void)reportsController:(id)arg1 didCompletePackageSubmission:(id)arg2 error:(id)arg3;
- (id)bundleIdentifierForReportsController:(id)arg1;
- (id)APIKeyForReportsController:(id)arg1;
- (id)settingsForReportsController:(id)arg1;
- (void)networkClient:(id)arg1 didFinishUploadWithPath:(id)arg2 error:(id)arg3;
- (_Bool)networkClientCanUseBackgroundSessions:(id)arg1;
- (void)didChangeUIOrientation:(id)arg1;
- (void)didChangeOrientation:(id)arg1;
- (void)didBecomeInactive:(id)arg1;
- (void)willBecomeActive:(id)arg1;
- (void)captureInitialNotificationStates;
- (void)setupStateNotifications;
- (_Bool)checkForAndCreateLaunchMarker;
- (_Bool)removeLaunchFailureMarker;
- (_Bool)launchFailureMarkerPresent;
- (_Bool)createLaunchFailureMarker;
- (id)launchFailureMarkerPath;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)handlePromptCompleteForReport:(id)arg1 shouldSubmit:(_Bool)arg2 shouldMarkAlwaysSubmit:(_Bool)arg3;
- (void)setupAndDisplayAlertWithTitle:(id)arg1 message:(id)arg2 cancel:(id)arg3 send:(id)arg4 alwaysSend:(id)arg5 report:(id)arg6;
- (void)displayPermissionAlertForReport:(id)arg1;
- (void)retryUploadForReportAtPath:(id)arg1;
- (void)uploadPreexistingFiles:(id)arg1;
- (void)handleExistingFilesInPrepared;
- (void)handleExistingFilesInProcessing;
- (void)handleContentsInOtherReportingDirectories;
- (void)removeReport:(id)arg1;
- (void)handleDelegateCompletionForReport:(id)arg1 submit:(_Bool)arg2;
- (void)processExistingActiveReportPath:(id)arg1 asUrgent:(_Bool)arg2;
- (void)processExistingReportPaths:(id)arg1 asUrgent:(_Bool)arg2;
- (id)setupCurrentReport;
- (void)installCrashReportingHandlers:(CDStruct_1e2a2a70 *)arg1;
- (_Bool)prepareForNewLaunch;
- (id)bundleIdentifier;
- (_Bool)needsToPrompt;
- (_Bool)canProcessUrgentReports;
- (_Bool)delegateNeedsToBeInformedOfReports;
- (_Bool)packagingEnabled;
- (void)checkForUserPromptSetting;
- (_Bool)potentiallySubmittableCrashOccurred;
- (_Bool)attemptCurrentReportSubmission;
- (void)deliverCrashDelegateCallback;
- (unsigned int)machExceptionMask;
- (id)settings;
- (id)APIKey;
- (id)installIdentifier;
- (_Bool)firstInstall;
@property(readonly, nonatomic) CLSReportsController *reportsController;
- (_Bool)checkPreconditions;
- (void)crashReportingSetupCompleted;
- (_Bool)startCrashReporterWithAPIKey:(id)arg1 betaToken:(id)arg2 report:(id)arg3;
- (_Bool)startWithProfilingMark:(unsigned long long)arg1 betaToken:(id)arg2;
- (id)clientWithOperationQueue:(id)arg1;
- (id)initWithFileManager:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

