//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DeferredTrialController, NSString;

@protocol UpsellFeature <NSObject>
- (void)presentUpsellPopupWithTitle:(NSString *)arg1 message:(NSString *)arg2 buttonTitle:(NSString *)arg3 viewEventURI:(NSString *)arg4;
- (DeferredTrialController *)provideDeferredTrialController;
- (id <SPTUpsellPopupManager>)provideUpsellPopupManager;
@end
