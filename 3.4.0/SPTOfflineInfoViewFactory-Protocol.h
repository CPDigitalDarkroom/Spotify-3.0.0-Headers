//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SPTInfoView;

@protocol SPTOfflineInfoViewFactory <NSObject>
- (void)configureInfoView:(SPTInfoView *)arg1 offlineType:(long long)arg2 localizedFeatureName:(NSString *)arg3;
- (SPTInfoView *)infoViewWithOfflineType:(long long)arg1 size:(struct CGSize)arg2 localizedFeatureName:(NSString *)arg3;
@end
