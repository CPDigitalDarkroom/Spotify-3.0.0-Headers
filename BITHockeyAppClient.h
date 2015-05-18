//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue, NSURL;

@interface BITHockeyAppClient : NSObject
{
    NSURL *_baseURL;
    NSOperationQueue *_operationQueue;
}

+ (id)queryStringFromParameters:(id)arg1 withEncoding:(unsigned int)arg2;
+ (id)dataWithPostValue:(id)arg1 forKey:(id)arg2 contentType:(id)arg3 boundary:(id)arg4 filename:(id)arg5;
+ (id)dataWithPostValue:(id)arg1 forKey:(id)arg2 boundary:(id)arg3;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (void).cxx_destruct;
- (unsigned int)cancelOperationsWithPath:(id)arg1 method:(id)arg2;
- (void)enqeueHTTPOperation:(id)arg1;
- (void)postPath:(id)arg1 parameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getPath:(id)arg1 parameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)operationWithURLRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)requestWithMethod:(id)arg1 path:(id)arg2 parameters:(id)arg3;
- (id)initWithBaseURL:(id)arg1;
- (void)dealloc;

@end

