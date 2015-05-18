//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTExternalContentItem.h"
#import "SPTImageLoaderDelegate.h"

@class NSArray, NSString, UIImage;

@interface SPTContentItemChangeNotificationImplementation : NSObject <SPTImageLoaderDelegate, SPTExternalContentItem>
{
    BOOL _hasTriedToLoadImage;
    UIImage *_image;
    id <SPTImageLoader> _imageLoader;
}

@property(nonatomic) BOOL hasTriedToLoadImage; // @synthesize hasTriedToLoadImage=_hasTriedToLoadImage;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)generateImageWithSize:(struct CGSize)arg1 foregroundColor:(id)arg2 backgroundColor:(id)arg3;
@property(readonly, nonatomic) unsigned int childStructureHint;
@property(readonly, copy, nonatomic) NSArray *headers;
@property(readonly, copy, nonatomic) NSArray *children;
@property(readonly, nonatomic) BOOL shouldPlayParent;
@property(readonly, nonatomic) BOOL isItemContainer;
@property(readonly, nonatomic) BOOL playable;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, copy, nonatomic) NSString *subTitle;
@property(readonly, copy, nonatomic) NSString *title;
- (void)imageLoader:(id)arg1 didFailToLoadImageForURL:(id)arg2 error:(id)arg3 context:(id)arg4;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)loadImageAtURLIfAppropriate:(id)arg1 size:(struct CGSize)arg2;
- (void)triggerChangeNotifications;
- (void)removeItemChangedSubscriptionBlock:(CDUnknownBlockType)arg1;
- (void)subscribeToItemChangedWithBlock:(CDUnknownBlockType)arg1;
- (void)updateChildren:(CDUnknownBlockType)arg1;
- (void)triggerChildrenChangeNotificationsWithChildren:(id)arg1;
- (void)removeChildrenChangedSubscriptionBlock:(CDUnknownBlockType)arg1;
- (void)subscribeToChildrenChangedWithBlock:(CDUnknownBlockType)arg1;
- (id)getOrCreateCallbackStorageForKey:(const void *)arg1;
- (id)initWithImageLoaderFactory:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
