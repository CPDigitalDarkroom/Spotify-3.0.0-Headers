//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTGaiaDeviceStateManagerObserver.h"
#import "UIAlertViewDelegate.h"

@class MessageBarController, MessageBarItem, NSString, SPTGaiaDeviceManager;

@interface GaiaMessageBarController : NSObject <SPTGaiaDeviceStateManagerObserver, UIAlertViewDelegate>
{
    SPTGaiaDeviceManager *_deviceManager;
    MessageBarController *_messageBarController;
    MessageBarItem *_messageBarItem;
}

@property(retain, nonatomic) MessageBarItem *messageBarItem; // @synthesize messageBarItem=_messageBarItem;
@property(retain, nonatomic) MessageBarController *messageBarController; // @synthesize messageBarController=_messageBarController;
@property(retain, nonatomic) SPTGaiaDeviceManager *deviceManager; // @synthesize deviceManager=_deviceManager;
- (void).cxx_destruct;
- (void)dismissMessageBarAlertItem:(id)arg1;
- (id)pressentAlertMessage:(id)arg1 includeSpeakerName:(_Bool)arg2 withAutomaticDismissDelay:(double)arg3 target:(id)arg4 action:(SEL)arg5;
- (void)deviceStateManager:(id)arg1 activeDeviceDidChange:(id)arg2;
- (void)dealloc;
- (id)initWithDeviceManager:(id)arg1 messageBarController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
