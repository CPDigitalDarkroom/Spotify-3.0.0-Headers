//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPObjectRepresentation.h"
#import "SPSessionObserver.h"

@class NSDate, NSString, SPSession;

@interface SPTPlaybackStateRestorer : NSObject <SPSessionObserver, SPObjectRepresentation>
{
    shared_ptr_50593ca1 _restorable;
    SPSession *_session;
    CDUnknownBlockType _knownToBeOffline;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _clientStateToRestore;
    NSDate *_onlineWaitStartDate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)objectRepresentation;
- (BOOL)restoreWithObjectRepresentation:(id)arg1;
- (BOOL)hasTimedOut;
- (void)sessionLoginModeChanged:(id)arg1;
- (void)beginWaitingForOnlineMode;
- (void)cleanup;
- (void)dealloc;
- (id)initWithRestorable:(shared_ptr_50593ca1)arg1 session:(id)arg2 knownToBeOffline:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

