//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTWelcomeViewController.h"

#import "UIWebViewDelegate.h"

@class NSString, UIView, UIWebView;

@interface LoginPLIViewController : SPTWelcomeViewController <UIWebViewDelegate>
{
    UIWebView *_webView;
    UIView *_statusbarBlurBackground;
}

@property(readonly, nonatomic) UIView *statusbarBlurBackground; // @synthesize statusbarBlurBackground=_statusbarBlurBackground;
@property(readonly, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (BOOL)absoluteURL:(id)arg1 hasSubstring:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)navigateToLoginViewController;
- (id)viewEventURI;
- (BOOL)shouldWrapInScrollView;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithLoginPLIController:(id)arg1 loginStateController:(id)arg2 networkConnectivityController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

