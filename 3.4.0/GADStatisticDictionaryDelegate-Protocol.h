//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADStatisticDictionary, NSObject<OS_dispatch_queue>;

@protocol GADStatisticDictionaryDelegate <NSObject>
- (void)didUpdateStatisticDictionary:(GADStatisticDictionary *)arg1;
- (NSObject<OS_dispatch_queue> *)notificationQueue;
@end
