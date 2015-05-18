//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPObjectRepresentation.h"
#import "SPSideTabBarDelegate.h"
#import "SPTImageLoaderDelegate.h"
#import "SPTTabBarControllerProtocol.h"

@class NSArray, NSString, SPKVObservation, SPSideTabBar, SPUser, UIView;

@interface SPSideTabController : UIViewController <SPObjectRepresentation, SPSideTabBarDelegate, SPTImageLoaderDelegate, SPTTabBarControllerProtocol>
{
    BOOL _bottomAttachmentHidden;
    NSArray *_viewControllers;
    UIViewController *_selectedViewController;
    id <SPSideTabBarDelegate> _tabBarDelegate;
    UIViewController *_bottomAttachment;
    SPSideTabBar *_tabBar;
    NSArray *_additionalItems;
    UIViewController *_bottomBanner;
    UIView *_mainContainer;
    UIView *_bottomContainer;
    id <SPTImageLoader> _imageLoader;
    SPUser *_user;
    SPKVObservation *_userProfilePictureURLObservation;
}

+ (id)sideTabControllerWithImageLoader:(id)arg1 user:(id)arg2;
@property(retain, nonatomic) SPKVObservation *userProfilePictureURLObservation; // @synthesize userProfilePictureURLObservation=_userProfilePictureURLObservation;
@property(retain, nonatomic) SPUser *user; // @synthesize user=_user;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) UIView *bottomContainer; // @synthesize bottomContainer=_bottomContainer;
@property(retain, nonatomic) UIView *mainContainer; // @synthesize mainContainer=_mainContainer;
@property(readonly, nonatomic, getter=isBottomAttachmentHidden) BOOL bottomAttachmentHidden; // @synthesize bottomAttachmentHidden=_bottomAttachmentHidden;
@property(retain, nonatomic) UIViewController *bottomBanner; // @synthesize bottomBanner=_bottomBanner;
@property(retain, nonatomic) NSArray *additionalItems; // @synthesize additionalItems=_additionalItems;
@property(retain, nonatomic) SPSideTabBar *tabBar; // @synthesize tabBar=_tabBar;
@property(retain, nonatomic) UIViewController *bottomAttachment; // @synthesize bottomAttachment=_bottomAttachment;
@property(nonatomic) __weak id <SPSideTabBarDelegate> tabBarDelegate; // @synthesize tabBarDelegate=_tabBarDelegate;
@property(nonatomic) __weak UIViewController *selectedViewController; // @synthesize selectedViewController=_selectedViewController;
@property(retain, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (void)userProfilePictureURLDidChange;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)repositionBottomBanner;
- (float)bottomBannerHeightImpact;
- (float)bottomBannerOriginYWithMainContainerFrame:(struct CGRect)arg1;
- (void)addBottomBannerToContainer;
- (void)setBottomAttachmentHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)tabBar:(id)arg1 didSelectItem:(id)arg2;
- (void)addBottomAttachmentToContainer;
@property(nonatomic) unsigned int selectedIndex; // @dynamic selectedIndex;
- (id)keyPathsForValuesAffectingValueForSelectedIndex;
- (void)viewDidLayoutSubviews;
- (BOOL)shouldAutorotate;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithImageLoader:(id)arg1 user:(id)arg2;
- (id)objectRepresentation;
- (BOOL)restoreWithObjectRepresentation:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) UIView *contentHeaderView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
