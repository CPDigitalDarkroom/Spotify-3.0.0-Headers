//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, SPBrowserViewController;

@interface SPTLoginSignupMarketingOptInFlashController : NSObject
{
    id <SPTLoginSignupMarketingOptInFlashControllerDelegate> _delegate;
    id <SPTCommunicationsController> _communicationsController;
    SPBrowserViewController *_contactUsBrowserViewController;
    NSURL *_contactUsUrl;
}

@property(retain, nonatomic) NSURL *contactUsUrl; // @synthesize contactUsUrl=_contactUsUrl;
@property(retain, nonatomic) SPBrowserViewController *contactUsBrowserViewController; // @synthesize contactUsBrowserViewController=_contactUsBrowserViewController;
@property(retain, nonatomic) id <SPTCommunicationsController> communicationsController; // @synthesize communicationsController=_communicationsController;
@property(nonatomic) __weak id <SPTLoginSignupMarketingOptInFlashControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)notifyDelegateDidHandleFlash;
- (void)dismissContactUsBrowser;
- (void)showContactUsPage;
- (void)explicitlyOptInToMarketingAttempt:(int)arg1;
- (void)explicitlyOptInToMarketing;
- (void)promptUserForMarketingOptIn;
- (void)checkAndPromptIfNecessaryForMarketingOptIn;
- (id)initWithCommunicationsController:(id)arg1;

@end

