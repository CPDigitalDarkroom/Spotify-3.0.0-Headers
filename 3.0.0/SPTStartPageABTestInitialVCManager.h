//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTStartPageABTestInitialVCManager : NSObject
{
}

- (BOOL)isStateRestoreDisabledForProductStateString:(id)arg1;
- (void)setInstallDate:(id)arg1 forUsername:(id)arg2;
- (id)installDateForUsername:(id)arg1;
- (id)provideUserDefaults;
- (id)userDefaultsKeyForUsername:(id)arg1;
- (BOOL)hasTestPeriodPassedSinceInitialLoginData:(id)arg1;
- (id)provideCurrentDate;
- (int)initialVCForUsername:(id)arg1 productState:(id)arg2;

@end
