//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTSearchSerializable.h"

@class NSOrderedSet, NSString, NSURL;

@interface SPTSearchSection : NSObject <SPTSearchSerializable>
{
    _Bool _containsInteractiveEntities;
    NSString *_identifier;
    NSString *_title;
    NSString *_allResultsTitle;
    NSURL *_allResultsViewURL;
    NSString *_allResultsViewTitle;
    unsigned long long _entityRenderingStyle;
    NSOrderedSet *_entities;
}

@property(readonly, nonatomic) NSOrderedSet *entities; // @synthesize entities=_entities;
@property(readonly, nonatomic) unsigned long long entityRenderingStyle; // @synthesize entityRenderingStyle=_entityRenderingStyle;
@property(readonly, nonatomic) _Bool containsInteractiveEntities; // @synthesize containsInteractiveEntities=_containsInteractiveEntities;
@property(readonly, copy, nonatomic) NSString *allResultsViewTitle; // @synthesize allResultsViewTitle=_allResultsViewTitle;
@property(readonly, copy, nonatomic) NSURL *allResultsViewURL; // @synthesize allResultsViewURL=_allResultsViewURL;
@property(readonly, copy, nonatomic) NSString *allResultsTitle; // @synthesize allResultsTitle=_allResultsTitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned long long numberOfEntities;
- (id)entitiesMatchingPredicate:(id)arg1;
- (unsigned long long)indexOfEntity:(id)arg1;
- (id)entityAtIndex:(unsigned long long)arg1;
- (id)initWithIdentifier:(id)arg1 entities:(id)arg2 title:(id)arg3 allResultsTitle:(id)arg4 allResultsViewURL:(id)arg5 allResultsViewTitle:(id)arg6 entityRenderingStyle:(unsigned long long)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

