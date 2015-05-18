//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTBrowseItemDTO.h"

#import "SPTCeramicItem.h"

@class NSArray, NSDate, NSString, NSURL;

@interface SPTBrowseReleaseItemDTO : SPTBrowseItemDTO <SPTCeramicItem>
{
    NSString *_albumName;
    NSDate *_releaseDate;
    NSURL *_URI;
    NSString *_artistName;
    NSString *_imageID;
    int _numberOfTracks;
    NSString *_releaseDescription;
    NSURL *_locationURL;
    NSURL *_artistURI;
}

@property(retain, nonatomic) NSURL *artistURI; // @synthesize artistURI=_artistURI;
@property(retain, nonatomic) NSURL *locationURL; // @synthesize locationURL=_locationURL;
@property(retain, nonatomic) NSString *releaseDescription; // @synthesize releaseDescription=_releaseDescription;
@property(nonatomic) int numberOfTracks; // @synthesize numberOfTracks=_numberOfTracks;
@property(retain, nonatomic) NSString *imageID; // @synthesize imageID=_imageID;
@property(retain, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(retain, nonatomic) NSURL *URI; // @synthesize URI=_URI;
@property(retain, nonatomic) NSDate *releaseDate; // @synthesize releaseDate=_releaseDate;
@property(retain, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
- (void).cxx_destruct;
- (id)itemActionURL;
- (id)itemImageURL;
- (id)itemSubtitle;
- (id)itemTitle;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy, nonatomic) NSURL *actionURL;
@property(readonly, nonatomic) NSURL *audioTouchEntityURI;
@property(readonly, nonatomic) NSString *audioTouchResolverServiceName;
@property(readonly, nonatomic) NSArray *audioTouchResolverServicePathComponents;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) unsigned int imageStyle;
@property(readonly, copy, nonatomic) NSURL *imageURL;
@property(readonly, nonatomic) id <NSCoding> loggingData;
@property(readonly, nonatomic, getter=isPreviewable) BOOL previewable;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

