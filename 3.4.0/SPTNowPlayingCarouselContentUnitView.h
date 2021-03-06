//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SPTNowPlayingCoverArtView, SPTTheme;

@interface SPTNowPlayingCarouselContentUnitView : UIView
{
    _Bool _constraintsAdded;
    SPTNowPlayingCoverArtView *_coverArtView;
    SPTTheme *_theme;
}

@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) _Bool constraintsAdded; // @synthesize constraintsAdded=_constraintsAdded;
@property(retain, nonatomic) SPTNowPlayingCoverArtView *coverArtView; // @synthesize coverArtView=_coverArtView;
- (void).cxx_destruct;
- (void)addFixedConstraints;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithTheme:(id)arg1 imageLoaderFactory:(id)arg2 videoSurfaceManager:(id)arg3 nowPlayingVideoManager:(id)arg4 logCenter:(id)arg5;

@end

