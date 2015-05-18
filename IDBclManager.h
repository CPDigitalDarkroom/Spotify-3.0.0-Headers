//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDConnectionMultiplexerDelegate.h"
#import "IDStreamProviderDelegate.h"

@class IDConnectionMultiplexer, NSConditionLock, NSString;

@interface IDBclManager : NSObject <IDStreamProviderDelegate, IDConnectionMultiplexerDelegate>
{
    BOOL _backgroundingSupported;
    BOOL _allowedToStayConnectedInBackground;
    unsigned int _bclConnectionState;
    id <IDStreamProvider> _streamProvider;
    NSConditionLock *_stateCondition;
    NSConditionLock *_connectionCondition;
    IDConnectionMultiplexer *_multiplexer;
    float _retryWaitTime;
}

@property(getter=isAllowedToStayConnectedInBackground) BOOL allowedToStayConnectedInBackground; // @synthesize allowedToStayConnectedInBackground=_allowedToStayConnectedInBackground;
@property(readonly, getter=isBackgroundingSupported) BOOL backgroundingSupported; // @synthesize backgroundingSupported=_backgroundingSupported;
@property float retryWaitTime; // @synthesize retryWaitTime=_retryWaitTime;
@property(retain) IDConnectionMultiplexer *multiplexer; // @synthesize multiplexer=_multiplexer;
@property(retain) NSConditionLock *connectionCondition; // @synthesize connectionCondition=_connectionCondition;
@property(retain) NSConditionLock *stateCondition; // @synthesize stateCondition=_stateCondition;
@property(retain) id <IDStreamProvider> streamProvider; // @synthesize streamProvider=_streamProvider;
@property unsigned int bclConnectionState; // @synthesize bclConnectionState=_bclConnectionState;
- (void).cxx_destruct;
- (id)stringFromIDBclConnectionToAccessoryState:(unsigned int)arg1;
- (id)stringFromIDBclManagerState:(unsigned int)arg1;
- (void)updateBclConnectionState;
- (BOOL)systemHasRequiredMinimumVersionForBackgrounding:(id)arg1;
- (void)streamProvider:(id)arg1 didFailToResolveStreamsWithError:(id)arg2;
- (void)streamProviderWillDiscardStreams:(id)arg1;
- (void)streamProvider:(id)arg1 didResolveInputStream:(id)arg2 outputStream:(id)arg3;
- (void)connectionMultiplexerDidFinishHandshake:(id)arg1;
- (void)connectionMultiplexer:(id)arg1 errorOccurred:(id)arg2;
- (void)handleDidEnterBackground:(id)arg1;
- (void)handleDidBecomeActive:(id)arg1;
- (void)handleAccessoryDidDisappear:(id)arg1;
- (void)stop;
- (void)start;
- (id)proxyInfo;
- (id)communicationURL;
- (void)dealloc;
- (id)initWithStreamProvider:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
