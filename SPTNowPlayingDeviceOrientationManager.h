//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, NSObject<OS_dispatch_source>, UIDevice;

@interface SPTNowPlayingDeviceOrientationManager : NSObject
{
    int _interfaceOrientation;
    UIDevice *_device;
    NSHashTable *_observers;
    NSObject<OS_dispatch_source> *_scheduleSource;
}

+ (int)interfaceOrientationForDeviceOrientation:(int)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *scheduleSource; // @synthesize scheduleSource=_scheduleSource;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) UIDevice *device; // @synthesize device=_device;
@property(nonatomic) int interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
- (void).cxx_destruct;
- (void)removeOrientationObserver:(id)arg1;
- (void)addOrientationObserver:(id)arg1;
- (void)deviceOrientationDidChangeNotification:(id)arg1;
- (void)updateInterfaceOrientation;
- (void)unscheduleUpdate;
- (void)scheduleUpdate;
- (void)dealloc;
- (id)initWithDevice:(id)arg1;

@end

