//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, SPTNowPlayingTrackMetadataQueue;

@protocol SPTNowPlayingTrackMetadataQueueObserver <NSObject>

@optional
- (void)trackMetadataQueueDidFinishUpdating:(SPTNowPlayingTrackMetadataQueue *)arg1;
- (void)trackMetadataQueue:(SPTNowPlayingTrackMetadataQueue *)arg1 didMoveToRelativeTrack:(NSNumber *)arg2;
@end

