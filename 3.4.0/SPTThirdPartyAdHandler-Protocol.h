//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIViewController;

@protocol SPTThirdPartyAdHandler <NSObject>
- (void)presentThirdPartyAdFromViewController:(UIViewController *)arg1;
- (void)setAdEventDelegate:(id <SPTThirdPartyAdEventDelegate>)arg1;
- (void)fetchThirdPartyAdWithTag:(NSString *)arg1;
@end
