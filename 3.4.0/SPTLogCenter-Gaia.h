//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTLogCenter.h"

@interface SPTLogCenter (Gaia)
- (void)logPopupActiveDeviceChange:(id)arg1 eventType:(id)arg2 duration:(double)arg3;
- (void)logDidPickDeviceFailed;
- (void)logDidPickDevice:(id)arg1;
- (void)logPickerDidDisappearWithDeviceCount:(unsigned long long)arg1;
- (void)logPickerDidAppearWithDeviceCount:(unsigned long long)arg1;
- (id)buttonEventContextForDeviceManager:(id)arg1;
- (void)logButtonDidAppearWithDeviceManager:(id)arg1 lastImpression:(id)arg2 lastAnimation:(id)arg3;
@end
