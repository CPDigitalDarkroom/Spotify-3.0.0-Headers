//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPViewController.h"

#import "UIWebViewDelegate.h"

@class NSString, UIWebView;

@interface TermsViewController : SPViewController <UIWebViewDelegate>
{
    UIWebView *_webView;
    NSString *_viewEventURI;
}

@property(retain, nonatomic) NSString *viewEventURI; // @synthesize viewEventURI=_viewEventURI;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)splitURL:(id)arg1 gettingLocation:(out id *)arg2 query:(out id *)arg3 fragment:(out id *)arg4;
- (void)webViewDidFinishLoad:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (BOOL)automaticallyAdjustsScrollViewInsets;
- (void)showMobileTermsAndConditions;
- (void)showPrivacyPolicy;
- (void)showTermsAndConditions;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

