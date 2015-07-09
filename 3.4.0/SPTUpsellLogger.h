//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTUpsellLogger : NSObject
{
    id <SPTLogCenterProtocol> _logCenter;
    id <SPTProductState> _productState;
}

+ (id)stringFromType:(long long)arg1;
+ (id)stringFromReason:(long long)arg1;
+ (id)promotedOfferFromAvailableProduct:(long long)arg1;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) id <SPTLogCenterProtocol> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (id)currentProduct;
- (void)logDismissAvailableProduct:(long long)arg1 forReason:(long long)arg2 type:(long long)arg3;
- (void)logGetAvailableProduct:(long long)arg1 forReason:(long long)arg2 type:(long long)arg3;
- (void)logInteraction:(id)arg1 forAvailableProduct:(long long)arg2 reason:(long long)arg3 type:(long long)arg4;
- (void)logDidPresentAvailableProduct:(long long)arg1 forReason:(long long)arg2 type:(long long)arg3;
- (id)initWithLogCenter:(id)arg1 productState:(id)arg2;

@end

