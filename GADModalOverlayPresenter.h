//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADOverlayPresenting.h"

@class GADViewController, NSString;

@interface GADModalOverlayPresenter : NSObject <GADOverlayPresenting>
{
    GADViewController *_presentedViewController;
    BOOL _statusBarWasHidden;
    id <NSObject> _appForegroundObserver;
}

@property(nonatomic) __weak GADViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
- (void).cxx_destruct;
- (void)didLeaveApplication;
- (void)didOpenInApplication;
- (void)hideStatusBar;
- (void)appDidEnterForeground:(id)arg1;
- (void)dismissWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)presentFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic, getter=isReadyToPresent) BOOL readyToPresent;
- (id)presentationViewController;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

