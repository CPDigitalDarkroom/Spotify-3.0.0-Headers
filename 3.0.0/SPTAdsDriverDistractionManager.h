//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTAdsViewModel, SPTDriverDistraction;

@interface SPTAdsDriverDistractionManager : NSObject
{
    SPTAdsViewModel *_adsViewModel;
    SPTDriverDistraction *_driverDistraction;
}

@property(nonatomic) __weak SPTDriverDistraction *driverDistraction; // @synthesize driverDistraction=_driverDistraction;
@property(nonatomic) __weak SPTAdsViewModel *adsViewModel; // @synthesize adsViewModel=_adsViewModel;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithAdsViewModel:(id)arg1 driverDistraction:(id)arg2;

@end

