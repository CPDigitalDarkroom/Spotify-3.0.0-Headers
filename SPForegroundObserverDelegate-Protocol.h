//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPForegroundObserver;

@protocol SPForegroundObserverDelegate <NSObject>
- (void)foregroundObserverDidHibernate:(SPForegroundObserver *)arg1;
- (void)foregroundObserverDidAwake:(SPForegroundObserver *)arg1;
@end

