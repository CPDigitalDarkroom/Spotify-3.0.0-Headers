//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AVAudioPlayerDelegate.h"
#import "SPTAudioDriverControllerObserver.h"
#import "SPTAudioDriverObserver.h"
#import "SPTBrowseRunningSliderDelegate.h"
#import "SPTEntityHeaderContentController.h"
#import "SPTImageLoaderDelegate.h"

@class AVAudioPlayer, NSLayoutConstraint, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, SPTActionButton, SPTBrowseGenreItemDTO, SPTBrowseRunningSlider, SPTImageBlurView, SPTTheme, UIImage, UIImageView, UILabel, UIView;

@interface SPTBrowseGenreHeaderViewController : UIViewController <SPTEntityHeaderContentController, SPTImageLoaderDelegate, SPTBrowseRunningSliderDelegate, SPTAudioDriverControllerObserver, SPTAudioDriverObserver, AVAudioPlayerDelegate>
{
    BOOL _filterControlASlider;
    BOOL _shouldPlayAudioFeedback;
    id <SPTBrowseHeaderActionProtocol> _delegate;
    SPTActionButton *_filterButton;
    NSString *_navigationBarTitle;
    NSString *_filterButtonTitle;
    AVAudioPlayer *_audioPlayer;
    UILabel *_navigationTitleLabel;
    UILabel *_titleLabel;
    UIImageView *_backgroundImageView;
    SPTImageBlurView *_blurredBackgroundImageView;
    UIView *_backgroundDimView;
    SPTBrowseRunningSlider *_filterSlider;
    SPTBrowseGenreItemDTO *_genreItem;
    id <SPTImageLoader> _imageLoader;
    SPTTheme *_theme;
    UIView *_clippedContentView;
    NSLayoutConstraint *_navigationTitleLabelTopConstraint;
    NSLayoutConstraint *_titleButtonTopConstraint;
    UIImage *_backgroundImage;
    NSString *_categoryTitle;
    UILabel *_subtitleLabel;
    NSObject<OS_dispatch_queue> *_backgroundAudioQueue;
    id <SPTAudioDriverController> _audioDriverController;
    NSMutableArray *_audioPlayerQueue;
}

@property(retain, nonatomic) NSMutableArray *audioPlayerQueue; // @synthesize audioPlayerQueue=_audioPlayerQueue;
@property(retain, nonatomic) id <SPTAudioDriverController> audioDriverController; // @synthesize audioDriverController=_audioDriverController;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundAudioQueue; // @synthesize backgroundAudioQueue=_backgroundAudioQueue;
@property(nonatomic) BOOL shouldPlayAudioFeedback; // @synthesize shouldPlayAudioFeedback=_shouldPlayAudioFeedback;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) NSString *categoryTitle; // @synthesize categoryTitle=_categoryTitle;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) NSLayoutConstraint *titleButtonTopConstraint; // @synthesize titleButtonTopConstraint=_titleButtonTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *navigationTitleLabelTopConstraint; // @synthesize navigationTitleLabelTopConstraint=_navigationTitleLabelTopConstraint;
@property(retain, nonatomic) UIView *clippedContentView; // @synthesize clippedContentView=_clippedContentView;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) SPTBrowseGenreItemDTO *genreItem; // @synthesize genreItem=_genreItem;
@property(readonly, nonatomic, getter=isFilterControlASlider) BOOL filterControlASlider; // @synthesize filterControlASlider=_filterControlASlider;
@property(retain, nonatomic) SPTBrowseRunningSlider *filterSlider; // @synthesize filterSlider=_filterSlider;
@property(retain, nonatomic) UIView *backgroundDimView; // @synthesize backgroundDimView=_backgroundDimView;
@property(retain, nonatomic) SPTImageBlurView *blurredBackgroundImageView; // @synthesize blurredBackgroundImageView=_blurredBackgroundImageView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *navigationTitleLabel; // @synthesize navigationTitleLabel=_navigationTitleLabel;
@property(retain, nonatomic) AVAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(retain, nonatomic) NSString *filterButtonTitle; // @synthesize filterButtonTitle=_filterButtonTitle;
@property(retain, nonatomic) NSString *navigationBarTitle; // @synthesize navigationBarTitle=_navigationBarTitle;
@property(retain, nonatomic) SPTActionButton *filterButton; // @synthesize filterButton=_filterButton;
@property(nonatomic) __weak id <SPTBrowseHeaderActionProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
- (void)audioDriverDidBegin:(id)arg1;
- (void)audioDriverController:(id)arg1 didRemoveAudioDriver:(id)arg2;
- (void)audioDriverController:(id)arg1 didAddAudioDriver:(id)arg2;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)browseRunningSliderDidStopSliding:(id)arg1;
- (void)browseRunningSlider:(id)arg1 didSelectValue:(float)arg2;
- (void)browseRunningSliderDidStartSliding:(id)arg1;
- (float)entityHeaderViewControllerMinimumHeight:(id)arg1;
- (void)entityHeaderViewController:(id)arg1 didUpdateBounceOffsets:(struct UIEdgeInsets)arg2;
- (void)entityHeaderViewController:(id)arg1 didUpdateVisibleRect:(struct CGRect)arg2;
- (int)currentVolume;
- (void)applyVolume:(int)arg1 onAudioUnit:(struct OpaqueAudioComponentInstance *)arg2;
- (void)applyVolumeOnAudioDrivers;
- (void)playBPMAudioFeedback;
- (void)notifyDelegateOfSliderValueChange;
- (void)notifyDelegateOfFilterTap;
- (void)filterButtonDidReceiveTouchUpInside:(id)arg1;
- (void)populateViewWithGenreItem:(id)arg1;
- (void)setupLayoutConstraints;
- (void)setupSliderFilterControl;
- (void)setupButtonFilterControl;
- (void)setupSubtitleLabel;
- (void)setupTitleLabel;
- (void)setupNavigationTitleLabel;
- (void)setupDimmedBackgroundImageView;
- (void)setupBlurredBackgroundImageView;
- (void)setupBackgroundImageView;
- (void)setupClippedContentView;
- (void)setupView;
- (void)scheduleFeedbackSoundForBPM:(double)arg1;
- (void)viewDidLoad;
- (void)setupPropertiesWithOptionsMask:(unsigned int)arg1;
- (id)initWithGenreItemDTO:(id)arg1 imageLoader:(id)arg2 options:(unsigned int)arg3 audioDriverController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

