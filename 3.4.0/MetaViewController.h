//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTProductStateObserver.h"

@class MessageBarController, NSArray, NSMutableDictionary, NSString, RootSettingsViewController, SPBarViewController, SPSideTabController, SPTImageLoaderService, SPTMenuController, UIViewController, UIViewController<SPTBarInteractiveTransitionParticipant>, UIViewController<SPTBarOverlayViewController>, UIViewController<SPTTabBarControllerProtocol>, UIWindow;

@interface MetaViewController : NSObject <SPTProductStateObserver>
{
    id <MetaViewControllerDelegate> _delegate;
    SPBarViewController *_barViewController;
    SPTMenuController *_menuController;
    UIViewController<SPTBarOverlayViewController> *_nowPlaying;
    UIViewController<SPTBarInteractiveTransitionParticipant> *_nowPlayingBar;
    unsigned long long _momentsOverride;
    UIViewController *_contentViewController;
    id <SPTFullscreenPlaybackPresentationManager> _fullscreenPlaybackPresentationManager;
    UIWindow *_window;
    UIViewController *_switchingToViewController;
    NSMutableDictionary *_rootUI;
    SPTImageLoaderService *_imageService;
    NSArray *_defaultTabPriorityList;
}

@property(retain, nonatomic) NSArray *defaultTabPriorityList; // @synthesize defaultTabPriorityList=_defaultTabPriorityList;
@property(nonatomic) __weak SPTImageLoaderService *imageService; // @synthesize imageService=_imageService;
@property(retain, nonatomic) NSMutableDictionary *rootUI; // @synthesize rootUI=_rootUI;
@property(nonatomic) __weak UIViewController *switchingToViewController; // @synthesize switchingToViewController=_switchingToViewController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) id <SPTFullscreenPlaybackPresentationManager> fullscreenPlaybackPresentationManager; // @synthesize fullscreenPlaybackPresentationManager=_fullscreenPlaybackPresentationManager;
@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic) unsigned long long momentsOverride; // @synthesize momentsOverride=_momentsOverride;
@property(retain, nonatomic) UIViewController<SPTBarInteractiveTransitionParticipant> *nowPlayingBar; // @synthesize nowPlayingBar=_nowPlayingBar;
@property(retain, nonatomic) UIViewController<SPTBarOverlayViewController> *nowPlaying; // @synthesize nowPlaying=_nowPlaying;
@property(retain, nonatomic) SPTMenuController *menuController; // @synthesize menuController=_menuController;
@property(retain, nonatomic) SPBarViewController *barViewController; // @synthesize barViewController=_barViewController;
@property(nonatomic) __weak id <MetaViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)nowPlayingBarHidden;
- (void)closeSidebarAndNowPlayingViewAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)popToViewController:(id)arg1 onNavigationViewController:(id)arg2;
- (void)pushViewController:(id)arg1 useCurrentStack:(_Bool)arg2;
- (id)pushViewControllerForLink:(id)arg1 useCurrentStack:(_Bool)arg2;
- (id)selectTabAndPushViewControllerForLink:(id)arg1 animated:(_Bool)arg2;
- (id)selectTabAndPushViewControllerForLink:(id)arg1;
- (_Bool)isViewController:(id)arg1 inViewControllerNavigationStack:(id)arg2;
- (id)findViewControllerForURI:(id)arg1 inViewControllerArray:(id)arg2;
- (id)findViewControllerInNavigationStack:(id)arg1 onViewController:(id)arg2;
- (id)vcForLink:(id)arg1 useCurrentStack:(_Bool)arg2;
- (id)vcForLink:(id)arg1;
- (id)impliedReferrerIdentifier;
@property(readonly, nonatomic) UIViewController *defaultTab;
- (_Bool)viewControllerIsRelatedToLogin:(id)arg1;
@property(readonly, nonatomic, getter=isShowingLoginView) _Bool showingLoginView;
- (_Bool)isShowingMainView;
@property(nonatomic) __weak UIViewController *rootContainer;
@property(readonly, nonatomic) MessageBarController *messageBarController;
- (void)toggleNowPlayingViewControllerAnimated:(_Bool)arg1 visible:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)hideNowPlayingViewControllerAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)showNowPlayingViewControllerAnimated:(_Bool)arg1;
- (void)showUpgradePopupViewAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2 actionOnDismiss:(CDUnknownBlockType)arg3;
- (void)switchToLoginViewForLogoutShowError:(id)arg1 forgetUser:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)switchToLoginViewAnimated:(_Bool)arg1 showError:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)createLoginViewController;
- (void)switchToMainViewAnimated:(_Bool)arg1 manualLogin:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)switchToViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)orientationWillChange;
- (void)dismissSettingsPopover;
- (_Bool)didReceiveMemoryWarning;
- (void)selectTab:(id)arg1;
- (id)popAllAnimated:(_Bool)arg1;
@property(readonly, nonatomic) RootSettingsViewController *settings;
- (id)playlists;
- (void)dealloc;
- (void)teardownUI;
- (_Bool)areMomentsEnabled;
- (void)setupRootUIFromConfiguration:(id)arg1;
- (void)productState:(id)arg1 stateDidChange:(id)arg2;
- (void)setupNowPlayingView;
- (void)createUI;
- (id)initWithWindow:(id)arg1 imageService:(id)arg2;
@property(readonly, nonatomic) UIViewController *top;
@property(readonly, nonatomic) SPSideTabController *sideTabs;
@property(readonly, nonatomic) UIViewController<SPTTabBarControllerProtocol> *tabs;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

