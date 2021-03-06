//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTBrowseItemDTO.h"

#import "SPTCeramicSpace.h"

@class NSArray, NSDictionary, NSString;

@interface SPTBrowseSpaceItemDTO : SPTBrowseItemDTO <SPTCeramicSpace>
{
    NSString *_title;
    NSArray *_blocks;
    NSDictionary *_parameters;
}

@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) NSArray *blocks; // @synthesize blocks=_blocks;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool isItemsArrayComposedOnlyByBlocks;
- (id)spaceIdentifier;
- (id)initWithTitle:(id)arg1 blocks:(id)arg2;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

