//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SPTPlayerTrack;

@protocol SPTVideoKeyframeLoader <NSObject>
- (id <SPTImageLoaderRequest>)keyframeForTrack:(SPTPlayerTrack *)arg1 atTime:(double)arg2 size:(struct CGSize)arg3 completion:(void (^)(UIImage *, NSError *))arg4;
- (id <SPTImageLoaderRequest>)keyframeForVideoID:(NSString *)arg1 atTime:(double)arg2 size:(struct CGSize)arg3 completion:(void (^)(UIImage *, NSError *))arg4;
@end

