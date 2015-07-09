//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPPageView.h"

#import "PlayerTrackScrollPageView.h"
#import "SPTThemableView.h"
#import "SPTVideoSurfaceDelegate.h"

@class NSLayoutConstraint, NSString, NSURL, SPTLayoutConstraintBuilder, UICollectionView, UIView<SPTVideoSurface>;

@interface SPTNowPlayingBarPageView : SPPageView <SPTVideoSurfaceDelegate, PlayerTrackScrollPageView, SPTThemableView>
{
    _Bool _coverArtHidden;
    NSURL *trackURL;
    NSString *trackTitle;
    NSString *artistTitle;
    NSURL *imageURL;
    id <SPTThemableViewLayoutDelegate> layoutDelegate;
    UIView<SPTVideoSurface> *_videoSurface;
    SPTLayoutConstraintBuilder *_layout;
    UICollectionView *_collectionView;
    NSLayoutConstraint *_videoSurfaceWidthLayout;
    struct CGRect _coverArtAreaBounds;
}

@property(retain, nonatomic) NSLayoutConstraint *videoSurfaceWidthLayout; // @synthesize videoSurfaceWidthLayout=_videoSurfaceWidthLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) SPTLayoutConstraintBuilder *layout; // @synthesize layout=_layout;
@property(readonly, nonatomic) UIView<SPTVideoSurface> *videoSurface; // @synthesize videoSurface=_videoSurface;
@property(readonly, nonatomic) struct CGRect coverArtAreaBounds; // @synthesize coverArtAreaBounds=_coverArtAreaBounds;
@property(nonatomic, getter=isCoverArtHidden) _Bool coverArtHidden; // @synthesize coverArtHidden=_coverArtHidden;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL;
@property(copy, nonatomic) NSString *artistTitle; // @synthesize artistTitle;
@property(copy, nonatomic) NSString *trackTitle; // @synthesize trackTitle;
@property(retain, nonatomic) NSURL *trackURL; // @synthesize trackURL;
- (void).cxx_destruct;
- (void)videoSurfaceDidChangeVideoRect:(id)arg1;
- (void)videoSurfaceDidDetachVideo:(id)arg1;
- (void)videoSurfaceDidAttachVideo:(id)arg1;
- (void)updateConstraints;
- (void)addViews;
- (void)applyThemeLayout;
- (id)initWithFrame:(struct CGRect)arg1 reuseIdentifier:(id)arg2 videoSurface:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
