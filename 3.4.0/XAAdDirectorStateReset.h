//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XAAdDirectorState.h"

@interface XAAdDirectorStateReset : XAAdDirectorState
{
}

- (void)handleEvent:(id)arg1;
- (void)handleCancelAdvertisement;
- (void)handleResumeAdvertisement;
- (void)handlePauseAdvertisement;
- (void)handlePlayAdvertisement:(id)arg1;
- (void)runState;

@end
