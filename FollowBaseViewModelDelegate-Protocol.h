//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FollowBaseViewModel, FollowEntity, NSError;

@protocol FollowBaseViewModelDelegate <NSObject>
- (void)followBaseViewModel:(FollowBaseViewModel *)arg1 didFailLoad:(NSError *)arg2;
- (void)followBaseViewModel:(FollowBaseViewModel *)arg1 didLoadData:(id)arg2 loadTime:(double)arg3;
- (void)followBaseViewModel:(FollowBaseViewModel *)arg1 followUpdateDidFailWithError:(NSError *)arg2;
- (void)followBaseViewModel:(FollowBaseViewModel *)arg1 didUpdateFollowEntity:(FollowEntity *)arg2 index:(int)arg3;

@optional
- (void)followBaseViewModel:(FollowBaseViewModel *)arg1 offlineModeChanged:(BOOL)arg2;
- (void)followBaseViewModel:(FollowBaseViewModel *)arg1 setLoading:(BOOL)arg2;
@end

