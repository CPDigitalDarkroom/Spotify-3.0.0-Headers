//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSDictionary, NSString, NSURL;

@protocol SPTHubDictionaryDataExtractor <NSObject>
- (NSDictionary *)itemLoggingDataFromDictionary:(NSDictionary *)arg1;
- (NSDate *)itemDateFromDictionary:(NSDictionary *)arg1;
- (NSString *)itemDescriptionTextFromDictionary:(NSDictionary *)arg1;
- (NSString *)itemMetaDataTitleFromDictionary:(NSDictionary *)arg1;
- (NSString *)itemTargetExternalDataEndpointPathFromDictionary:(NSDictionary *)arg1;
- (_Bool)itemTargetViewHasHeaderFromDictionary:(NSDictionary *)arg1;
- (NSString *)itemTargetViewTitleFromDictionary:(NSDictionary *)arg1;
- (NSURL *)itemTargetURLFromDictionary:(NSDictionary *)arg1;
- (_Bool)itemIsContextMenuCompatibleFromDictionary:(NSDictionary *)arg1;
- (_Bool)itemIsPreviewableFromDictionary:(NSDictionary *)arg1;
- (unsigned long long)itemIconFromDictionary:(NSDictionary *)arg1;
- (NSURL *)itemImageURLFromDictionary:(NSDictionary *)arg1;
- (NSString *)itemSubtitleFromDictionary:(NSDictionary *)arg1;
- (NSString *)itemTitleFromDictionary:(NSDictionary *)arg1;
- (unsigned long long)itemTypeFromDictionary:(NSDictionary *)arg1;
- (NSArray *)itemDictionariesFromBlockDictionary:(NSDictionary *)arg1;
- (_Bool)blockTinkerbellStoryIsCompletedByItemUserInteractionsFromDictionary:(NSDictionary *)arg1;
- (unsigned long long)blockTinkerbellItemTypeFromDictionary:(NSDictionary *)arg1;
- (NSString *)blockTinkerbellItemIdentifierFromDictionary:(NSDictionary *)arg1;
- (NSString *)blockTinkerbellStoryIdentifierFromDictionary:(NSDictionary *)arg1;
- (_Bool)blockFooterTargetViewHasHeaderFromDictionary:(NSDictionary *)arg1;
- (NSString *)blockFooterTargetViewTitleFromDictionary:(NSDictionary *)arg1;
- (NSURL *)blockFooterTargetURLFromDictionary:(NSDictionary *)arg1;
- (NSString *)blockFooterTitleFromDictionary:(NSDictionary *)arg1;
- (_Bool)blockHeaderAccessoryButtonTargetViewHasHeaderFromDictionary:(NSDictionary *)arg1;
- (NSString *)blockHeaderAccessoryButtonTargetViewTitleFromDictionary:(NSDictionary *)arg1;
- (NSURL *)blockHeaderAccessoryButtonTargetURLFromDictionary:(NSDictionary *)arg1;
- (NSString *)blockHeaderAccessoryButtonTitleFromDictionary:(NSDictionary *)arg1;
- (NSString *)blockHeaderTitleFromDictionary:(NSDictionary *)arg1;
- (long long)blockRenderTypeFromDictionary:(NSDictionary *)arg1;
- (NSString *)blockContentIdentifierFromDictionary:(NSDictionary *)arg1;
- (NSString *)blockIdentifierFromDictionary:(NSDictionary *)arg1;
- (NSArray *)blockDictionariesFromRemoteContentDictionary:(NSDictionary *)arg1;
- (NSString *)tabItemBlockIdentifierFromDictionary:(NSDictionary *)arg1;
- (NSString *)tabItemTitleFromDictionary:(NSDictionary *)arg1;
- (NSArray *)tabItemDictionariesFromRemoteContentDictionary:(NSDictionary *)arg1;
- (NSURL *)headerButtonTargetURLFromRemoteContentDictionary:(NSDictionary *)arg1;
- (unsigned long long)headerButtonTargetTypeFromRemoteContentDictionary:(NSDictionary *)arg1;
- (NSString *)headerButtonTitleFromRemoteContentDictionary:(NSDictionary *)arg1;
- (unsigned long long)headerButtonIconFromRemoteContentDictionary:(NSDictionary *)arg1;
- (NSURL *)headerBackgroundImageURLFromRemoteContentDictionary:(NSDictionary *)arg1;
- (unsigned long long)datasetIndexFromRemoteContentDictionary:(NSDictionary *)arg1;
- (NSString *)nextDatasetEndpointPathFromRemoteContentDictionary:(NSDictionary *)arg1;
@end

