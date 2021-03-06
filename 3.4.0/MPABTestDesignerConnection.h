//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPWebSocketDelegate.h"

@class MPWebSocket, NSDictionary, NSMutableDictionary, NSOperationQueue, NSString, NSURL, UIView;

@interface MPABTestDesignerConnection : NSObject <MPWebSocketDelegate>
{
    _Bool _open;
    _Bool _connected;
    NSURL *_url;
    NSMutableDictionary *_session;
    NSDictionary *_typeToMessageClassMap;
    MPWebSocket *_webSocket;
    NSOperationQueue *_commandQueue;
    UIView *_recordingView;
    CDUnknownBlockType _connectCallback;
    CDUnknownBlockType _disconnectCallback;
    _Bool _sessionEnded;
}

@property(nonatomic) _Bool sessionEnded; // @synthesize sessionEnded=_sessionEnded;
@property(readonly, nonatomic) _Bool connected; // @synthesize connected=_connected;
- (void).cxx_destruct;
- (void)hideConnectedView;
- (void)showConnectedView;
- (void)reconnect:(_Bool)arg1;
- (void)webSocket:(id)arg1 didCloseWithCode:(long long)arg2 reason:(id)arg3 wasClean:(_Bool)arg4;
- (void)webSocket:(id)arg1 didFailWithError:(id)arg2;
- (void)webSocketDidOpen:(id)arg1;
- (void)webSocket:(id)arg1 didReceiveMessage:(id)arg2;
- (id)designerMessageForMessage:(id)arg1;
- (void)sendMessage:(id)arg1;
- (id)sessionObjectForKey:(id)arg1;
- (void)setSessionObject:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (void)close;
- (void)open;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 connectCallback:(CDUnknownBlockType)arg2 disconnectCallback:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

