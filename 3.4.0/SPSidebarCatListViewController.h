//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPSidebarListViewController.h"
#import "SPTImageLoaderDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, SPKVObservation, SPTProfileInvitesCountControl, SPTSidebarInboxControl, SPTSidebarMaskedView, SPTSidebarNotificationsControl, SPTSidebarProfileControl, SPTSidebarSettingsControl, SPUser, UITableView, UIView;

@interface SPSidebarCatListViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, SPTImageLoaderDelegate, SPSidebarListViewController>
{
    _Bool _momentsEnabled;
    id <SPSidebarListViewControllerDelegate> _delegate;
    NSArray *_viewControllers;
    UIViewController *_selectedViewController;
    SPUser *_user;
    id <SPTImageLoader> _imageLoader;
    SPKVObservation *_userProfilePictureURLObservation;
    UIView *_transitionContainerView;
    SPTSidebarMaskedView *_maskView;
    UITableView *_tableView;
    SPTSidebarProfileControl *_profileControl;
    SPTSidebarInboxControl *_inboxControl;
    SPTSidebarNotificationsControl *_notificationsControl;
    SPTSidebarSettingsControl *_settingsControl;
    NSArray *_listViewControllers;
    SPKVObservation *_inboxBadgeCountObserver;
    SPKVObservation *_activityBadgeCountObserver;
    SPTProfileInvitesCountControl *_invitesCountControl;
}

@property(nonatomic) _Bool momentsEnabled; // @synthesize momentsEnabled=_momentsEnabled;
@property(retain, nonatomic) SPTProfileInvitesCountControl *invitesCountControl; // @synthesize invitesCountControl=_invitesCountControl;
@property(retain, nonatomic) SPKVObservation *activityBadgeCountObserver; // @synthesize activityBadgeCountObserver=_activityBadgeCountObserver;
@property(retain, nonatomic) SPKVObservation *inboxBadgeCountObserver; // @synthesize inboxBadgeCountObserver=_inboxBadgeCountObserver;
@property(retain, nonatomic) NSArray *listViewControllers; // @synthesize listViewControllers=_listViewControllers;
@property(retain, nonatomic) SPTSidebarSettingsControl *settingsControl; // @synthesize settingsControl=_settingsControl;
@property(retain, nonatomic) SPTSidebarNotificationsControl *notificationsControl; // @synthesize notificationsControl=_notificationsControl;
@property(retain, nonatomic) SPTSidebarInboxControl *inboxControl; // @synthesize inboxControl=_inboxControl;
@property(retain, nonatomic) SPTSidebarProfileControl *profileControl; // @synthesize profileControl=_profileControl;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SPTSidebarMaskedView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *transitionContainerView; // @synthesize transitionContainerView=_transitionContainerView;
@property(retain, nonatomic) SPKVObservation *userProfilePictureURLObservation; // @synthesize userProfilePictureURLObservation=_userProfilePictureURLObservation;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) SPUser *user; // @synthesize user=_user;
@property(retain, nonatomic) UIViewController *selectedViewController; // @synthesize selectedViewController=_selectedViewController;
@property(retain, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(nonatomic) __weak id <SPSidebarListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)profilePictureURLChanged;
- (id)nameToDisplay;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)updateInvitesCountControlVisibility:(id)arg1;
- (void)layoutForTransitionProgress:(float)arg1;
- (void)triggerSelectedViewController:(id)arg1;
- (int)animationType;
- (void)selectProfile;
- (id)profileViewController;
- (id)settingsViewController;
- (void)selectSettings;
- (void)selectNotifications;
- (void)selectInbox;
- (void)notificationsBadgeValueChanged;
- (void)activityBadgeValueChanged;
- (void)inboxBadgeValueChanged;
- (void)invitesBadgeValueChanged:(id)arg1;
- (id)activityViewController;
- (id)notificationsViewController;
- (id)inboxViewController;
- (void)updateSelectedIndex;
- (id)identifierForViewController:(id)arg1;
- (void)inboxDisabledValueChanged:(id)arg1;
- (void)dealloc;
- (id)initWithUser:(id)arg1 imageLoader:(id)arg2 momentsEnabled:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

