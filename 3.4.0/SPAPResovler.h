//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPAPResovler : NSObject
{
    struct ApResolver *_ap_resolver;
    id <SPAPResovlerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)resolve:(id)arg1;
- (id)initWithCore:(id)arg1 delegate:(id)arg2 clientRevision:(unsigned int)arg3;

@end
