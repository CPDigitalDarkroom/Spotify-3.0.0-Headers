//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface SPTIAPProductStore : NSObject
{
    NSArray *_availableProducts;
    id <SPTIAPProductLoaderService> _productLoaderService;
}

@property(retain, nonatomic) id <SPTIAPProductLoaderService> productLoaderService; // @synthesize productLoaderService=_productLoaderService;
@property(copy, nonatomic) NSArray *availableProducts; // @synthesize availableProducts=_availableProducts;
- (void).cxx_destruct;
- (void)loadAvailableProductsWithCallback:(CDUnknownBlockType)arg1;
- (BOOL)objects:(id)arg1 areKindOfClass:(Class)arg2;
- (id)initWithProductLoaderService:(id)arg1;

@end
