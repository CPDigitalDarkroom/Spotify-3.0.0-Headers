//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSError, NSURL;

@protocol SPTChartEntityLoaderNetworkAdapterDelegate <NSObject>
- (void)chartEntityLoaderNetworkAdapter:(id <SPTChartEntityLoaderNetworkAdapter>)arg1 didEncounterError:(NSError *)arg2 forURL:(NSURL *)arg3;
- (void)chartEntityLoaderNetworkAdapter:(id <SPTChartEntityLoaderNetworkAdapter>)arg1 didLoadData:(NSData *)arg2 forURL:(NSURL *)arg3;
@end

