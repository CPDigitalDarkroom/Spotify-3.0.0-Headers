//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADAdNetworkExtras.h"

@class NSDictionary, NSString;

@interface GADExtras : NSObject <GADAdNetworkExtras>
{
    NSDictionary *_additionalParameters;
}

@property(copy, nonatomic) NSDictionary *additionalParameters; // @synthesize additionalParameters=_additionalParameters;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

