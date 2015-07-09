//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface XAXMDeviceUtil : NSObject
{
}

+ (id)avAudioSessionRouteChangeReasonAsString:(unsigned long long)arg1;
+ (id)currentAudioOutputPortName;
+ (id)currentAudioOutputPortType;
+ (id)currentAudioInputPortName;
+ (id)currentAudioInputPortType;
+ (id)connectedAudioAccesoryType;
+ (_Bool)isUsingAirPlay;
+ (_Bool)isUsingBluetoothHFP;
+ (_Bool)microphoneUsePermission;
+ (_Bool)inputAvailable;
+ (struct CGSize)sizeInOrientation:(long long)arg1;
+ (struct CGSize)fullScreenSize;
+ (struct CGSize)currentScreenSize;
+ (struct CGSize)screenSizeInPortrait;
+ (_Bool)widescreen;
+ (_Bool)retinaDisplay;
+ (_Bool)canPlaceSkypeCall;
+ (_Bool)canPlaceCellCall;
+ (_Bool)canPlaceCall;
+ (_Bool)deviceInPhoneCall;
+ (_Bool)allowsVOIP;
+ (id)carrier;
+ (id)deviceName;
+ (id)model;
+ (id)operatingSystemVersion;
+ (id)deviceType;
+ (id)platform;
+ (_Bool)internetConnection;
+ (id)connectionType;
+ (_Bool)inBackground;
+ (id)applicationName;
+ (id)deviceUniqueIdentifier;
+ (_Bool)advertiserTrackingEnabled;
+ (id)advertisingIdentifier;
+ (id)identifierForVendor;
+ (id)debugInformation;

@end

