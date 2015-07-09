//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTImageLoaderDelegate.h"
#import "SPTNowPlayingInfoCenterManagerProtocol.h"
#import "SPTNowPlayingTrackMetadataQueueObserver.h"
#import "SPTNowPlayingTrackPositionObserver.h"

@class MPMediaItemArtwork, MPNowPlayingInfoCenter, NSString, NSURL, SPTNowPlayingPlaybackController, SPTNowPlayingTrackMetadataQueue;

@interface SPTNowPlayingInfoCenterManager : NSObject <SPTImageLoaderDelegate, SPTNowPlayingTrackMetadataQueueObserver, SPTNowPlayingTrackPositionObserver, SPTNowPlayingInfoCenterManagerProtocol>
{
    id <SPTNowPlayingInfoCenterManagerDelegate> _delegate;
    id <SPTImageLoader> _imageLoader;
    MPNowPlayingInfoCenter *_infoCenter;
    NSURL *_imageURL;
    NSURL *_requestedImageURL;
    MPMediaItemArtwork *_artwork;
    SPTNowPlayingPlaybackController *_playbackController;
    SPTNowPlayingTrackMetadataQueue *_trackMetadataQueue;
}

@property(retain, nonatomic) SPTNowPlayingTrackMetadataQueue *trackMetadataQueue; // @synthesize trackMetadataQueue=_trackMetadataQueue;
@property(retain, nonatomic) SPTNowPlayingPlaybackController *playbackController; // @synthesize playbackController=_playbackController;
@property(retain, nonatomic) MPMediaItemArtwork *artwork; // @synthesize artwork=_artwork;
@property(retain, nonatomic) NSURL *requestedImageURL; // @synthesize requestedImageURL=_requestedImageURL;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) MPNowPlayingInfoCenter *infoCenter; // @synthesize infoCenter=_infoCenter;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(nonatomic) __weak id <SPTNowPlayingInfoCenterManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)nowPlayingTrackPositionDidChange:(id)arg1;
- (void)trackMetadataQueueDidFinishUpdating:(id)arg1;
- (void)trackMetadataQueue:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (id)infoDictionaryFromTrack:(id)arg1;
- (unsigned long long)persistentIdForTrackURL:(id)arg1;
- (void)updateNowPlayingInfoCenterForReal;
- (void)updateNowPlayingInfoCenter;
- (void)imageLoader:(id)arg1 didFailToLoadImageForURL:(id)arg2 error:(id)arg3 context:(id)arg4;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)setImageWithURL:(id)arg1;
- (void)setImage:(id)arg1 withURL:(id)arg2;
- (id)placeholderImage;
- (void)dealloc;
- (id)initWithPlaybackController:(id)arg1 trackMetadataQueue:(id)arg2 infoCenter:(id)arg3 imageLoader:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

