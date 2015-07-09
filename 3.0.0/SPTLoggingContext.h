//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface SPTLoggingContext : NSObject
{
    NSURL *_viewURI;
    NSString *_referrer;
    NSString *_referrerVersion;
}

@property(readonly, copy, nonatomic) NSString *referrerVersion; // @synthesize referrerVersion=_referrerVersion;
@property(readonly, copy, nonatomic) NSString *referrer; // @synthesize referrer=_referrer;
@property(readonly, copy, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
- (void).cxx_destruct;
- (id)initWithViewURI:(id)arg1 referrer:(id)arg2 referrerVersion:(id)arg3;

@end
