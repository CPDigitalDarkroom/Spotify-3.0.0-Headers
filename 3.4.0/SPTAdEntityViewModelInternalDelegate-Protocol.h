//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, SPTAdEntityViewModel;

@protocol SPTAdEntityViewModelInternalDelegate <NSObject>
- (void)adEntityViewModel:(SPTAdEntityViewModel *)arg1 playerItemFailed:(_Bool)arg2;
- (void)adEntityViewModel:(SPTAdEntityViewModel *)arg1 shouldFireEvent:(NSString *)arg2 subType:(NSString *)arg3 data:(NSDictionary *)arg4;
- (void)adEntityViewModel:(SPTAdEntityViewModel *)arg1 didTimeOut:(_Bool)arg2;
- (void)adEntityViewModel:(SPTAdEntityViewModel *)arg1 didFinishPlaying:(_Bool)arg2;
@end

