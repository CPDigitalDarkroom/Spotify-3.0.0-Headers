//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPSideTabBarDelegate.h"
#import "UIPopoverControllerDelegate.h"

@class MetaViewController, NSArray, NSString, SPSideTabController, SPSidebarController, SPTPopoverController, UITabBarController, UIView, UIViewController;

@interface SPTMenuController : NSObject <SPSideTabBarDelegate, UIPopoverControllerDelegate>
{
    UIViewController *_settingsViewController;
    UITabBarController *_bottomTabController;
    SPSidebarController *_sideBarController;
    SPSideTabController *_sideTabController;
    MetaViewController *_metaViewController;
    SPTPopoverController *_settingsPopover;
}

+ (id)sta_currentContext;
@property(retain, nonatomic) SPTPopoverController *settingsPopover; // @synthesize settingsPopover=_settingsPopover;
@property(nonatomic) __weak MetaViewController *metaViewController; // @synthesize metaViewController=_metaViewController;
@property(retain, nonatomic) SPSideTabController *sideTabController; // @synthesize sideTabController=_sideTabController;
@property(retain, nonatomic) SPSidebarController *sideBarController; // @synthesize sideBarController=_sideBarController;
@property(retain, nonatomic) UITabBarController *bottomTabController; // @synthesize bottomTabController=_bottomTabController;
@property(nonatomic) __weak UIViewController *settingsViewController; // @synthesize settingsViewController=_settingsViewController;
- (void).cxx_destruct;
- (id)currentTabBarController;
- (void)setContentHeaderView:(id)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) UIView *contentHeaderView;
@property(nonatomic) __weak UIViewController *selectedViewController;
- (id)menuViewController;
@property(copy, nonatomic) NSArray *viewControllers;
- (id)initWithUser:(id)arg1 settingsViewController:(id)arg2 metaViewController:(id)arg3 imageLoader:(id)arg4 momentsEnabled:(BOOL)arg5;
- (void)sta_dismissSettingsViewController;
- (void)setState:(int)arg1 animated:(BOOL)arg2;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (BOOL)popoverControllerShouldDismissPopover:(id)arg1;
- (void)presentSettingsPopover;
- (void)dismissSettingsViewController;
- (BOOL)tabBar:(id)arg1 didSelectItem:(id)arg2;
@property(retain, nonatomic) UIViewController *bottomAttachmentViewController;
- (void)setBottomAttachmentHidden:(BOOL)arg1 animated:(BOOL)arg2;
@property(copy, nonatomic) NSArray *additionalItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

