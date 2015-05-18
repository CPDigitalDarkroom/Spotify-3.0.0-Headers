//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString, NSURL;

@interface BrowseGenreItem : NSObject
{
    NSURL *_iconImageURL;
    NSURL *_genreURL;
    NSURL *_categoryHeaderImageURL;
    NSString *_genreID;
    NSString *_localizedGenreName;
    NSURL *_topSongsPlaylist;
    NSDictionary *_localizedSubGenres;
}

+ (id)browseGenreItemWithGenreID:(id)arg1 genreURL:(id)arg2 categoryHeaderImageURL:(id)arg3 iconImageURL:(id)arg4 genreName:(id)arg5;
+ (id)dataFromItemDictionary:(id)arg1;
@property(retain, nonatomic) NSDictionary *localizedSubGenres; // @synthesize localizedSubGenres=_localizedSubGenres;
@property(retain, nonatomic) NSURL *topSongsPlaylist; // @synthesize topSongsPlaylist=_topSongsPlaylist;
@property(retain, nonatomic) NSString *localizedGenreName; // @synthesize localizedGenreName=_localizedGenreName;
@property(retain, nonatomic) NSString *genreID; // @synthesize genreID=_genreID;
@property(retain, nonatomic) NSURL *categoryHeaderImageURL; // @synthesize categoryHeaderImageURL=_categoryHeaderImageURL;
@property(retain, nonatomic) NSURL *genreURL; // @synthesize genreURL=_genreURL;
@property(retain, nonatomic) NSURL *iconImageURL; // @synthesize iconImageURL=_iconImageURL;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *subGenres;

@end

