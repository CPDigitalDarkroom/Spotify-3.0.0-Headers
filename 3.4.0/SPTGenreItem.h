//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCeramicDescribableItem.h"
#import "SPTCeramicItemWithMetaDataTitle.h"

@class NSArray, NSDate, NSString, NSURL;

@interface SPTGenreItem : NSObject <SPTCeramicDescribableItem, SPTCeramicItemWithMetaDataTitle>
{
    _Bool _previewable;
    NSString *_title;
    NSString *_subtitle;
    NSURL *_imageURL;
    NSURL *_actionURL;
    NSString *_metaDataTitle;
    NSString *_descriptionText;
    id <NSCoding> _loggingData;
    NSDate *_date;
    unsigned long long _entityType;
}

@property(readonly, nonatomic) unsigned long long entityType; // @synthesize entityType=_entityType;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) id <NSCoding> loggingData; // @synthesize loggingData=_loggingData;
@property(readonly, copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(readonly, copy, nonatomic) NSString *metaDataTitle; // @synthesize metaDataTitle=_metaDataTitle;
@property(readonly, nonatomic, getter=isPreviewable) _Bool previewable; // @synthesize previewable=_previewable;
@property(readonly, copy, nonatomic) NSURL *actionURL; // @synthesize actionURL=_actionURL;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)placeholderImageForSize:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long imageStyle;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSURL *audioTouchEntityURI;
@property(readonly, nonatomic) NSString *audioTouchResolverServiceName;
@property(readonly, nonatomic) NSArray *audioTouchResolverServicePathComponents;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

