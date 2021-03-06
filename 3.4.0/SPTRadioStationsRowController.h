//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTImageLoaderDelegate.h"
#import "SPTRadioHorizontalStationLayoutDelegate.h"
#import "SPTThemableView.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class CAGradientLayer, NSArray, NSDate, NSMutableArray, NSString, NSURL, SPTInfoView, SPTRadioHorizontalCollectionView;

@interface SPTRadioStationsRowController : UIViewController <UICollectionViewDataSource, SPTImageLoaderDelegate, SPTRadioHorizontalStationLayoutDelegate, SPTThemableView, UICollectionViewDelegate, UIGestureRecognizerDelegate>
{
    _Bool _isPaused;
    _Bool _isDeletionModeActive;
    _Bool _isDeletionModeOn;
    _Bool _isUpdatingStations;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    SPTRadioHorizontalCollectionView *_collectionView;
    NSURL *_currentlyPlayingSeed;
    id <SPTRadioViewPlayDelegate> _playDelegate;
    id <SPTRadioStationsRowControllerDelegate> _rowControllerDelegate;
    id <SPTImageLoader> _imageLoader;
    CAGradientLayer *_maskLayer;
    NSMutableArray *_mutableStations;
    SPTInfoView *_infoView;
    NSDate *_lastDeleteRequest;
    id <SPTAudioTouch> _audioTouch;
    id <SPTLocalSettings> _localSettings;
}

+ (double)viewHeight;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) id <SPTAudioTouch> audioTouch; // @synthesize audioTouch=_audioTouch;
@property(retain, nonatomic) NSDate *lastDeleteRequest; // @synthesize lastDeleteRequest=_lastDeleteRequest;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(nonatomic) _Bool isUpdatingStations; // @synthesize isUpdatingStations=_isUpdatingStations;
@property(nonatomic) _Bool isDeletionModeOn; // @synthesize isDeletionModeOn=_isDeletionModeOn;
@property(retain, nonatomic) NSMutableArray *mutableStations; // @synthesize mutableStations=_mutableStations;
@property(retain, nonatomic) CAGradientLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(nonatomic) _Bool isDeletionModeActive; // @synthesize isDeletionModeActive=_isDeletionModeActive;
@property(nonatomic) __weak id <SPTRadioStationsRowControllerDelegate> rowControllerDelegate; // @synthesize rowControllerDelegate=_rowControllerDelegate;
@property(nonatomic) __weak id <SPTRadioViewPlayDelegate> playDelegate; // @synthesize playDelegate=_playDelegate;
@property(nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(retain, nonatomic) NSURL *currentlyPlayingSeed; // @synthesize currentlyPlayingSeed=_currentlyPlayingSeed;
@property(retain, nonatomic) SPTRadioHorizontalCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)endDeletionModeWithIndexPath:(id)arg1;
- (void)beginDeletionModeWithIndexPath:(id)arg1;
- (void)beginDeletionMode;
- (void)endDeletionModeWithTap:(id)arg1;
- (void)activateDeletionModeWithLongPress:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)delete:(id)arg1;
- (void)applyThemeLayout;
- (void)playAccessoryButtonTapped:(id)arg1;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)viewWillLayoutSubviews;
- (_Bool)isDeletionModeActiveForCollectionView:(id)arg1 layout:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)addStationToFront:(id)arg1;
- (void)updateStationObject:(id)arg1;
- (id)removeStationAtIndexPath:(id)arg1;
- (void)updatePlaybackStateForVisibleCells;
@property(retain, nonatomic) NSArray *stations;
- (void)viewDidLoad;
- (id)initWithDeletionMode:(_Bool)arg1 imageLoader:(id)arg2 audioTouch:(id)arg3 localSettings:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

