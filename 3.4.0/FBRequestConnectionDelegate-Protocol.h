//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBRequestConnection, NSError;

@protocol FBRequestConnectionDelegate <NSObject>

@optional
- (void)requestConnection:(FBRequestConnection *)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)requestConnection:(FBRequestConnection *)arg1 willRetryWithRequestConnection:(FBRequestConnection *)arg2;
- (void)requestConnection:(FBRequestConnection *)arg1 didFailWithError:(NSError *)arg2;
- (void)requestConnectionDidFinishLoading:(FBRequestConnection *)arg1 fromCache:(_Bool)arg2;
- (void)requestConnectionWillBeginLoading:(FBRequestConnection *)arg1 fromCache:(_Bool)arg2;
@end

