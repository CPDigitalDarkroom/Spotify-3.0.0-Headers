//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADAdType, GADMAdNetworkConnector, GADMConfig, NSDate, NSMutableArray, NSTimer;

@interface GADMAdManager : NSObject
{
    NSMutableArray *_adNetworkConfigQueue;
    GADMAdNetworkConnector *_lastConnectorNotifiedForAClick;
    int _pendingActionGroup;
    BOOL _requestInProgress;
    id <GADMDelegate> _delegate;
    GADMConfig *_config;
    GADAdType *_adType;
    GADMAdNetworkConnector *_requestingConnector;
    GADMAdNetworkConnector *_receivedConnector;
    NSDate *_lastRequestTime;
    NSTimer *_adNetworkTimeoutTimer;
}

@property(nonatomic) __weak NSTimer *adNetworkTimeoutTimer; // @synthesize adNetworkTimeoutTimer=_adNetworkTimeoutTimer;
@property(nonatomic) BOOL requestInProgress; // @synthesize requestInProgress=_requestInProgress;
@property(retain, nonatomic) NSDate *lastRequestTime; // @synthesize lastRequestTime=_lastRequestTime;
@property(retain, nonatomic) GADMAdNetworkConnector *receivedConnector; // @synthesize receivedConnector=_receivedConnector;
@property(retain, nonatomic) GADMAdNetworkConnector *requestingConnector; // @synthesize requestingConnector=_requestingConnector;
@property(retain, nonatomic) GADAdType *adType; // @synthesize adType=_adType;
@property(retain, nonatomic) GADMConfig *config; // @synthesize config=_config;
@property(nonatomic) __weak id <GADMDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)adRequestFailedFromConnector:(id)arg1 withError:(id)arg2;
- (void)updateAdapterTimingsForError:(id)arg1;
- (void)adRequestReturnsFromConnector:(id)arg1 withInterstitial:(id)arg2;
- (void)adRequestReturnsFromConnector:(id)arg1 withView:(id)arg2;
- (BOOL)shouldProcessResponseFromConnector:(id)arg1;
- (void)adNetworkTimeoutHandler:(id)arg1;
- (void)resetRequestingState;
- (void)notifyDelegateOfFailureToReceiveWithError:(id)arg1;
- (void)reportNoFill;
- (void)presentInterstitialFromRootViewController:(id)arg1;
- (BOOL)changeAdTypeTo:(id)arg1;
- (id)dequeueAdNetworkConfig;
- (void)makeAdRequest;
- (void)cancel;
- (void)cancelPendingActions;
- (void)requestNextAdNetwork;
- (void)mediateForAdType:(id)arg1 config:(id)arg2;
- (void)dealloc;

@end

