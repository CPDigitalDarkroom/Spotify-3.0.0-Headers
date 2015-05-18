//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTBannerItem.h"

#import "GADAppEventDelegate.h"
#import "SPTBannerItemCustomView.h"
#import "SPTBannerViewDelegate.h"
#import "SPTImageLoaderDelegate.h"

@class DFPBannerView, NSString, SPTPromotedContentBannerView, SPTPromotedEntityData, UIImage;

@interface SPTPromotedContentBannerItem : SPTBannerItem <SPTImageLoaderDelegate, SPTBannerViewDelegate, GADAppEventDelegate, SPTBannerItemCustomView>
{
    id <SPTPromotedContentBannerItemDelegate> _delegate;
    id <SPTBannerPresentationManagerTicket> _presentationTicket;
    UIImage *_image;
    NSString *_localizedHeader;
    SPTPromotedEntityData *_data;
    SPTPromotedContentBannerView *_bannerView;
    id <SPTImageLoader> _imageLoader;
    id <SPTPlayer> _player;
    id <SPTPlayerQueue> _playerQueue;
    id <SPTAdsManager> _adsManager;
    DFPBannerView *_dfpBannerView;
}

@property(retain, nonatomic) DFPBannerView *dfpBannerView; // @synthesize dfpBannerView=_dfpBannerView;
@property(nonatomic) __weak id <SPTAdsManager> adsManager; // @synthesize adsManager=_adsManager;
@property(nonatomic) __weak id <SPTPlayerQueue> playerQueue; // @synthesize playerQueue=_playerQueue;
@property(nonatomic) __weak id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) SPTPromotedContentBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(readonly, nonatomic) SPTPromotedEntityData *data; // @synthesize data=_data;
@property(readonly, nonatomic) NSString *localizedHeader; // @synthesize localizedHeader=_localizedHeader;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) id <SPTBannerPresentationManagerTicket> presentationTicket; // @synthesize presentationTicket=_presentationTicket;
@property(nonatomic) __weak id <SPTPromotedContentBannerItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)imageLoader:(id)arg1 didFailToLoadImageForURL:(id)arg2 error:(id)arg3 context:(id)arg4;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)adView:(id)arg1 didReceiveAppEvent:(id)arg2 withInfo:(id)arg3;
- (void)actionButtonTappedInBannerView:(id)arg1;
- (void)playPromotedTrack;
- (id)initWithData:(id)arg1 dfpBannerView:(id)arg2 imageLoader:(id)arg3 player:(id)arg4 playerQueue:(id)arg5 adsManager:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

