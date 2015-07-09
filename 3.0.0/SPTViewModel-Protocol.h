//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@protocol SPTViewModel <NSObject>
@property(readonly, nonatomic) NSDictionary *requestURLDictionary;
- (NSDictionary *)failedRequestKeysAndErrors;
- (NSDictionary *)successfulRequestKeysAndDatas;
- (NSArray *)pendingRequestKeys;
- (BOOL)isLoading;
- (void)requestDataForKey:(NSString *)arg1;
- (void)requestData;
- (id)initWithRequestURLDictionary:(NSDictionary *)arg1 apolloDataLoader:(id <SPTApolloDataLoader>)arg2;
@end
