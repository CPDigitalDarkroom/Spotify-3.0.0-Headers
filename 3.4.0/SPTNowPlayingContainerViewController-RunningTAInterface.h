//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTNowPlayingContainerViewController.h"

@interface SPTNowPlayingContainerViewController (RunningTAInterface)
- (id)sta_runningHeadUnitViewController;
- (void)sta_tapTempoDecreaseButton;
- (void)sta_tapTempoIncreaseButton;
- (void)sta_tapAutoButton;
@property(readonly, nonatomic, getter=sta_isAutoButtonDetectionEnabledMode) _Bool autoButtonDetectionEnabledMode;
@property(readonly, nonatomic, getter=sta_isAutoButtonShowing) _Bool autoButtonShowing;
@property(readonly, nonatomic, getter=sta_runningTempo) unsigned long long runningTempo;
@property(readonly, nonatomic, getter=sta_isRunningNowPlayingViewShowing) _Bool runningNowPlayingViewShowing;
@end

