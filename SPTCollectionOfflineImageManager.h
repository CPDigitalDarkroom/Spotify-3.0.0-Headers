//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCollectionOfflineObserver.h"

@class NSOperationQueue, SPCore;

@interface SPTCollectionOfflineImageManager : NSObject <SPTCollectionOfflineObserver>
{
    id <SPTCollectionOfflining><SPTCollectionInternal> _collection;
    SPCore *_core;
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    NSOperationQueue *_artistImageOperationQueue;
    NSOperationQueue *_albumImageOperationQueue;
    NSOperationQueue *_trackImageOperationQueue;
    id <SPTImageLoader> _imageLoader;
}

+ (id)collectionOfflineImageManagerWithCollection:(id)arg1 imageLoaderFactory:(id)arg2 core:(id)arg3;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) NSOperationQueue *trackImageOperationQueue; // @synthesize trackImageOperationQueue=_trackImageOperationQueue;
@property(retain, nonatomic) NSOperationQueue *albumImageOperationQueue; // @synthesize albumImageOperationQueue=_albumImageOperationQueue;
@property(retain, nonatomic) NSOperationQueue *artistImageOperationQueue; // @synthesize artistImageOperationQueue=_artistImageOperationQueue;
@property(retain, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(nonatomic) __weak SPCore *core; // @synthesize core=_core;
@property(retain, nonatomic) id <SPTCollectionOfflining><SPTCollectionInternal> collection; // @synthesize collection=_collection;
- (void).cxx_destruct;
- (void)offlineStateChanged;
- (void)offlineEntities:(id)arg1 forKey:(id)arg2 operationQueue:(id)arg3;
- (void)offlineStateChangedCoalesced;
- (void)processTracks;
- (void)processAlbums;
- (void)processArtists;
- (void)processEntity:(id)arg1 image:(id)arg2 offlined:(BOOL)arg3 operationQueue:(id)arg4;
- (id)provideOperationQueue;
- (BOOL)operationQueue:(id)arg1 containsOperationWithURL:(id)arg2;
- (id)initWithCollection:(id)arg1 imageLoaderFactory:(id)arg2 core:(id)arg3;

@end

