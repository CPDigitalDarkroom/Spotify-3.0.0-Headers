//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSError, NSString, SPTWebTokenController;

@protocol SPTWebTokenControllerObserver
- (void)webToken:(SPTWebTokenController *)arg1 didFailToFetchAccessToken:(NSError *)arg2;
- (void)webToken:(SPTWebTokenController *)arg1 didFetchAccessToken:(NSString *)arg2 tokenType:(NSString *)arg3;
@end
