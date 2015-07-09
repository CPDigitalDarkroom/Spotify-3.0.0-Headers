//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPSessionObserver.h"

@class NSString, SPSession;

@interface SPTShuffleOfflineErrorManager : NSObject <SPSessionObserver>
{
    id <SPTUpsellPopupManager> _upsellPopupManager;
    SPSession *_session;
}

+ (id)shuffleOfflineErrorManagerWithUpsellPopupManager:(id)arg1 session:(id)arg2;
@property(nonatomic) __weak SPSession *session; // @synthesize session=_session;
@property(retain, nonatomic) id <SPTUpsellPopupManager> upsellPopupManager; // @synthesize upsellPopupManager=_upsellPopupManager;
- (void).cxx_destruct;
- (void)session:(id)arg1 offlineSyncError:(id)arg2;
- (void)dealloc;
- (id)initWithUpsellPopupManager:(id)arg1 session:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

