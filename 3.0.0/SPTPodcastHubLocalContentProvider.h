//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCollectionEntityListObserver.h"
#import "SPTHubLocalContentProvider.h"

@class NSArray, NSString, NSUUID;

@interface SPTPodcastHubLocalContentProvider : NSObject <SPTCollectionEntityListObserver, SPTHubLocalContentProvider>
{
    id <SPTCollectionEntityList> _entityList;
    id <SPTShowEntityService> _showEntityService;
    unsigned int _mode;
    id <SPTHubLocalContentBuilder> _builder;
    NSArray *_items;
    NSUUID *_blockIdentifier;
}

@property(retain, nonatomic) NSUUID *blockIdentifier; // @synthesize blockIdentifier=_blockIdentifier;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <SPTHubLocalContentBuilder> builder; // @synthesize builder=_builder;
@property(nonatomic) unsigned int mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) __weak id <SPTShowEntityService> showEntityService; // @synthesize showEntityService=_showEntityService;
@property(readonly, nonatomic) id <SPTCollectionEntityList> entityList; // @synthesize entityList=_entityList;
- (void).cxx_destruct;
- (void)performOnMainQueue:(CDUnknownBlockType)arg1;
- (void)addHubBlockWithTitle:(id)arg1 renderType:(int)arg2;
- (void)addAudioContentItemWithTitle:(id)arg1 subtitle:(id)arg2 imageURL:(id)arg3 actionURL:(id)arg4 metaDataTitle:(id)arg5;
- (void)rebuildHubContent;
- (void)reloadByForcingUpdate:(BOOL)arg1;
- (id)episodeURIsFromItems;
- (id)showURIsFromItems;
- (id)hubBlockTitleForCurrentMode;
- (void)entityListDidReload:(id)arg1;
- (void)entityList:(id)arg1 metadataDidLoadAtIndexPath:(id)arg2;
- (void)addLocalContentToHubWithViewURI:(id)arg1 usingBuilder:(id)arg2;
- (void)prepareForHubWithViewURI:(id)arg1;
@property(readonly, nonatomic) BOOL itemsShouldHavePlaystateIndicators;
- (void)dealloc;
- (id)initWithEntityList:(id)arg1 showEntityService:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

