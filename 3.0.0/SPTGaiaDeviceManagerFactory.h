//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTGaiaDeviceManagerFactory : NSObject
{
}

+ (void)deinitGaia:(struct SPTGaiaDeviceManagerFactoryProducts)arg1 session:(id)arg2 remotePlayerPtr:(scoped_ptr_33d823b1 *)arg3 router:(id)arg4;
+ (struct SPTGaiaDeviceManagerFactoryProducts)makeGaiaManager:(const struct shared_ptr<spotify::player::ProxyContextPlayer> *)arg1 queue:(const struct shared_ptr<spotify::player::ProxyPlayQueue> *)arg2 pageLoader:(const struct shared_ptr<spotify::player::ContextPageLoader> *)arg3 mftRules:(const shared_ptr_1ac160cb *)arg4 session:(id)arg5 productState:(id)arg6 scheduler:(const shared_ptr_6519f712 *)arg7 router:(id)arg8 offlineMode:(id)arg9 deviceID:(id)arg10 deviceName:(id)arg11 gaiaEnabled:(BOOL)arg12 isTablet:(BOOL)arg13;

@end

