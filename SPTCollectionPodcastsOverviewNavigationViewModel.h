//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface SPTCollectionPodcastsOverviewNavigationViewModel : NSObject
{
    id <SPTPodcastFeature> _podcastFeature;
    NSArray *_entries;
}

@property(retain, nonatomic) NSArray *entries; // @synthesize entries=_entries;
@property(nonatomic) __weak id <SPTPodcastFeature> podcastFeature; // @synthesize podcastFeature=_podcastFeature;
- (void).cxx_destruct;
- (id)entryAtIndexPath:(id)arg1;
- (unsigned int)numberOfEntriesInSection:(unsigned int)arg1;
- (void)setupEntries;
- (id)initWithPodcastFeature:(id)arg1;

@end

