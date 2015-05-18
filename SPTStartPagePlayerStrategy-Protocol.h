//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTStartPageMomentContextViewModel;

@protocol SPTStartPagePlayerStrategy <NSObject>
- (void)removeObserver:(id <SPTStartPagePlayerStrategyObserver>)arg1;
- (void)addObserver:(id <SPTStartPagePlayerStrategyObserver>)arg1;
- (void)prefetchContextViewModel:(SPTStartPageMomentContextViewModel *)arg1;
- (void)recordPlayerState:(void (^)(NSError *))arg1;
- (void)playContextViewModel:(SPTStartPageMomentContextViewModel *)arg1 completion:(void (^)(NSError *))arg2;
@end

