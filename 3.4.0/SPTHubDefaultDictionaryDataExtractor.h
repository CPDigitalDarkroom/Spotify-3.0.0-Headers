//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTHubDefaultDictionaryDataExtractorKeys.h"
#import "SPTHubDefaultDictionaryDataExtractorMaps.h"
#import "SPTHubDictionaryDataExtractor.h"

@class NSDictionary, NSString;

@interface SPTHubDefaultDictionaryDataExtractor : NSObject <SPTHubDictionaryDataExtractor, SPTHubDefaultDictionaryDataExtractorKeys, SPTHubDefaultDictionaryDataExtractorMaps>
{
}

- (unsigned long long)iconFromString:(id)arg1;
- (id)tinkerbellDataFromDictionary:(id)arg1;
- (id)externalDataEndpointPathFromTargetDictionary:(id)arg1;
- (_Bool)viewHasHeaderFromTargetDictionary:(id)arg1;
- (id)viewTitleFromTargetDictionary:(id)arg1;
- (id)URLFromTargetDictionary:(id)arg1;
- (unsigned long long)typeFromTargetDictionary:(id)arg1;
- (id)targetDataFromButtonDictionary:(id)arg1;
- (id)titleFromButtonDictionary:(id)arg1;
- (unsigned long long)iconFromButtonDictionary:(id)arg1;
- (id)itemTargetDataFromDictionary:(id)arg1;
- (id)blockFooterTargetDataFromDictionary:(id)arg1;
- (id)blockFooterDataFromDictionary:(id)arg1;
- (id)blockHeaderAccessoryButtonTargetDataFromDictionary:(id)arg1;
- (id)blockHeaderAccessoryButtonDataFromDictionary:(id)arg1;
- (id)blockHeaderDataFromDictionary:(id)arg1;
- (id)headerButtonDataFromDictionary:(id)arg1;
- (id)headerDataFromDictionary:(id)arg1;
- (id)itemLoggingDataFromDictionary:(id)arg1;
- (id)itemDateFromDictionary:(id)arg1;
- (id)itemDescriptionTextFromDictionary:(id)arg1;
- (id)itemMetaDataTitleFromDictionary:(id)arg1;
- (id)itemTargetExternalDataEndpointPathFromDictionary:(id)arg1;
- (_Bool)itemTargetViewHasHeaderFromDictionary:(id)arg1;
- (id)itemTargetViewTitleFromDictionary:(id)arg1;
- (id)itemTargetURLFromDictionary:(id)arg1;
- (_Bool)itemIsContextMenuCompatibleFromDictionary:(id)arg1;
- (_Bool)itemIsPreviewableFromDictionary:(id)arg1;
- (unsigned long long)itemIconFromDictionary:(id)arg1;
- (id)itemImageURLFromDictionary:(id)arg1;
- (id)itemSubtitleFromDictionary:(id)arg1;
- (id)itemTitleFromDictionary:(id)arg1;
- (unsigned long long)itemTypeFromDictionary:(id)arg1;
- (id)itemDictionariesFromBlockDictionary:(id)arg1;
- (_Bool)blockTinkerbellStoryIsCompletedByItemUserInteractionsFromDictionary:(id)arg1;
- (unsigned long long)blockTinkerbellItemTypeFromDictionary:(id)arg1;
- (id)blockTinkerbellItemIdentifierFromDictionary:(id)arg1;
- (id)blockTinkerbellStoryIdentifierFromDictionary:(id)arg1;
- (_Bool)blockFooterTargetViewHasHeaderFromDictionary:(id)arg1;
- (id)blockFooterTargetViewTitleFromDictionary:(id)arg1;
- (id)blockFooterTargetURLFromDictionary:(id)arg1;
- (id)blockFooterTitleFromDictionary:(id)arg1;
- (_Bool)blockHeaderAccessoryButtonTargetViewHasHeaderFromDictionary:(id)arg1;
- (id)blockHeaderAccessoryButtonTargetViewTitleFromDictionary:(id)arg1;
- (id)blockHeaderAccessoryButtonTargetURLFromDictionary:(id)arg1;
- (id)blockHeaderAccessoryButtonTitleFromDictionary:(id)arg1;
- (id)blockHeaderTitleFromDictionary:(id)arg1;
- (long long)blockRenderTypeFromDictionary:(id)arg1;
- (id)blockContentIdentifierFromDictionary:(id)arg1;
- (id)blockIdentifierFromDictionary:(id)arg1;
- (id)tabItemBlockIdentifierFromDictionary:(id)arg1;
- (id)tabItemTitleFromDictionary:(id)arg1;
- (id)blockDictionariesFromRemoteContentDictionary:(id)arg1;
- (id)tabItemDictionariesFromRemoteContentDictionary:(id)arg1;
- (id)headerButtonTargetURLFromRemoteContentDictionary:(id)arg1;
- (unsigned long long)headerButtonTargetTypeFromRemoteContentDictionary:(id)arg1;
- (id)headerButtonTitleFromRemoteContentDictionary:(id)arg1;
- (unsigned long long)headerButtonIconFromRemoteContentDictionary:(id)arg1;
- (id)headerBackgroundImageURLFromRemoteContentDictionary:(id)arg1;
- (unsigned long long)datasetIndexFromRemoteContentDictionary:(id)arg1;
- (id)nextDatasetEndpointPathFromRemoteContentDictionary:(id)arg1;
@property(readonly, nonatomic) NSDictionary *itemIconMap;
@property(readonly, nonatomic) NSDictionary *itemTypeMap;
@property(readonly, nonatomic) NSDictionary *blockTypeToCeramicRenderTypeMap;
@property(readonly, copy, nonatomic) NSString *tinkerbellStoryCompletedByUserInteractionsKey;
@property(readonly, copy, nonatomic) NSString *tinkerbellItemTypeKey;
@property(readonly, copy, nonatomic) NSString *tinkerbellItemIdentifierKey;
@property(readonly, copy, nonatomic) NSString *tinkerbellStoryIdentifierKey;
@property(readonly, copy, nonatomic) NSString *tinkerbellDataKey;
@property(readonly, copy, nonatomic) NSString *targetExternalDataEndpointPathKey;
@property(readonly, copy, nonatomic) NSString *targetViewHasHeaderKey;
@property(readonly, copy, nonatomic) NSString *targetViewTitleKey;
@property(readonly, copy, nonatomic) NSString *targetURLKey;
@property(readonly, copy, nonatomic) NSString *targetTypeKey;
@property(readonly, copy, nonatomic) NSString *buttonTargetDataKey;
@property(readonly, copy, nonatomic) NSString *buttonTitleKey;
@property(readonly, copy, nonatomic) NSString *buttonIconKey;
@property(readonly, copy, nonatomic) NSString *itemLoggingDataKey;
@property(readonly, copy, nonatomic) NSString *itemDateKey;
@property(readonly, copy, nonatomic) NSString *itemDescriptionTextKey;
@property(readonly, copy, nonatomic) NSString *itemMetaDataTitleKey;
@property(readonly, copy, nonatomic) NSString *itemTargetKey;
@property(readonly, copy, nonatomic) NSString *itemPreviewsDisabledKey;
@property(readonly, copy, nonatomic) NSString *itemIconKey;
@property(readonly, copy, nonatomic) NSString *itemImageURLKey;
@property(readonly, copy, nonatomic) NSString *itemSubtitleKey;
@property(readonly, copy, nonatomic) NSString *itemTitleKey;
@property(readonly, copy, nonatomic) NSString *itemTypeKey;
@property(readonly, copy, nonatomic) NSString *blockItemDictionariesKey;
@property(readonly, copy, nonatomic) NSString *blockFooterTargetKey;
@property(readonly, copy, nonatomic) NSString *blockFooterTitleKey;
@property(readonly, copy, nonatomic) NSString *blockFooterDataKey;
@property(readonly, copy, nonatomic) NSString *blockHeaderAccessoryButtonDataKey;
@property(readonly, copy, nonatomic) NSString *blockHeaderDataTitleKey;
@property(readonly, copy, nonatomic) NSString *blockHeaderDataKey;
@property(readonly, copy, nonatomic) NSString *blockTypeKey;
@property(readonly, copy, nonatomic) NSString *blockContentIdentifierKey;
@property(readonly, copy, nonatomic) NSString *blockIdentifierKey;
@property(readonly, copy, nonatomic) NSString *blockDictionariesKey;
@property(readonly, copy, nonatomic) NSString *tabItemBlockIdentifierKey;
@property(readonly, copy, nonatomic) NSString *tabItemTitleKey;
@property(readonly, copy, nonatomic) NSString *tabItemDictionariesKey;
@property(readonly, copy, nonatomic) NSString *headerButtonDataKey;
@property(readonly, copy, nonatomic) NSString *headerBackgroundImageKey;
@property(readonly, copy, nonatomic) NSString *headerDataKey;
@property(readonly, copy, nonatomic) NSString *datasetIndexKey;
@property(readonly, copy, nonatomic) NSString *nextDatasetEndpointPathKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

