//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

@protocol SPTCommunicationsController <NSObject>
@property(copy, nonatomic) NSString *loggingEventSource;
- (void)setCommunicationValue:(_Bool)arg1 forSettingName:(NSString *)arg2 fequency:(long long)arg3 type:(long long)arg4 completionQueue:(NSObject<OS_dispatch_queue> *)arg5 completionBlock:(void (^)(NSArray *, NSError *))arg6;
- (void)setCommunicationValue:(_Bool)arg1 forSetting:(id <SPTCommunicationsSettingModel>)arg2 fequency:(long long)arg3 completionQueue:(NSObject<OS_dispatch_queue> *)arg4 completionBlock:(void (^)(NSArray *, NSError *))arg5;
- (void)communicationSettingsForType:(long long)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completionBlock:(void (^)(NSArray *, NSError *))arg3;
@end

