//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SPTUpsellPopupController, UIViewController;

@protocol SPTUpsellPopupControllerDataSource <NSObject>
- (UIViewController *)contentViewControllerForPopupController:(SPTUpsellPopupController *)arg1;

@optional
- (struct UIEdgeInsets)contentInsetsForPopupController:(SPTUpsellPopupController *)arg1;
- (double)contentToButtonMarginForPopupController:(SPTUpsellPopupController *)arg1;
- (struct CGSize)preferredDialogSizeForPopupController:(SPTUpsellPopupController *)arg1;
- (NSArray *)buttonsForPopupController:(SPTUpsellPopupController *)arg1;
@end

