//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class ADJActivityPackage, NSDictionary;

@protocol ADJPackageHandler
- (void)sendClickPackage:(ADJActivityPackage *)arg1;
- (void)finishedTrackingActivity:(NSDictionary *)arg1;
- (void)resumeSending;
- (void)pauseSending;
- (void)closeFirstPackage;
- (void)sendNextPackage;
- (void)sendFirstPackage;
- (void)addPackage:(ADJActivityPackage *)arg1;
- (id)initWithActivityHandler:(id <ADJActivityHandler>)arg1;
@end

