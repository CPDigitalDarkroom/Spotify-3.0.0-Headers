//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

@class NSArray, NSString;

@interface SPURL : NSURL
{
    struct SpotifyLink _link;
}

+ (id)URLWithURL:(id)arg1;
+ (id)URLWithPlaylistImageIdentifier:(id)arg1;
+ (id)URLWithSpotifyLink:(const struct SpotifyLink *)arg1;
+ (id)URLWithFuzzyString:(id)arg1;
+ (id)URLWithString:(id)arg1;
+ (id)URLWithUTF8String:(const char *)arg1;
+ (id)emptyURL;
@property(nonatomic) struct SpotifyLink link; // @synthesize link=_link;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) BOOL canAddToInbox;
@property(readonly, nonatomic) BOOL isCollectionUnionMissingAlbum;
@property(readonly, nonatomic) BOOL isCollectionUnionAlbum;
@property(readonly, nonatomic) BOOL isCollectionUnionArtistAllTracks;
@property(readonly, nonatomic) BOOL isCollectionUnionArtist;
@property(readonly, nonatomic) BOOL isCollectionUnion;
@property(readonly, nonatomic) BOOL isCollection;
@property(readonly, nonatomic) BOOL isFollowPage;
@property(readonly, nonatomic) BOOL isLocalFilesPlaylist;
@property(readonly, nonatomic) BOOL isPublishedRoot;
@property(readonly, nonatomic) BOOL isPlaylistFolder;
@property(readonly, nonatomic) BOOL isPlaylistRootTree;
@property(readonly, nonatomic) BOOL isPlaylistRoot;
@property(readonly, nonatomic) BOOL isAd;
@property(readonly, nonatomic) BOOL isRadio;
@property(readonly, nonatomic) BOOL isEmpty;
@property(readonly, nonatomic) BOOL isInternalViewLink;
@property(readonly, nonatomic) BOOL isInternalData;
@property(readonly, nonatomic) BOOL isImage;
@property(readonly, nonatomic) BOOL isMosaicImage;
@property(readonly, nonatomic) BOOL isLocalFileImage;
@property(readonly, nonatomic) BOOL isSpotifyImage;
@property(readonly, nonatomic) BOOL isTrack;
@property(readonly, nonatomic) BOOL isLocalTrack;
@property(readonly, nonatomic) BOOL isSpotifyTrack;
@property(readonly, nonatomic) BOOL isJustStartApp;
@property(readonly, nonatomic) BOOL isProfile;
@property(readonly, nonatomic) BOOL isInbox;
@property(readonly, nonatomic) BOOL isStarred;
@property(readonly, nonatomic) BOOL isToplist;
@property(readonly, nonatomic) BOOL isPlaylist;
@property(readonly, nonatomic) BOOL isSearch;
@property(readonly, nonatomic) BOOL isApplication;
@property(readonly, nonatomic) BOOL isAlbum;
@property(readonly, nonatomic) BOOL isArtistTopTracks;
@property(readonly, nonatomic) BOOL isArtist;
@property(readonly, nonatomic) unsigned int trackOffset;
@property(readonly, nonatomic) NSString *username;
@property(readonly, nonatomic) unsigned long long folderId;
@property(readonly, nonatomic) NSArray *mosaicImageLinks;
@property(readonly, nonatomic) NSString *radioId;
@property(readonly, nonatomic) int internalView;
@property(readonly, nonatomic) NSString *application;
@property(readonly, nonatomic) NSString *internalData;
@property(readonly, nonatomic) NSString *searchQuery;
- (id)URIString;
- (id)URI;
- (id)URL;
@property(readonly, nonatomic) NSURL *URLRedirectingThroughHTTP;
- (id)initWithCollectionUnionForUsername:(id)arg1 artistName:(id)arg2 missingLocalAlbumName:(id)arg3;
- (id)initWithCollectionUnionForUsername:(id)arg1 missingAlbum:(id)arg2;
- (id)initWithCollectionUnionForUsername:(id)arg1 artistName:(id)arg2 localAlbumName:(id)arg3;
- (id)initWithCollectionUnionForUsername:(id)arg1 album:(id)arg2;
- (id)initWithCollectionUnionForUsername:(id)arg1 allTracksLocalArtistName:(id)arg2;
- (id)initWithCollectionUnionForUsername:(id)arg1 allTracksArtist:(id)arg2;
- (id)initWithCollectionUnionForUsername:(id)arg1 localArtistName:(id)arg2;
- (id)initWithCollectionUnionForUsername:(id)arg1 artist:(id)arg2;
- (id)initWithCollectionUnionForUsername:(id)arg1;
- (id)initWithCollectionForUsername:(id)arg1;
- (id)initWithImageId:(struct ImageId)arg1;
- (id)initAsMosaicWithImageLinks:(id)arg1;
- (id)initWithApplication:(id)arg1 arguments:(id)arg2;
- (id)initWithSearchQuery:(id)arg1;
- (id)initWithUser:(id)arg1;
- (id)initWithUserName:(id)arg1;
- (id)initWithTrack:(id)arg1;
- (id)initWithAlbum:(id)arg1;
- (id)initWithArtist:(id)arg1;
- (id)initWithPlaylist:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithPlaylistImageIdentifier:(id)arg1;
- (id)initWithSpotifyLink:(const struct SpotifyLink *)arg1;
- (id)initWithFuzzyString:(id)arg1;
- (id)initWithString:(id)arg1;
@property(readonly, nonatomic) BOOL isInternalViewLinkNowPlaying;

@end

