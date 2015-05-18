//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTBrowseItemDTO.h"

#import "SPTCeramicDescribableItem.h"
#import "SPTCeramicItem.h"

@class NSArray, NSString, NSURL;

@interface SPTBrowsePlaylistItemDTO : SPTBrowseItemDTO <SPTCeramicItem, SPTCeramicDescribableItem>
{
    NSString *_title;
    NSString *_playlistIdentifier;
    NSString *_playlistDescription;
    NSString *_imageID;
    NSURL *_URI;
    NSString *_genre;
    NSString *_subGenre;
    NSURL *_locationURL;
    int _numberOfSubscribers;
}

+ (id)predicateForSubGenreID:(id)arg1;
@property(nonatomic) int numberOfSubscribers; // @synthesize numberOfSubscribers=_numberOfSubscribers;
@property(retain, nonatomic) NSURL *locationURL; // @synthesize locationURL=_locationURL;
@property(retain, nonatomic) NSString *subGenre; // @synthesize subGenre=_subGenre;
@property(retain, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property(retain, nonatomic) NSURL *URI; // @synthesize URI=_URI;
@property(retain, nonatomic) NSString *imageID; // @synthesize imageID=_imageID;
@property(retain, nonatomic) NSString *playlistDescription; // @synthesize playlistDescription=_playlistDescription;
@property(retain, nonatomic) NSString *playlistIdentifier; // @synthesize playlistIdentifier=_playlistIdentifier;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *descriptionText;
@property(readonly, copy, nonatomic) NSString *subtitle;
- (id)placeholderImageForSize:(unsigned int)arg1;
- (id)itemMetaTitle;
@property(readonly, copy, nonatomic) NSURL *actionURL;
@property(readonly, copy, nonatomic) NSURL *imageURL;
@property(readonly, nonatomic) NSString *formattedNumberOfSubscribers;
- (id)initWithLegacyBrowsePlaylistItem:(id)arg1;
- (id)initWithLegacyBrowseCategoryItem:(id)arg1;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSURL *audioTouchEntityURI;
@property(readonly, nonatomic) NSString *audioTouchResolverServiceName;
@property(readonly, nonatomic) NSArray *audioTouchResolverServicePathComponents;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) unsigned int imageStyle;
@property(readonly, nonatomic) id <NSCoding> loggingData;
@property(readonly, nonatomic, getter=isPreviewable) BOOL previewable;
@property(readonly) Class superclass;

@end

