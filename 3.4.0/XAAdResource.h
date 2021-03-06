//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSOperation, NSString, NSURL, XAXMSimpleRestClient;

@interface XAAdResource : NSObject
{
    _Bool _saveLocally;
    _Bool _loadCancelled;
    NSString *_urlString;
    NSOperation *_requestOperation;
    CDUnknownBlockType _handler;
    NSData *_data;
    NSURL *_URL;
    XAXMSimpleRestClient *_restClient;
}

@property(retain, nonatomic) XAXMSimpleRestClient *restClient; // @synthesize restClient=_restClient;
@property(nonatomic) _Bool loadCancelled; // @synthesize loadCancelled=_loadCancelled;
@property(retain) NSURL *URL; // @synthesize URL=_URL;
@property(retain) NSData *data; // @synthesize data=_data;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) NSOperation *requestOperation; // @synthesize requestOperation=_requestOperation;
@property(nonatomic) _Bool saveLocally; // @synthesize saveLocally=_saveLocally;
@property(readonly, retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (void).cxx_destruct;
- (id)filePath;
- (id)fileName;
- (_Bool)isSource:(id)arg1;
- (_Bool)ready;
- (_Bool)loaded;
- (void)onFailedLoad:(id)arg1;
- (void)onDataLoaded;
- (void)cancelLoadSilently:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)loadWithLoadHandler:(CDUnknownBlockType)arg1;
- (id)initWithURLString:(id)arg1;

@end

