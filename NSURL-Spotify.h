//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

@class NSArray, NSString;

@interface NSURL (Spotify)
+ (id)URLWithFuzzyString:(id)arg1;
+ (id)spt_URLWithImageID:(id)arg1;
+ (id)sp_helpURL;
+ (id)sp_signupURL;
+ (id)sp_licenseURL;
+ (id)spt_URLWithUserName:(id)arg1;
- (id)URLRedirectingThroughHTTP;
@property(readonly, nonatomic, getter=spt_application) NSString *application;
@property(readonly, nonatomic, getter=spt_username) NSString *username;
@property(readonly, nonatomic, getter=spt_localFileImagePath) NSString *localFileImagePath;
- (id)spt_imageIDsFromPathComponent:(id)arg1;
@property(readonly, nonatomic, getter=spt_isApplicationURL) BOOL isApplicationURL;
@property(readonly, nonatomic, getter=spt_isRadioURL) BOOL isRadioURL;
@property(readonly, nonatomic, getter=spt_isProfileURL) BOOL isProfileURL;
@property(readonly, nonatomic, getter=spt_isCollectionUnionArtistAllTracksURL) BOOL isCollectionUnionArtistAllTracksURL;
@property(readonly, nonatomic, getter=spt_isCollectionUnionAlbumURL) BOOL isCollectionUnionAlbumURL;
@property(readonly, nonatomic, getter=spt_isCollectionUnionArtistURL) BOOL isCollectionUnionArtistURL;
@property(readonly, nonatomic, getter=spt_isCollectionUnionURL) BOOL isCollectionUnionURL;
@property(readonly, nonatomic, getter=spt_isCollectionURL) BOOL isCollectionURL;
@property(readonly, nonatomic, getter=spt_isPlaylistRootTreeURL) BOOL isPlaylistRootTreeURL;
@property(readonly, nonatomic, getter=spt_isPlaylistRootURL) BOOL isPlaylistRootURL;
@property(readonly, nonatomic, getter=spt_isAllTracksInPlaylistFolderURL) BOOL isAllTracksInPlaylistFolderURL;
@property(readonly, nonatomic, getter=spt_isPlaylistFolderURL) BOOL isPlaylistFolderURL;
@property(readonly, nonatomic, getter=spt_isToplistURL) BOOL isToplistURL;
@property(readonly, nonatomic, getter=spt_isToplistTracksURL) BOOL isToplistTracksURL;
@property(readonly, nonatomic, getter=spt_isStarredTracksPlaylistURL) BOOL isStarredTracksPlaylistURL;
@property(readonly, nonatomic, getter=spt_isLocalFilesPlaylistURL) BOOL isLocalFilesPlaylistURL;
@property(readonly, nonatomic, getter=spt_isPlaylistURL) BOOL isPlaylistURL;
@property(readonly, nonatomic, getter=spt_isInboxURL) BOOL isInboxURL;
@property(readonly, nonatomic, getter=spt_isValidAlbumURL) BOOL isValidAlbumURL;
@property(readonly, nonatomic, getter=spt_isAlbumURL) BOOL isAlbumURL;
@property(readonly, nonatomic, getter=spt_isValidArtistURL) BOOL isValidArtistURL;
@property(readonly, nonatomic, getter=spt_isArtistURL) BOOL isArtistURL;
@property(readonly, nonatomic, getter=spt_isSearchViewURL) BOOL isSearchViewURL;
@property(readonly, nonatomic, getter=spt_imageURLs) NSArray *imageURLs;
@property(readonly, nonatomic, getter=spt_imageIDs) NSArray *imageIDs;
@property(readonly, nonatomic, getter=spt_isHTTPImageURL) BOOL isHttpImageURL;
@property(readonly, nonatomic, getter=spt_isLocalFileImageURL) BOOL isLocalFileImageURL;
@property(readonly, nonatomic, getter=spt_isMosaicURL) BOOL isMosaicURL;
@property(readonly, nonatomic, getter=spt_isImageURL) BOOL isImageURL;
@property(readonly, nonatomic, getter=spt_isLocalTrackURL) BOOL isLocalTrackURL;
@property(readonly, nonatomic, getter=spt_isTrackURL) BOOL isTrackURL;
@property(readonly, nonatomic, getter=spt_isAdURL) BOOL isAdURL;
@end
