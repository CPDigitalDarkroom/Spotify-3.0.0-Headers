//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTNowPlayingCarouselModelDelegate.h"

@class NSURL, SPTNowPlayingAuxiliaryActionsModel, SPTNowPlayingCarouselModel;

@interface SPTNowPlayingCoverArtModel : NSObject <SPTNowPlayingCarouselModelDelegate>
{
    id <SPTNowPlayingCoverArtModelDelegate> _delegate;
    SPTNowPlayingCarouselModel *_carouselModel;
    SPTNowPlayingAuxiliaryActionsModel *_auxiliaryActionsModel;
}

@property(retain, nonatomic) SPTNowPlayingAuxiliaryActionsModel *auxiliaryActionsModel; // @synthesize auxiliaryActionsModel=_auxiliaryActionsModel;
@property(retain, nonatomic) SPTNowPlayingCarouselModel *carouselModel; // @synthesize carouselModel=_carouselModel;
@property(nonatomic) __weak id <SPTNowPlayingCoverArtModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)carouselModelDidChangeLoadingState:(id)arg1;
- (void)carouselModel:(id)arg1 requestsAnimation:(unsigned long long)arg2;
- (void)dragToRight;
- (void)attemptDragToLeft;
- (void)dragToLeft;
- (_Bool)canShowRelativePage:(long long)arg1;
- (_Bool)canScrollToRelativePage:(long long)arg1;
- (_Bool)isLoading;
- (_Bool)isInSyncWithPlayer;
- (_Bool)hasVideoAtRelativePage:(long long)arg1;
- (id)URLForImageAtRelativePage:(long long)arg1;
@property(readonly, nonatomic) NSURL *adsURLToOpen;
- (id)initWithTrackMetadataQueue:(id)arg1 playbackController:(id)arg2 auxiliaryActionsModel:(id)arg3 nowPlayingModel:(id)arg4 logCenter:(id)arg5 upsellPopupManager:(id)arg6;

@end

