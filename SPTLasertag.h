//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPCore;

@interface SPTLasertag : NSObject
{
    id <SPTLasertagDelegate> _delegate;
    SPCore *_core;
    shared_ptr_6432a44d _lasertag;
}

@property(readonly, nonatomic) shared_ptr_6432a44d lasertag; // @synthesize lasertag=_lasertag;
@property(nonatomic) __weak SPCore *core; // @synthesize core=_core;
@property(nonatomic) __weak id <SPTLasertagDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)handleTargeting:(const map_5b152b35 *)arg1 withErrorCode:(struct error_code)arg2;
- (void)fetchTargeting;
- (void)handleAdConfig:(const struct AdInventoryConfig *)arg1 forAdSlot:(id)arg2 withErrorCode:(struct error_code)arg3;
- (void)fetchAdConfig:(id)arg1;
- (id)initWithCore:(id)arg1;

@end

