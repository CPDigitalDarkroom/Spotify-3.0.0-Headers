//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCBrowserViewControllerDelegate.h"
#import "MCSessionDelegate.h"

@class MCSession, NSString;

@interface SPTThemeRemoteUpdater : NSObject <MCBrowserViewControllerDelegate, MCSessionDelegate>
{
    id <SPTThemeRemoteUpdateReceiver> _updateReceiver;
    long long _currentType;
    unsigned long long _expectedMessageType;
    MCSession *_session;
}

+ (long long)themePropertyFromString:(id)arg1;
@property(retain, nonatomic) MCSession *session; // @synthesize session=_session;
@property(nonatomic) unsigned long long expectedMessageType; // @synthesize expectedMessageType=_expectedMessageType;
@property(nonatomic) long long currentType; // @synthesize currentType=_currentType;
@property(nonatomic) __weak id <SPTThemeRemoteUpdateReceiver> updateReceiver; // @synthesize updateReceiver=_updateReceiver;
- (void).cxx_destruct;
- (void)session:(id)arg1 didFinishReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 atURL:(id)arg4 withError:(id)arg5;
- (void)session:(id)arg1 didStartReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 withProgress:(id)arg4;
- (void)session:(id)arg1 didReceiveStream:(id)arg2 withName:(id)arg3 fromPeer:(id)arg4;
- (void)session:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(long long)arg3;
- (void)browserViewControllerWasCancelled:(id)arg1;
- (void)browserViewControllerDidFinish:(id)arg1;
- (void)presentRemoteUpdaterBrowserOnViewController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

