//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDApplication, RAPIUsageEnforcer;

@interface RAPIScreenContext : NSObject
{
    id <RAPIEntertainmentAppLinkDelegate> _rapiDelegate;
    IDApplication *_idApplication;
    RAPIUsageEnforcer *_usageEnforcer;
}

@property(retain) RAPIUsageEnforcer *usageEnforcer; // @synthesize usageEnforcer=_usageEnforcer;
@property(retain) IDApplication *idApplication; // @synthesize idApplication=_idApplication;
@property(retain) id <RAPIEntertainmentAppLinkDelegate> rapiDelegate; // @synthesize rapiDelegate=_rapiDelegate;
- (void).cxx_destruct;
- (_Bool)HACK_isBmwCic;
- (void)emitItemClickedNotificationWithItemIndex:(long long)arg1 withGroupIndex:(long long)arg2 withScreenIndex:(long long)arg3;

@end

