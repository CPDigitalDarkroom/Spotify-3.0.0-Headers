//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTPlayerPlay.h"

@class NSObject<OS_dispatch_queue>, NSString, NSURL, SPTPlayOptions, SPTPlayerContext, SPTask;

@interface SPTPlayerPlayImpl : NSObject <SPTPlayerPlay>
{
    id <SPTResolver> _resolver;
    NSObject<OS_dispatch_queue> *_queue;
    id <SPTPlayer> _player;
    CDUnknownBlockType _timeGetter;
    SPTPlayerContext *_context;
    SPTPlayOptions *_options;
    NSURL *_viewURI;
    SPTask *_sessionTask;
}

- (void).cxx_destruct;
- (void)invalidate;
- (id)play;
- (id)makePlayRequestForSession:(id)arg1;
- (id)playRequestForSession:(id)arg1;
- (id)loggingParams;
- (void)dealloc;
- (id)initWithResolver:(id)arg1 queue:(id)arg2 createSessionTask:(id)arg3 player:(id)arg4 timeGetter:(CDUnknownBlockType)arg5 context:(id)arg6 options:(id)arg7 viewURI:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

