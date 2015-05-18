//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCollectionEntityListItem.h"

@class NSString, NSURL;

@interface SPTCollectionRecentlyPlayedEntity : NSObject <SPTCollectionEntityListItem>
{
    BOOL _hasMetadata;
    BOOL _hidden;
    unsigned int _contentType;
    id <SPTCollection> _collection;
    NSString *_title;
    NSString *_subtitle;
    NSURL *_imageURL;
    NSURL *_originalEntityURL;
    NSURL *_currentTrackUrl;
    unsigned int _icon;
    double _lastPlayed;
}

@property(nonatomic) unsigned int icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSURL *currentTrackUrl; // @synthesize currentTrackUrl=_currentTrackUrl;
@property(copy, nonatomic) NSURL *originalEntityURL; // @synthesize originalEntityURL=_originalEntityURL;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <SPTCollection> collection; // @synthesize collection=_collection;
@property(nonatomic) BOOL hidden; // @synthesize hidden=_hidden;
@property(nonatomic) BOOL hasMetadata; // @synthesize hasMetadata=_hasMetadata;
@property(readonly, nonatomic) double lastPlayed; // @synthesize lastPlayed=_lastPlayed;
@property(readonly, nonatomic) unsigned int contentType; // @synthesize contentType=_contentType;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *previewURL;
- (void)action;
@property(readonly, copy, nonatomic) NSString *loggingContext;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSURL *offlineURL;
- (id)navigatableEntityURL;
@property(readonly, copy, nonatomic) NSURL *trackURL;
@property(readonly, copy, nonatomic) NSURL *entityURL;
@property(readonly, nonatomic) NSURL *canonicalEntityURL;
- (BOOL)metadataFromExistingEntity:(id)arg1;
- (void)addMetadataWithTitle:(id)arg1 subtitle:(id)arg2 imageURL:(id)arg3;
- (void)addMetadataWithTitle:(id)arg1 subtitle:(id)arg2 imageURL:(id)arg3 icon:(unsigned int)arg4;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithURL:(id)arg1 andTrackURL:(id)arg2 lastPlayed:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
