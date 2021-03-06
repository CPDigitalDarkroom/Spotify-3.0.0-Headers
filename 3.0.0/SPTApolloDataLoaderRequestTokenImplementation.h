//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTApolloDataLoaderRequestToken.h"

@class NSString, NSUUID;

@interface SPTApolloDataLoaderRequestTokenImplementation : NSObject <SPTApolloDataLoaderRequestToken>
{
    NSUUID *_identifier;
    id <SPTCancellationToken> _cancellationToken;
}

@property(retain, nonatomic) id <SPTCancellationToken> cancellationToken; // @synthesize cancellationToken=_cancellationToken;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (void)cancelRequest;
@property(readonly, nonatomic) BOOL requestIsCancellable;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

