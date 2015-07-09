//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSURL;

@interface SPTCollectionEpisodesActionViewModel : NSObject
{
    BOOL _showActions;
    id <SPTPodcastFeature> _podcastFeature;
    NSURL *_viewURL;
    NSArray *_entries;
}

@property(retain, nonatomic) NSArray *entries; // @synthesize entries=_entries;
@property(retain, nonatomic) NSURL *viewURL; // @synthesize viewURL=_viewURL;
@property(nonatomic) __weak id <SPTPodcastFeature> podcastFeature; // @synthesize podcastFeature=_podcastFeature;
@property(nonatomic) BOOL showActions; // @synthesize showActions=_showActions;
- (void).cxx_destruct;
- (BOOL)canEditRowAtIndexPath:(id)arg1;
- (BOOL)indentWhileEditing:(id)arg1;
- (int)editStyleForIndexPath:(id)arg1;
- (id)entryAtIndexPath:(id)arg1;
- (unsigned int)numberOfEntriesInSection:(unsigned int)arg1;
- (unsigned int)numberOfEntries;
- (void)setupEntries;
- (id)initWithPodcastFeature:(id)arg1 viewURL:(id)arg2;

@end
