//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTUpgradePopupManager : NSObject
{
    int _upgradePopupType;
}

+ (id)sharedManager;
@property(nonatomic) int upgradePopupType; // @synthesize upgradePopupType=_upgradePopupType;
- (void)applicationWillEnterForeground:(id)arg1;
- (double)timeIntervalSinceLastPopupDisplayed;
- (BOOL)enoughTimePassedSinceLastPopupDisplayed;
- (CDUnknownBlockType)primaryActionBlock;
- (CDUnknownBlockType)primaryActionForPopupType:(int)arg1;
- (id)popupConfigurationForPopupType:(int)arg1;
- (id)popupConfiguration;
- (void)updatePopupType;
- (BOOL)shouldShowUpgradePopup;
- (id)init;

@end

