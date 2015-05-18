//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCeramicSpace.h"

@class NSArray, NSString, SPTGenreHeaderData;

@interface SPTGenreSpace : NSObject <SPTCeramicSpace>
{
    NSArray *_blocks;
    SPTGenreHeaderData *_headerData;
}

@property(readonly, nonatomic) SPTGenreHeaderData *headerData; // @synthesize headerData=_headerData;
@property(readonly, nonatomic) NSArray *blocks; // @synthesize blocks=_blocks;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *title;
- (id)initWithDictionary:(id)arg1 genreID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
