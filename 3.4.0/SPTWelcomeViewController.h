//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPViewController.h"

@class LoginPLIController, LoginStateController, SPTNetworkConnectivityController, SPTProgressView, UIView;

@interface SPTWelcomeViewController : SPViewController
{
    SPTProgressView *_progressView;
    UIView *_contentView;
    LoginPLIController *_loginPLIController;
    LoginStateController *_loginStateController;
    SPTNetworkConnectivityController *_networkConnectivityController;
}

@property(retain, nonatomic) SPTNetworkConnectivityController *networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(readonly, nonatomic) __weak LoginStateController *loginStateController; // @synthesize loginStateController=_loginStateController;
@property(readonly, nonatomic) LoginPLIController *loginPLIController; // @synthesize loginPLIController=_loginPLIController;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
- (void).cxx_destruct;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (struct CGRect)focusRectWhenKeybardShow;
- (_Bool)shouldWrapInScrollView;
- (void)loadView;
- (id)initWithLoginPLIController:(id)arg1 loginStateController:(id)arg2 networkConnectivityController:(id)arg3;

@end

