//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSError, SPTSharePostHandler;

@protocol SPTSharePostHandlerDelegate <NSObject>
- (void)sharePostHandler:(SPTSharePostHandler *)arg1 cannotPostWithError:(NSError *)arg2;
- (void)sharePostHandler:(SPTSharePostHandler *)arg1 failedWithError:(NSError *)arg2;
- (void)sharePostHandlerFinished:(SPTSharePostHandler *)arg1 withSuccessNetworksArray:(NSArray *)arg2 failedNetworksToErrorsDictionary:(NSDictionary *)arg3;
@end

