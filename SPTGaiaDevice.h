//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SPTGaiaDevice : NSObject
{
    shared_ptr_6857e0ac _cpp;
    struct scoped_connection _name_connection;
    struct scoped_connection _error_connection;
    struct scoped_connection _volume_connection;
    NSString *_name;
    NSString *_brand;
    NSString *_model;
    id <SPTGaiaDeviceDelegate> _delegate;
}

@property(nonatomic) __weak id <SPTGaiaDeviceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *brand; // @synthesize brand=_brand;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) BOOL supportsVolume;
- (void)volumeDown;
- (void)volumeUp;
@property(nonatomic, getter=getVolume) float volume;
- (float)getCppVolume;
@property(readonly, nonatomic) int deviceType;
@property(readonly, nonatomic) int deviceState;
@property(readonly, nonatomic, getter=isWebApp) BOOL webApp;
@property(readonly, nonatomic, getter=isZeroconf) BOOL isZeroconf;
@property(readonly, nonatomic) NSString *attachId;
@property(nonatomic, getter=isAttached, setter=setAttached:) BOOL attach;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (shared_ptr_6857e0ac)cpp;
- (void)dealloc;
- (id)initWithCpp:(const shared_ptr_6857e0ac *)arg1;

@end

