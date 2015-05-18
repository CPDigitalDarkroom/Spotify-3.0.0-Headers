//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIApplication;

@interface SPTFeedbackRemoteTriggerPolicy : NSObject
{
    id <SPTFeedbackRemoteTriggerPolicyDelegate> _delegate;
    UIApplication *_application;
    id <SPTLocalSettings> _localSettings;
}

@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) UIApplication *application; // @synthesize application=_application;
@property(nonatomic) __weak id <SPTFeedbackRemoteTriggerPolicyDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)applicationWillEnterForegroundNotification:(id)arg1;
- (void)triggerPolicyIfNeeded;
- (BOOL)canShare;
- (void)setupNotifications;
- (void)dealloc;
- (id)initWithApplication:(id)arg1 localSettings:(id)arg2;

@end

