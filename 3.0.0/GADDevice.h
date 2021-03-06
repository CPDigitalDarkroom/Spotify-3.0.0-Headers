//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADDeviceSpecifications.h"

@class GADNetwork, NSObject<OS_dispatch_queue>, NSString;

@interface GADDevice : NSObject <GADDeviceSpecifications>
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    id <NSObject> _radioAccessTechnologyChangeObserver;
    NSString *_lastKnownRadioAccessTechnology;
    NSString *_radioAccessTechnology;
    NSString *_userAgentString;
    NSString *_cachedAdvertisingID;
    NSString *_cachedMD5AdvertisingID;
    GADNetwork *_network;
}

+ (id)currentDevice;
@property(retain, nonatomic) GADNetwork *network; // @synthesize network=_network;
- (void).cxx_destruct;
- (id)temporaryPathWithCreation:(BOOL)arg1;
- (BOOL)isSimulator;
@property(copy) NSString *userAgentString;
@property(copy) NSString *radioAccessTechnology;
- (id)lastKnownRadioAccessTechnology;
- (BOOL)userInterfaceIdiomIsPhone;
@property(readonly, nonatomic) struct CGRect orientedApplicationFrame;
@property(readonly, nonatomic) struct CGRect orientedScreenBounds;
@property(readonly, nonatomic) struct CGRect portraitScreenBounds;
@property(readonly, nonatomic) float screenDensity;
@property(readonly, nonatomic, getter=isOrientationLandscape) BOOL orientationLandscape;
@property(readonly, nonatomic) unsigned int audioRoute;
@property(readonly, nonatomic) NSString *locale;
@property(readonly, nonatomic) NSString *deviceSubmodel;
@property(readonly, nonatomic) NSString *deviceModel;
@property(readonly, nonatomic) NSString *deviceIdentifier;
@property(readonly, nonatomic) NSString *systemVersion;
@property(readonly, nonatomic, getter=isJailbroken) BOOL jailbroken;
- (id)canOpenURLs:(id)arg1;
- (BOOL)OSIsSupported;
- (BOOL)isOSAtLeastMajor:(int)arg1 minor:(int)arg2 patch:(int)arg3;
- (id)OSVersionInfoComponents;
- (id)baseSDKVersion;
- (id)parameters;
- (void)disableRadioAccessTechnologyChecking;
- (void)enableRadioAccessTechnologyChecking;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

