//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCeramicItem.h"

@class NSArray, NSString, NSURL;

@interface SPTBrowseItemDTO : NSObject <SPTCeramicItem>
{
}

+ (id)URLForIcon:(unsigned long long)arg1;
+ (unsigned long long)iconForNSURL:(id)arg1;
+ (id)territoriesSetWithString:(id)arg1;
+ (id)dataTransferObjectWithItemKey:(id)arg1 valueDictionary:(id)arg2;
+ (id)URIFromString:(id)arg1;
+ (id)processArrayOfJSONItems:(id)arg1;
- (id)placeholderImageForSize:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=isPreviewable) _Bool previewable;
@property(readonly, copy, nonatomic) NSURL *imageURL;
@property(readonly, copy, nonatomic) NSURL *actionURL;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSURL *audioTouchEntityURI;
@property(readonly, nonatomic) NSString *audioTouchResolverServiceName;
@property(readonly, nonatomic) NSArray *audioTouchResolverServicePathComponents;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long imageStyle;
@property(readonly, nonatomic) id <NSCoding> loggingData;
@property(readonly) Class superclass;

@end

