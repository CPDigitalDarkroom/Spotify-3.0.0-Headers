//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAdEventLogger.h"

@class NSMutableArray, NSString;

@interface SPTAdEventLoggerImpl : NSObject <SPTAdEventLogger>
{
    BOOL _eventRequestInProgress;
    id <SPTResolver> _resolver;
    NSMutableArray *_eventRequestQueue;
}

@property(retain, nonatomic) NSMutableArray *eventRequestQueue; // @synthesize eventRequestQueue=_eventRequestQueue;
@property(nonatomic) BOOL eventRequestInProgress; // @synthesize eventRequestInProgress=_eventRequestInProgress;
@property(nonatomic) __weak id <SPTResolver> resolver; // @synthesize resolver=_resolver;
- (void).cxx_destruct;
- (void)sendEventRequest:(id)arg1;
- (void)postCosmosAdEvent:(id)arg1 forAd:(id)arg2 subEventType:(id)arg3 eventData:(id)arg4;
- (void)logClientAdErrorMessage:(id)arg1 requestType:(id)arg2 requestUrl:(id)arg3 httpErrorCode:(int)arg4;
- (void)logClientAdEvent:(id)arg1 subEventType:(id)arg2 lineItemId:(id)arg3 creativeId:(id)arg4 adFormat:(id)arg5 eventData:(id)arg6;
- (id)initWithResolver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

