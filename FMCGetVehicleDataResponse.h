//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMCRPCResponse.h"

@class FMCAirbagStatus, FMCBeltStatus, FMCBodyInformation, FMCClusterModeStatus, FMCComponentVolumeStatus, FMCDeviceStatus, FMCECallInfo, FMCEmergencyEvent, FMCGPSData, FMCHeadLampStatus, FMCMyKey, FMCPRNDL, FMCTireStatus, FMCVehicleDataEventStatus, FMCWiperStatus, NSNumber, NSString;

@interface FMCGetVehicleDataResponse : FMCRPCResponse
{
}

@property(retain) FMCMyKey *myKey;
@property(retain) FMCClusterModeStatus *clusterModeStatus;
@property(retain) FMCEmergencyEvent *emergencyEvent;
@property(retain) FMCAirbagStatus *airbagStatus;
@property(retain) FMCECallInfo *eCallInfo;
@property(retain) NSNumber *steeringWheelAngle;
@property(retain) NSNumber *accPedalPosition;
@property(retain) NSNumber *engineTorque;
@property(retain) FMCHeadLampStatus *headLampStatus;
@property(retain) FMCWiperStatus *wiperStatus;
@property(retain) FMCVehicleDataEventStatus *driverBraking;
@property(retain) FMCDeviceStatus *deviceStatus;
@property(retain) FMCBodyInformation *bodyInformation;
@property(retain) FMCBeltStatus *beltStatus;
@property(retain) NSNumber *odometer;
@property(retain) FMCTireStatus *tirePressure;
@property(retain) FMCPRNDL *prndl;
@property(retain) NSString *vin;
@property(retain) NSNumber *externalTemperature;
@property(retain) NSNumber *instantFuelConsumption;
@property(retain) FMCComponentVolumeStatus *fuelLevel_State;
@property(retain) NSNumber *fuelLevel;
@property(retain) NSNumber *rpm;
@property(retain) NSNumber *speed;
@property(retain) FMCGPSData *gps;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

