//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDVehicleInfo, IDVersionInfo;

@interface IDAccessoryMonitor : NSObject
{
    id <IDAccessoryMonitor> _accessoryMonitor;
}

@property(retain) id <IDAccessoryMonitor> accessoryMonitor; // @synthesize accessoryMonitor=_accessoryMonitor;
- (void).cxx_destruct;
- (id)proxyInfo;
- (id)communicationURL;
- (void)stopMonitoring;
- (void)startMonitoring;
@property(readonly) IDVersionInfo *etchVersion;
@property(readonly) IDVersionInfo *cdsVersion;
@property(readonly) IDVehicleInfo *vehicleInfo;
- (id)init;

@end

