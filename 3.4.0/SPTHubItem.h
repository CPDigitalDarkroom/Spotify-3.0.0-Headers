//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCeramicDescribableItem.h"
#import "SPTCeramicItemWithIcon.h"
#import "SPTCeramicItemWithMetaDataTitle.h"
#import "SPTHubDictionaryTransformable.h"
#import "SPTHubExternalDataItem.h"

@class NSArray, NSDate, NSString, NSURL, SPTHubUserInteractionTarget;

@interface SPTHubItem : NSObject <SPTCeramicItemWithIcon, SPTCeramicDescribableItem, SPTCeramicItemWithMetaDataTitle, SPTHubDictionaryTransformable, SPTHubExternalDataItem>
{
    _Bool _previewable;
    NSString *_title;
    NSString *_subtitle;
    NSURL *_imageURL;
    NSString *_metaDataTitle;
    NSString *_descriptionText;
    id <NSCoding> _loggingData;
    unsigned long long _icon;
    SPTHubUserInteractionTarget *_userInteractionTarget;
    unsigned long long _contextMenuType;
    NSDate *_date;
    unsigned long long _type;
}

@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) unsigned long long contextMenuType; // @synthesize contextMenuType=_contextMenuType;
@property(readonly, nonatomic) SPTHubUserInteractionTarget *userInteractionTarget; // @synthesize userInteractionTarget=_userInteractionTarget;
@property(readonly, nonatomic, getter=isPreviewable) _Bool previewable; // @synthesize previewable=_previewable;
@property(readonly, nonatomic) unsigned long long icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) id <NSCoding> loggingData; // @synthesize loggingData=_loggingData;
@property(readonly, copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(readonly, copy, nonatomic) NSString *metaDataTitle; // @synthesize metaDataTitle=_metaDataTitle;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *externalDataTargetEndpointPath;
@property(readonly, copy, nonatomic) NSURL *externalDataTargetURL;
@property(readonly, copy, nonatomic) NSURL *externalDataImageURL;
@property(readonly, copy, nonatomic) NSString *externalDataSubtitle;
@property(readonly, copy, nonatomic) NSString *externalDataTitle;
- (id)placeholderImageForSize:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) NSURL *actionURL;
- (id)initWithType:(unsigned long long)arg1 title:(id)arg2 subtitle:(id)arg3 imageURL:(id)arg4 icon:(unsigned long long)arg5 isPreviewable:(_Bool)arg6 isContextMenuCompatible:(_Bool)arg7 interactionTarget:(id)arg8 metaDataTitle:(id)arg9 descriptionText:(id)arg10 date:(id)arg11 loggingData:(id)arg12;
- (id)initWithDictionary:(id)arg1 dataExtractor:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) NSURL *audioTouchEntityURI;
@property(readonly, nonatomic) NSString *audioTouchResolverServiceName;
@property(readonly, nonatomic) NSArray *audioTouchResolverServicePathComponents;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long imageStyle;
@property(readonly) Class superclass;

@end

