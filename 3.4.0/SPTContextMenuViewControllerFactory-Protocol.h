//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSURL, SPTContextMenuViewController, SPTPopoverController, UIImage, UIView, UIView<SPTContextMenuHeader>;

@protocol SPTContextMenuViewControllerFactory <NSObject>
- (SPTContextMenuViewController *)provideContextMenuViewControllerWithHeaderView:(UIView<SPTContextMenuHeader> *)arg1 actions:(NSArray *)arg2 entityURL:(NSURL *)arg3;
- (SPTContextMenuViewController *)provideContextMenuViewControllerWithHeaderImageURL:(NSURL *)arg1 headerImagePlaceholder:(UIImage *)arg2 imageStyle:(unsigned long long)arg3 title:(NSString *)arg4 subtitle:(NSString *)arg5 metadataTitle:(NSString *)arg6 tasks:(NSArray *)arg7 entityURL:(NSURL *)arg8;
- (SPTContextMenuViewController *)provideContextMenuViewControllerWithHeaderImageURL:(NSURL *)arg1 headerImagePlaceholder:(UIImage *)arg2 title:(NSString *)arg3 subtitle:(NSString *)arg4 metadataTitle:(NSString *)arg5 tasks:(NSArray *)arg6 entityURL:(NSURL *)arg7;
- (SPTContextMenuViewController *)provideContextMenuViewControllerWithHeaderImageURL:(NSURL *)arg1 headerImagePlaceholder:(UIImage *)arg2 imageStyle:(unsigned long long)arg3 title:(NSString *)arg4 subtitle:(NSString *)arg5 metadataTitle:(NSString *)arg6 actions:(NSArray *)arg7 entityURL:(NSURL *)arg8;
- (SPTContextMenuViewController *)provideContextMenuViewControllerWithHeaderImageURL:(NSURL *)arg1 headerImagePlaceholder:(UIImage *)arg2 title:(NSString *)arg3 subtitle:(NSString *)arg4 metadataTitle:(NSString *)arg5 actions:(NSArray *)arg6 entityURL:(NSURL *)arg7;
- (SPTPopoverController *)provideIPadContextMenuViewControllerWithHeaderImageURL:(NSURL *)arg1 headerImagePlaceholder:(UIImage *)arg2 title:(NSString *)arg3 subtitle:(NSString *)arg4 metadataTitle:(NSString *)arg5 actions:(NSArray *)arg6 entityURL:(NSURL *)arg7 trackURL:(NSURL *)arg8 senderView:(UIView *)arg9;
- (SPTPopoverController *)provideIPadContextMenuViewControllerWithHeaderImageURL:(NSURL *)arg1 headerImagePlaceholder:(UIImage *)arg2 title:(NSString *)arg3 subtitle:(NSString *)arg4 metadataTitle:(NSString *)arg5 tasks:(NSArray *)arg6 entityURL:(NSURL *)arg7 trackURL:(NSURL *)arg8 senderView:(UIView *)arg9;
@end
