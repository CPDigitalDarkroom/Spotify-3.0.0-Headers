//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, SPTRunningMVPRunSetupModel;

@protocol SPTRunningMVPRunSetupModelDelegate <NSObject>
- (void)runningMVPRunSetupModelWillStartPlaying:(SPTRunningMVPRunSetupModel *)arg1;
- (void)runningMVPRunSetupModelDidFinishPlayingPrerollAd:(SPTRunningMVPRunSetupModel *)arg1;
- (void)runningMVPRunSetupModelDidChangeDetectionProgress:(SPTRunningMVPRunSetupModel *)arg1;
- (void)runningMVPRunSetupModelDidChangeTempo:(SPTRunningMVPRunSetupModel *)arg1;
- (void)runningMVPRunSetupModelDidChangeStep:(SPTRunningMVPRunSetupModel *)arg1;
- (void)runningMVPRunSetupModelDidStartPlaying:(SPTRunningMVPRunSetupModel *)arg1;
- (void)runningMVPRunSetupModelDidFinishLoading:(SPTRunningMVPRunSetupModel *)arg1 withError:(NSError *)arg2;
- (void)runningMVPRunSetupModelDidChangeOfflineState:(SPTRunningMVPRunSetupModel *)arg1;
@end

