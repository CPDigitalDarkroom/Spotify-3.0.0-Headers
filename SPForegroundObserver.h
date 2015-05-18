//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIApplication;

@interface SPForegroundObserver : NSObject
{
    BOOL _awake;
    BOOL _observing;
    id <SPForegroundObserverDelegate> _delegate;
    UIApplication *_application;
}

@property(retain, nonatomic) UIApplication *application; // @synthesize application=_application;
@property(nonatomic, getter=isObserving) BOOL observing; // @synthesize observing=_observing;
@property(nonatomic, getter=isAwake) BOOL awake; // @synthesize awake=_awake;
@property(nonatomic) __weak id <SPForegroundObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)applicationWillEnterForegroundNotification;
- (void)applicationDidEnterBackgroundNotification;
- (void)teardownObservers;
- (void)setupObservers;
- (void)hibernate;
- (void)awaken;
- (void)dealloc;
- (id)initWithApplication:(id)arg1;

@end

