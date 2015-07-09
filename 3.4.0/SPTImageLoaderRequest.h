//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTBasicImageLoaderCallback.h"
#import "SPTImageLoaderRequest.h"

@class AVAsset, NSDate, NSMutableArray, NSString, NSURL, SPTBasicImageLoader, SPTDataLoader;

@interface SPTImageLoaderRequest : NSObject <SPTBasicImageLoaderCallback, SPTImageLoaderRequest>
{
    _Bool _allowUpscaling;
    _Bool _cancelCalled;
    NSURL *_URL;
    NSString *_sourceIdentifier;
    id _context;
    NSString *_persistenceKey;
    NSDate *_creationDate;
    id _callback;
    SPTDataLoader *_dataLoader;
    id <SPTCancellationToken> _cancelToken;
    id <SPTImageLoaderRequestDelegate> _delegate;
    AVAsset *_asset;
    NSURL *_baseCDNURL;
    SPTBasicImageLoader *_basicImageLoader;
    unsigned long long _numberOfParts;
    NSMutableArray *_mosaicParts;
    NSMutableArray *_mosaicErrors;
    NSMutableArray *_mosaicRequests;
    struct CGSize _downloadSize;
    struct CGSize _requestedSize;
}

+ (id)imageLoaderRequestWithURL:(id)arg1 sourceIdentifier:(id)arg2 downloadSize:(struct CGSize)arg3 requestedSize:(struct CGSize)arg4 allowUpscaling:(_Bool)arg5 context:(id)arg6 dataLoader:(id)arg7 delegate:(id)arg8 baseCDNURL:(id)arg9 callback:(id)arg10 basicImageLoader:(id)arg11;
@property(retain, nonatomic) NSMutableArray *mosaicRequests; // @synthesize mosaicRequests=_mosaicRequests;
@property(retain, nonatomic) NSMutableArray *mosaicErrors; // @synthesize mosaicErrors=_mosaicErrors;
@property(retain, nonatomic) NSMutableArray *mosaicParts; // @synthesize mosaicParts=_mosaicParts;
@property(nonatomic) unsigned long long numberOfParts; // @synthesize numberOfParts=_numberOfParts;
@property(nonatomic) __weak SPTBasicImageLoader *basicImageLoader; // @synthesize basicImageLoader=_basicImageLoader;
@property(retain) NSURL *baseCDNURL; // @synthesize baseCDNURL=_baseCDNURL;
@property(retain) AVAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) __weak id <SPTImageLoaderRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property _Bool cancelCalled; // @synthesize cancelCalled=_cancelCalled;
@property(retain) id <SPTCancellationToken> cancelToken; // @synthesize cancelToken=_cancelToken;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) id callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSString *persistenceKey; // @synthesize persistenceKey=_persistenceKey;
@property(readonly, nonatomic) id context; // @synthesize context=_context;
@property(readonly, nonatomic) _Bool allowUpscaling; // @synthesize allowUpscaling=_allowUpscaling;
@property(readonly, nonatomic) struct CGSize requestedSize; // @synthesize requestedSize=_requestedSize;
@property(readonly, nonatomic) struct CGSize downloadSize; // @synthesize downloadSize=_downloadSize;
@property(readonly, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (void)imageLoaded:(id)arg1 withDataKey:(id)arg2 forURL:(id)arg3 startTime:(id)arg4 forEntity:(id)arg5;
- (void)imageLoadError:(id)arg1 forURL:(id)arg2 context:(id)arg3;
- (void)imageLoaded:(id)arg1 forURL:(id)arg2 startTime:(id)arg3 context:(id)arg4;
- (id)optimalImageForResizingTo:(struct CGSize)arg1 fromImages:(id)arg2;
- (id)sortImagesBySize:(id)arg1;
- (id)imagesDataFromAVMetadataItems:(id)arg1;
- (void)buildMosaicImage;
- (void)handleCallback;
- (void)loadMosaic;
- (void)dispatchError:(id)arg1;
- (void)disaptchSuccess:(id)arg1;
- (id)convertURLToHTTP:(id)arg1;
- (void)loadRemoteImageWithURL:(id)arg1;
- (void)loadLocalFileImage;
- (_Bool)cancelled;
- (void)cancel;
- (void)load;
- (id)initWithURL:(id)arg1 sourceIdentifier:(id)arg2 downloadSize:(struct CGSize)arg3 requestedSize:(struct CGSize)arg4 allowUpscaling:(_Bool)arg5 context:(id)arg6 dataLoader:(id)arg7 delegate:(id)arg8 baseCDNURL:(id)arg9 callback:(id)arg10 basicImageLoader:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

