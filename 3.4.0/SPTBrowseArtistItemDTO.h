//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTBrowseItemDTO.h"

#import "SPTCeramicItem.h"

@class NSArray, NSString, NSURL;

@interface SPTBrowseArtistItemDTO : SPTBrowseItemDTO <SPTCeramicItem>
{
    NSURL *_imageURL;
    NSURL *_URI;
    NSString *_name;
}

@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSURL *URI; // @synthesize URI=_URI;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long imageStyle;
- (id)placeholderImageForSize:(unsigned long long)arg1;
- (id)itemActionURL;
- (id)itemSubtitle;
@property(readonly, copy, nonatomic) NSString *title;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy, nonatomic) NSURL *actionURL;
@property(readonly, nonatomic) NSURL *audioTouchEntityURI;
@property(readonly, nonatomic) NSString *audioTouchResolverServiceName;
@property(readonly, nonatomic) NSArray *audioTouchResolverServicePathComponents;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <NSCoding> loggingData;
@property(readonly, nonatomic, getter=isPreviewable) _Bool previewable;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;

@end

