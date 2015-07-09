//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPCore;

@interface SPTRequestAccounting : NSObject
{
    struct shared_ptr<spotify::analytics::RequestAccounting> _request_accounting;
    SPCore *_core;
}

+ (id)requestAccountingWithCore:(id)arg1;
@property(nonatomic) __weak SPCore *core; // @synthesize core=_core;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addRequestFromURL:(id)arg1 bytesDownloaded:(int)arg2 bytesUploaded:(int)arg3;
- (id)initWithCore:(id)arg1;

@end
