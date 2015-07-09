//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSURL;

@interface SPTResponse : NSObject
{
    int _status;
    NSURL *_URL;
    NSData *_body;
    NSDictionary *_headers;
}

@property(readonly, copy, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(readonly, copy, nonatomic) NSData *body; // @synthesize body=_body;
@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) int status; // @synthesize status=_status;
- (void).cxx_destruct;
- (struct Response)cppResponse;
- (id)initWithCppResponse:(const struct Response *)arg1;
- (id)description;
@property(readonly, nonatomic, getter=isSuccessful) _Bool successful;
- (id)initRespondingAtURL:(id)arg1 status:(int)arg2 body:(id)arg3 headers:(id)arg4;

@end

