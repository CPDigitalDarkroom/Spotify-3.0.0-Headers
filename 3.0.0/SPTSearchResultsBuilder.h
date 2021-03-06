//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableOrderedSet, NSString, SPTSearchFlags;

@interface SPTSearchResultsBuilder : NSObject
{
    id <SPTSearchEntityDictionaryParser> _entityDictionaryParser;
    NSString *_searchString;
    NSString *_searchTag;
    SPTSearchFlags *_flags;
    unsigned int _defaultEntityLimitPerSection;
    unsigned int _datasetIndex;
    NSMutableOrderedSet *_sectionOrder;
    NSMutableDictionary *_entitiesForSectionIdentifiers;
    NSMutableDictionary *_entityLimitsForSectionIdentifiers;
    NSMutableDictionary *_titlesForSectionIdentifiers;
    NSMutableDictionary *_allResultsTitlesForSectionIdentifiers;
    NSMutableDictionary *_allResultsViewURLsForSectionIdentifiers;
    NSMutableDictionary *_allResultsViewTitlesForSectionIdentifiers;
    NSMutableDictionary *_entityRenderingStyleForSectionIdentifiers;
    NSString *_nextDatasetEndpoint;
}

@property(copy, nonatomic) NSString *nextDatasetEndpoint; // @synthesize nextDatasetEndpoint=_nextDatasetEndpoint;
@property(readonly, copy, nonatomic) NSMutableDictionary *entityRenderingStyleForSectionIdentifiers; // @synthesize entityRenderingStyleForSectionIdentifiers=_entityRenderingStyleForSectionIdentifiers;
@property(readonly, copy, nonatomic) NSMutableDictionary *allResultsViewTitlesForSectionIdentifiers; // @synthesize allResultsViewTitlesForSectionIdentifiers=_allResultsViewTitlesForSectionIdentifiers;
@property(readonly, copy, nonatomic) NSMutableDictionary *allResultsViewURLsForSectionIdentifiers; // @synthesize allResultsViewURLsForSectionIdentifiers=_allResultsViewURLsForSectionIdentifiers;
@property(readonly, copy, nonatomic) NSMutableDictionary *allResultsTitlesForSectionIdentifiers; // @synthesize allResultsTitlesForSectionIdentifiers=_allResultsTitlesForSectionIdentifiers;
@property(readonly, copy, nonatomic) NSMutableDictionary *titlesForSectionIdentifiers; // @synthesize titlesForSectionIdentifiers=_titlesForSectionIdentifiers;
@property(readonly, copy, nonatomic) NSMutableDictionary *entityLimitsForSectionIdentifiers; // @synthesize entityLimitsForSectionIdentifiers=_entityLimitsForSectionIdentifiers;
@property(readonly, copy, nonatomic) NSMutableDictionary *entitiesForSectionIdentifiers; // @synthesize entitiesForSectionIdentifiers=_entitiesForSectionIdentifiers;
@property(readonly, copy, nonatomic) NSMutableOrderedSet *sectionOrder; // @synthesize sectionOrder=_sectionOrder;
@property(readonly, nonatomic) unsigned int datasetIndex; // @synthesize datasetIndex=_datasetIndex;
@property(readonly, nonatomic) unsigned int defaultEntityLimitPerSection; // @synthesize defaultEntityLimitPerSection=_defaultEntityLimitPerSection;
@property(readonly, nonatomic) SPTSearchFlags *flags; // @synthesize flags=_flags;
@property(readonly, copy, nonatomic) NSString *searchTag; // @synthesize searchTag=_searchTag;
@property(readonly, copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(readonly, nonatomic) id <SPTSearchEntityDictionaryParser> entityDictionaryParser; // @synthesize entityDictionaryParser=_entityDictionaryParser;
- (void).cxx_destruct;
- (void)addEntities:(id)arg1 toSectionWithIdentifier:(id)arg2 fromDictionary:(BOOL)arg3;
- (id)builderForNewDatasetWithRequestParameters:(id)arg1;
- (id)build;
- (void)addEntities:(id)arg1 toSectionWithIdentifier:(id)arg2;
- (void)addResultsFromDictionary:(id)arg1;
- (id)initWithRequestParameters:(id)arg1 entityDictionaryParser:(id)arg2;
- (id)initWithRequestParameters:(id)arg1 entityDictionaryParser:(id)arg2 sectionOrder:(id)arg3 entitiesForSectionIdentifiers:(id)arg4 entityLimitsForSectionIdentifiers:(id)arg5 titlesForSectionIdentifiers:(id)arg6 allResultsTitlesForSectionIdentifiers:(id)arg7 allResultsViewURLsForSectionIdentifiers:(id)arg8 allResultsViewTitlesForSectionIdentifiers:(id)arg9 entityRenderingStyleForSectionIdentifiers:(id)arg10;

@end

