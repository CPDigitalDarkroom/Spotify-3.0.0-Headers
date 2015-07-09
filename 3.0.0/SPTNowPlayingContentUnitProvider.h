//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTNowPlayingBaseUnitProvider.h"

@class SPTLogCenter, SPTNowPlayingBlurControllerObject, SPTNowPlayingCarouselAreaProvider, SPTNowPlayingFooterAreaProvider, SPTNowPlayingInformationAreaProvider, SPTNowPlayingModel, SPTTheme;

@interface SPTNowPlayingContentUnitProvider : SPTNowPlayingBaseUnitProvider
{
    SPTNowPlayingBlurControllerObject *_blurController;
    SPTNowPlayingCarouselAreaProvider *_carouselAreaProvider;
    SPTNowPlayingInformationAreaProvider *_informationAreaProvider;
    SPTNowPlayingFooterAreaProvider *_footerAreaProvider;
    SPTNowPlayingModel *_model;
    SPTTheme *_theme;
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTVideoSurfaceManager> _videoSurfaceManager;
    SPTLogCenter *_logCenter;
    id <SPTUpsellPopupManager> _upsellPopupManager;
    id <SPTAdsManager> _adsManager;
}

@property(nonatomic) __weak id <SPTAdsManager> adsManager; // @synthesize adsManager=_adsManager;
@property(nonatomic) __weak id <SPTUpsellPopupManager> upsellPopupManager; // @synthesize upsellPopupManager=_upsellPopupManager;
@property(retain, nonatomic) SPTLogCenter *logCenter; // @synthesize logCenter=_logCenter;
@property(nonatomic) __weak id <SPTVideoSurfaceManager> videoSurfaceManager; // @synthesize videoSurfaceManager=_videoSurfaceManager;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(retain, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) __weak SPTNowPlayingModel *model; // @synthesize model=_model;
@property(retain, nonatomic) SPTNowPlayingFooterAreaProvider *footerAreaProvider; // @synthesize footerAreaProvider=_footerAreaProvider;
@property(retain, nonatomic) SPTNowPlayingInformationAreaProvider *informationAreaProvider; // @synthesize informationAreaProvider=_informationAreaProvider;
@property(retain, nonatomic) SPTNowPlayingCarouselAreaProvider *carouselAreaProvider; // @synthesize carouselAreaProvider=_carouselAreaProvider;
@property(nonatomic) __weak SPTNowPlayingBlurControllerObject *blurController; // @synthesize blurController=_blurController;
- (void).cxx_destruct;
- (void)setInteractiveEventObservers:(id)arg1;
- (void)createAdContentUnit;
- (void)createMainContainerUnit;
- (void)processPlayerStateChange:(id)arg1;
- (id)initWithPlayer:(id)arg1 carouselAreaProvider:(id)arg2 informationAreaProvider:(id)arg3 footerAreaProvider:(id)arg4 nowPlayingModel:(id)arg5 theme:(id)arg6 imageLoaderFactory:(id)arg7 videoSurfaceManager:(id)arg8 contextMenuFeature:(id)arg9 logCenter:(id)arg10 upsellPopupManager:(id)arg11 adsManager:(id)arg12;

@end
