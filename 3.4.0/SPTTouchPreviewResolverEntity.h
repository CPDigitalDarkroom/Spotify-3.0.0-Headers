//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, NSUUID, SPTTouchPreviewResolverEntityService;

@interface SPTTouchPreviewResolverEntity : NSObject
{
    NSUUID *_cancellationIdentifier;
    NSURL *_uri;
    SPTTouchPreviewResolverEntityService *_resolverService;
    CDUnknownBlockType _completion;
    unsigned long long _state;
}

@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) SPTTouchPreviewResolverEntityService *resolverService; // @synthesize resolverService=_resolverService;
@property(readonly, nonatomic) NSURL *uri; // @synthesize uri=_uri;
@property(retain, nonatomic) NSUUID *cancellationIdentifier; // @synthesize cancellationIdentifier=_cancellationIdentifier;
- (void).cxx_destruct;
- (id)initWithCancellationIdentifier:(id)arg1 uri:(id)arg2 resolverService:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end

