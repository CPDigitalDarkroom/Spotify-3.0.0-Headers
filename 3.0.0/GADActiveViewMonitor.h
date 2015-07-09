//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADScheduler, NSObject<OS_dispatch_queue>, UIView;

@interface GADActiveViewMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    GADScheduler *_updateViewBoundsScheduler;
    id <GADActiveViewMonitorDelegate> _delegate;
    struct CGRect _monitoredViewVisibleBounds;
    BOOL _monitoredViewVisible;
    UIView *_monitoredView;
}

@property(readonly, nonatomic) __weak UIView *monitoredView; // @synthesize monitoredView=_monitoredView;
- (void).cxx_destruct;
@property(readonly, getter=isMonitoredViewVisible) BOOL monitoredViewVisible;
@property struct CGRect monitoredViewVisibleBounds;
@property __weak id <GADActiveViewMonitorDelegate> delegate;
- (void)updateViewBounds;
- (void)stopMonitoring;
- (void)sample;
- (void)startMonitoring;
- (void)dealloc;
- (id)initWithView:(id)arg1;

@end
