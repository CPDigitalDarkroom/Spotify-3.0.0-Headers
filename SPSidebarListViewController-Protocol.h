//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPSidebarViewController.h"

@class NSArray, UIViewController;

@protocol SPSidebarListViewController <SPSidebarViewController>
@property(retain, nonatomic) UIViewController *selectedViewController;
@property(retain, nonatomic) NSArray *viewControllers;
@property(nonatomic) __weak id <SPSidebarListViewControllerDelegate> delegate;
- (void)triggerSelectedViewController:(UIViewController *)arg1;
@end

