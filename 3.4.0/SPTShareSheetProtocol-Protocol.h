//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPopoverControllerDelegate.h"

@class SPTPopoverController;

@protocol SPTShareSheetProtocol <UIPopoverControllerDelegate>
@property(nonatomic) __weak id <SPTShareVCDelegate> delegate;
@property(retain, nonatomic) SPTPopoverController *popover;
- (void)close;
@end
