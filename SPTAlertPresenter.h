//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface SPTAlertPresenter : NSObject
{
    id <AlertControllerDelegate> _delegate;
    NSMutableArray *_alertQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *alertQueue; // @synthesize alertQueue=_alertQueue;
@property(nonatomic) __weak id <AlertControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)actionPerformed:(id)arg1 withTarget:(id)arg2 selector:(SEL)arg3 title:(id)arg4 message:(id)arg5;
- (void)actionPerformed:(id)arg1 title:(id)arg2 message:(id)arg3;
- (id)alertControllerWithTitle:(id)arg1 message:(id)arg2 actions:(id)arg3;
- (void)showNextAlert;
- (void)queueAlertController:(id)arg1;
- (void)showAlertWithTitle:(id)arg1 message:(id)arg2 buttonsAndHandlers:(id)arg3;
- (void)showAlertWithTitle:(id)arg1 message:(id)arg2 buttonsAndHandlers:(id)arg3 cancelButtonIndex:(int)arg4;
- (void)showAlertWithTitle:(id)arg1 message:(id)arg2 target:(id)arg3 acceptSelector:(SEL)arg4 cancelSelector:(SEL)arg5 acceptButtonText:(id)arg6 cancelButtonText:(id)arg7;
- (void)showAlertWithTitle:(id)arg1 message:(id)arg2 buttonText:(id)arg3 target:(id)arg4 action:(SEL)arg5 withCancelButton:(BOOL)arg6;
- (void)showAlertWithTitle:(id)arg1 message:(id)arg2 buttonText:(id)arg3;
- (void)showAlertWithTitle:(id)arg1 message:(id)arg2;
- (id)init;

@end

