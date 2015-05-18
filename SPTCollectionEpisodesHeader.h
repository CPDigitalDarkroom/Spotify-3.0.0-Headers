//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString;

@interface SPTCollectionEpisodesHeader : NSObject
{
    NSString *_title;
    NSMutableArray *_headerEpisodes;
}

@property(retain, nonatomic) NSMutableArray *headerEpisodes; // @synthesize headerEpisodes=_headerEpisodes;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int episodeCount;
@property(readonly, nonatomic) NSArray *episodes;
- (void)removeEpisode:(id)arg1;
- (void)appendEpisode:(id)arg1;
- (id)initWithTitle:(id)arg1;

@end

