//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, SPTAllocationContext;

@protocol SPTFeature <NSObject>
+ (NSString *)featureIdentifier;
- (void)unload;
- (void)configureWithFeatures:(id <SPTFeatureProvider>)arg1;

@optional
+ (NSArray *)featureDependencies;
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
- (void)load;
@end

