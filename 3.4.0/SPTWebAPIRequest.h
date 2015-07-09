//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData, NSURLConnection;

@interface SPTWebAPIRequest : NSObject
{
    _Bool _isDownloading;
    id <SPTWebAPIRequestDelegate> _delegate;
    unsigned long long _type;
    NSURLConnection *_connection;
    NSMutableData *_receivedData;
}

@property(nonatomic) _Bool isDownloading; // @synthesize isDownloading=_isDownloading;
@property(retain, nonatomic) NSMutableData *receivedData; // @synthesize receivedData=_receivedData;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) __weak id <SPTWebAPIRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)cancel;
- (void)download;
- (id)initWithRequest:(id)arg1 andType:(unsigned long long)arg2;

@end
