//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SPTHubExternalDataSpace <NSObject>
@property(readonly, copy, nonatomic) NSString *nextExternalDatasetEndpointPath;
@property(readonly, nonatomic) unsigned long long numberOfExternalDataBlocks;
- (id <SPTHubExternalDataBlock>)externalDataBlockAtIndex:(unsigned long long)arg1;
@end

