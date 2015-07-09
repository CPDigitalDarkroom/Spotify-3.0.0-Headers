//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTNowPlayingContainedViewController.h"
#import "SPTNowPlayingContainingViewController.h"

@class NSLayoutConstraint, NSString, SPTLayoutConstraintBuilder, SPTTheme, UIViewController<SPTNowPlayingContainedViewController>, UIViewController<SPTNowPlayingContainingViewController>;

@interface SPTNowPlayingHeadUnitContainerViewController : UIViewController <SPTNowPlayingContainingViewController, SPTNowPlayingContainedViewController>
{
    UIViewController *_headUnitVC;
    UIViewController<SPTNowPlayingContainedViewController> *_auxiliaryVC;
    SPTTheme *_theme;
    SPTLayoutConstraintBuilder *_layout;
    NSLayoutConstraint *_auxiliaryHeightConstraint;
    NSLayoutConstraint *_headUnitHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *headUnitHeightConstraint; // @synthesize headUnitHeightConstraint=_headUnitHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *auxiliaryHeightConstraint; // @synthesize auxiliaryHeightConstraint=_auxiliaryHeightConstraint;
@property(retain, nonatomic) SPTLayoutConstraintBuilder *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UIViewController<SPTNowPlayingContainedViewController> *auxiliaryVC; // @synthesize auxiliaryVC=_auxiliaryVC;
@property(retain, nonatomic) UIViewController *headUnitVC; // @synthesize headUnitVC=_headUnitVC;
- (void).cxx_destruct;
- (void)containedViewController:(id)arg1 didUpdatePreferredSizeTo:(struct CGSize)arg2;
- (struct CGSize)preferredContentSize;
- (float)viewControllerPriority;
- (unsigned int)leadingEdge;
- (float)headUnitHeight;
- (void)addFixedConstraints;
- (void)setupViewControllers;
- (void)viewDidLoad;
- (id)initWithTheme:(id)arg1 headUnitVC:(id)arg2 auxiliaryVC:(id)arg3;

// Remaining properties
@property(nonatomic) __weak UIViewController<SPTNowPlayingContainingViewController> *container;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
