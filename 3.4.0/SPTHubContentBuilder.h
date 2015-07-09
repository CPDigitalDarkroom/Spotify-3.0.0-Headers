//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTHubLocalContentBuilder.h"

@class NSMutableArray, NSMutableDictionary, NSString, SPTHubSpaceHeaderData;

@interface SPTHubContentBuilder : NSObject <SPTHubLocalContentBuilder>
{
    id <SPTHubContentBuilderDelegate> _delegate;
    SPTHubSpaceHeaderData *_spaceHeaderData;
    NSString *_nextDatasetEndpointPath;
    NSMutableArray *_tabItems;
    NSMutableArray *_remoteBlocks;
    NSMutableDictionary *_remoteBlocksForIdentifiers;
    NSMutableDictionary *_localBlockIndexesForIdentifiers;
    NSMutableDictionary *_localBlocksForIdentifiers;
}

@property(readonly, nonatomic) NSMutableDictionary *localBlocksForIdentifiers; // @synthesize localBlocksForIdentifiers=_localBlocksForIdentifiers;
@property(readonly, nonatomic) NSMutableDictionary *localBlockIndexesForIdentifiers; // @synthesize localBlockIndexesForIdentifiers=_localBlockIndexesForIdentifiers;
@property(readonly, nonatomic) NSMutableDictionary *remoteBlocksForIdentifiers; // @synthesize remoteBlocksForIdentifiers=_remoteBlocksForIdentifiers;
@property(readonly, nonatomic) NSMutableArray *remoteBlocks; // @synthesize remoteBlocks=_remoteBlocks;
@property(readonly, nonatomic) NSMutableArray *tabItems; // @synthesize tabItems=_tabItems;
@property(copy, nonatomic) NSString *nextDatasetEndpointPath; // @synthesize nextDatasetEndpointPath=_nextDatasetEndpointPath;
@property(retain, nonatomic) SPTHubSpaceHeaderData *spaceHeaderData; // @synthesize spaceHeaderData=_spaceHeaderData;
@property(nonatomic) __weak id <SPTHubContentBuilderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)localContentUpdateComplete;
- (void)removeLocalContentBlockWithIdentifier:(id)arg1;
- (void)removeAllItemsFromLocalContentBlockWithIdentifier:(id)arg1;
- (void)removeLocalContentItemWithIdentifier:(id)arg1 inBlockWithIdentifier:(id)arg2;
- (void)replaceLocalContentItemWithIdentifier:(id)arg1 inBlockWithIdentifier:(id)arg2 withItemWithType:(unsigned long long)arg3 title:(id)arg4 subtitle:(id)arg5 imageURL:(id)arg6 actionURL:(id)arg7 metaDataTitle:(id)arg8 descriptionText:(id)arg9 loggingData:(id)arg10;
- (id)addLocalContentItemWithType:(unsigned long long)arg1 title:(id)arg2 subtitle:(id)arg3 imageURL:(id)arg4 actionURL:(id)arg5 metaDataTitle:(id)arg6 descriptionText:(id)arg7 loggingData:(id)arg8 toBlockWithIdentifier:(id)arg9;
- (id)addLocalContentBlockWithTitle:(id)arg1 renderType:(long long)arg2 footerTitle:(id)arg3 footerActionURL:(id)arg4 footerTargetViewTitle:(id)arg5 atIndex:(id)arg6;
- (id)blockIdentifierForTabItemAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool containsContent;
- (void)reset;
- (id)buildSpaceForSelectedTabItemIndex:(unsigned long long)arg1;
- (void)addRemoteContentData:(id)arg1 usingDataExtractor:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
