//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, SPTNowPlayingModel;

@protocol SPTNowPlayingModelDelegate <NSObject>
- (void)nowPlayingModel:(SPTNowPlayingModel *)arg1 didMoveToRelativeTrack:(NSNumber *)arg2;
- (void)nowPlayingModelDidUpdateMetadata:(SPTNowPlayingModel *)arg1;
@end

