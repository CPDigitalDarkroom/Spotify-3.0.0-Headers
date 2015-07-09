//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDataDelegate.h"
#import "NSURLConnectionDelegate.h"
#import "SPVASTParserDelegate.h"

@class NSMutableData, NSString, NSURLConnection, SPVASTParser;

@interface SPVASTRequest : NSObject <NSURLConnectionDelegate, NSURLConnectionDataDelegate, SPVASTParserDelegate>
{
    BOOL _running;
    id <SPVASTRequestDelegate> _delegate;
    NSURLConnection *_connection;
    SPVASTParser *_parser;
    NSMutableData *_data;
}

@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(nonatomic, getter=isRunning) BOOL running; // @synthesize running=_running;
@property(retain, nonatomic) SPVASTParser *parser; // @synthesize parser=_parser;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak id <SPVASTRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)parser:(id)arg1 didFinishParsingResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)cancel;
- (void)start;
- (void)dealloc;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
