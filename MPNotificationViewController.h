//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class MPNotification;

@interface MPNotificationViewController : UIViewController
{
    MPNotification *_notification;
    id <MPNotificationViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <MPNotificationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MPNotification *notification; // @synthesize notification=_notification;
- (void).cxx_destruct;
- (void)hideWithAnimation:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;

@end

