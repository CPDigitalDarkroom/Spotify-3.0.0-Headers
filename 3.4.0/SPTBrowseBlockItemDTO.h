//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTBrowseItemDTO.h"

#import "SPTCeramicBlock.h"

@class NSArray, NSPredicate, NSString, NSURL;

@interface SPTBrowseBlockItemDTO : SPTBrowseItemDTO <SPTCeramicBlock>
{
    NSString *_title;
    long long _renderType;
    NSArray *_items;
    NSPredicate *_filterPredicate;
    NSArray *_allItems;
}

+ (long long)renderTypeFromString:(id)arg1;
@property(retain, nonatomic) NSArray *allItems; // @synthesize allItems=_allItems;
@property(retain, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) long long renderType; // @synthesize renderType=_renderType;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithTitle:(id)arg1 renderType:(long long)arg2 items:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *descriptionText;
@property(readonly, copy, nonatomic) NSURL *footerActionURL;
@property(readonly, copy, nonatomic) NSString *footerTitle;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

