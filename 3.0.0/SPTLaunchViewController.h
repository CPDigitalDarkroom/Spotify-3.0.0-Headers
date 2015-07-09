//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPViewController.h"

@class NSString, SPTProgressView, UIImageView;

@interface SPTLaunchViewController : UIViewController <SPViewController>
{
    BOOL _startedLoadingApp;
    SPTProgressView *_progressView;
    UIImageView *_logoView;
    UIImageView *_launchImage;
}

@property(retain, nonatomic) UIImageView *launchImage; // @synthesize launchImage=_launchImage;
@property(retain, nonatomic) UIImageView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) BOOL startedLoadingApp; // @synthesize startedLoadingApp=_startedLoadingApp;
- (void).cxx_destruct;
- (id)URI;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (BOOL)shouldUseLaunchImage;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)launchImageForOrientation:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
