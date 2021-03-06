//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCeramicItem.h"

@class NSArray, NSString, NSURL, UIImage;

@interface SPTChartBlockItem : NSObject <SPTCeramicItem>
{
    _Bool _previewable;
    NSString *_subtitle;
    NSURL *_imageURL;
    NSURL *_actionURL;
    NSString *_audioTouchResolverServiceName;
    NSArray *_audioTouchResolverServicePathComponents;
    UIImage *_placeHolderImage;
    NSString *_clientLocalizedTitle;
    NSString *_titleKey;
}

@property(readonly, copy, nonatomic) NSString *titleKey; // @synthesize titleKey=_titleKey;
@property(readonly, copy, nonatomic) NSString *clientLocalizedTitle; // @synthesize clientLocalizedTitle=_clientLocalizedTitle;
@property(copy, nonatomic) UIImage *placeHolderImage; // @synthesize placeHolderImage=_placeHolderImage;
@property(readonly, nonatomic) NSArray *audioTouchResolverServicePathComponents; // @synthesize audioTouchResolverServicePathComponents=_audioTouchResolverServicePathComponents;
@property(readonly, nonatomic) NSString *audioTouchResolverServiceName; // @synthesize audioTouchResolverServiceName=_audioTouchResolverServiceName;
@property(readonly, nonatomic, getter=isPreviewable) _Bool previewable; // @synthesize previewable=_previewable;
@property(readonly, copy, nonatomic) NSURL *actionURL; // @synthesize actionURL=_actionURL;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *title;
- (id)initWithDictionary:(id)arg1 isPreviewable:(_Bool)arg2;
- (id)placeholderImageForSize:(unsigned long long)arg1;

// Remaining properties
@property(readonly, nonatomic) NSURL *audioTouchEntityURI;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long imageStyle;
@property(readonly, nonatomic) id <NSCoding> loggingData;
@property(readonly) Class superclass;

@end

