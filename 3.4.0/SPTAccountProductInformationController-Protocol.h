//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SPTAccountProductInformationController <NSObject>
@property(readonly, nonatomic) _Bool canActivatePremiumTrial;
@property(readonly, nonatomic) long long availableProduct;
@property(readonly, copy, nonatomic) NSString *currentProductMarketingName;
@property(readonly, nonatomic) long long currentProduct;
- (void)removeProductInformationObserver:(id <SPTAccountProductInformationObserver>)arg1;
- (void)addProductInformationObserver:(id <SPTAccountProductInformationObserver>)arg1;
@end

