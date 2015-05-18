//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBTweakViewControllerDelegate.h"
#import "MFMailComposeViewControllerDelegate.h"

@class NSString;

@interface SpotifyDebugController : NSObject <MFMailComposeViewControllerDelegate, FBTweakViewControllerDelegate>
{
}

- (void)alertHardResetPressedOK;
- (void)tweakViewControllerPressedDone:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)mail;
- (void)registerDebugActions:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
