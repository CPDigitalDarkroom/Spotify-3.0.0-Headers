//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MCBrowserViewController, MCPeerID, NSDictionary;

@protocol MCBrowserViewControllerDelegate <NSObject>
- (void)browserViewControllerWasCancelled:(MCBrowserViewController *)arg1;
- (void)browserViewControllerDidFinish:(MCBrowserViewController *)arg1;

@optional
- (BOOL)browserViewController:(MCBrowserViewController *)arg1 shouldPresentNearbyPeer:(MCPeerID *)arg2 withDiscoveryInfo:(NSDictionary *)arg3;
@end
