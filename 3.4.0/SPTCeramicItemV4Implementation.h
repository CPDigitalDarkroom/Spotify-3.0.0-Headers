//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCeramicDescribableItem.h"

@class NSArray, NSString, NSURL;

@interface SPTCeramicItemV4Implementation : NSObject <SPTCeramicDescribableItem>
{
    NSString *_title;
    NSString *_subtitle;
    NSURL *_imageURL;
    NSURL *_actionURL;
    NSString *_audioTouchResolverServiceName;
    NSArray *_audioTouchResolverServicePathComponents;
    NSString *_descriptionText;
    NSURL *_audioTouchEntityURI;
    unsigned long long _placeholderIcon;
}

@property(nonatomic) unsigned long long placeholderIcon; // @synthesize placeholderIcon=_placeholderIcon;
@property(readonly, nonatomic) NSURL *audioTouchEntityURI; // @synthesize audioTouchEntityURI=_audioTouchEntityURI;
@property(readonly, copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(readonly, nonatomic) NSArray *audioTouchResolverServicePathComponents; // @synthesize audioTouchResolverServicePathComponents=_audioTouchResolverServicePathComponents;
@property(readonly, nonatomic) NSString *audioTouchResolverServiceName; // @synthesize audioTouchResolverServiceName=_audioTouchResolverServiceName;
@property(readonly, copy, nonatomic) NSURL *actionURL; // @synthesize actionURL=_actionURL;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)init;
- (id)placeholderImageForSize:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=isPreviewable) _Bool previewable;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long imageStyle;
@property(readonly, nonatomic) id <NSCoding> loggingData;
@property(readonly) Class superclass;

@end

