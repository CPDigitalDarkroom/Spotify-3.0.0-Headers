//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTTouchPreviewChannel;

@protocol SPTTouchPreviewChannelDelegate <NSObject>
- (void)formulaPreviewChannel:(SPTTouchPreviewChannel *)arg1 getData:(void (^)(NSData *, BOOL))arg2;

@optional
- (void)formulaPreviewChannel:(SPTTouchPreviewChannel *)arg1 shouldLoopWithCallback:(void (^)(BOOL))arg2 fullyLoaded:(BOOL)arg3;
@end

