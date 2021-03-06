//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "LoginViewControllerProtocol.h"
#import "UINavigationControllerDelegate.h"

@class AVPlayer, AVPlayerItem, LoginStateController, NSError, NSString, SPTLoginMessageRotationModel, SPWelcomeVideoView, UIImageView;

@interface SPTWelcomeNavigationController : UINavigationController <UINavigationControllerDelegate, LoginViewControllerProtocol>
{
    _Bool performLogout;
    _Bool forgetUserAfterLogout;
    NSError *error;
    UIImageView *_backgroundImageView;
    SPWelcomeVideoView *_backgroundVideoView;
    SPTLoginMessageRotationModel *_messageRotation;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    LoginStateController *_loginStateController;
}

@property(nonatomic) __weak LoginStateController *loginStateController; // @synthesize loginStateController=_loginStateController;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) SPTLoginMessageRotationModel *messageRotation; // @synthesize messageRotation=_messageRotation;
@property(retain, nonatomic) SPWelcomeVideoView *backgroundVideoView; // @synthesize backgroundVideoView=_backgroundVideoView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(copy, nonatomic) NSError *error; // @synthesize error;
@property(nonatomic) _Bool forgetUserAfterLogout; // @synthesize forgetUserAfterLogout;
@property(nonatomic) _Bool performLogout; // @synthesize performLogout;
- (void).cxx_destruct;
- (void)legacyViewDidAppear:(_Bool)arg1;
- (void)showLoginProgressDuringTask:(id)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)viewDidLoad;
- (void)backgroundVideoDidReachEnd:(id)arg1;
- (void)backgroundVideoStartPlayback;
- (void)loadView;
- (id)initWithRootViewController:(id)arg1 messageRotationModel:(id)arg2 loginStateController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

