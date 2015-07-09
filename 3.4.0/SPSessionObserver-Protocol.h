//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, NSURL, SPSession;

@protocol SPSessionObserver <NSObject>

@optional
- (void)syncErrorNotEnoughSpaceOnDevice;
- (void)sessionScrobblingError:(SPSession *)arg1;
- (void)session:(SPSession *)arg1 socialChange:(long long)arg2 description:(NSString *)arg3;
- (void)session:(SPSession *)arg1 socialError:(NSError *)arg2;
- (void)session:(SPSession *)arg1 incognitoModeChangedByTimeout:(_Bool)arg2;
- (void)sessionLoginModeChanged:(SPSession *)arg1;
- (void)sessionProductStatedUpdated:(SPSession *)arg1;
- (void)session:(SPSession *)arg1 temporaryConnectionError:(NSError *)arg2;
- (void)session:(SPSession *)arg1 offlineSyncError:(NSError *)arg2;
- (void)session:(SPSession *)arg1 tokenLostError:(NSError *)arg2;
- (void)session:(SPSession *)arg1 playlistError:(NSError *)arg2;
- (void)session:(SPSession *)arg1 autoUpdateWithURL:(NSURL *)arg2;
@end

