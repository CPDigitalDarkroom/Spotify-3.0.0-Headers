//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTVideoPlayerMessage.h"

@class NSString;

@interface SPTVideoError : SPTVideoPlayerMessage
{
    unsigned int _code;
    NSString *_extra;
}

@property(readonly, copy, nonatomic) NSString *extra; // @synthesize extra=_extra;
@property(readonly, nonatomic) unsigned int code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)serializedDictionary;
- (id)initWithCode:(unsigned int)arg1 extra:(id)arg2;

@end

