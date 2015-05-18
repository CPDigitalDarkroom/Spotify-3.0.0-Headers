//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPStepScrollViewDataSource.h"
#import "SPStepScrollViewDelegate.h"

@class NSMutableArray, NSString, NSURL, SPStepScrollView, SPTNowPlayingBarModel;

@interface PlayerTrackScrollDataSource : NSObject <SPStepScrollViewDataSource, SPStepScrollViewDelegate>
{
    SPStepScrollView *_scrollView;
    id <PlayerTrackScrollDataSourceDelegate> _delegate;
    id <PlayerTrackScrollViewOffsetDelegate> _offsetDelegate;
    NSURL *_currentTrack;
    NSURL *_currentContext;
    SPTNowPlayingBarModel *_nowPlayingModel;
    NSString *_source;
    NSMutableArray *_observations;
    id <SPTUpsellPopupManager> _upsellPopupManager;
}

@property(nonatomic) __weak id <SPTUpsellPopupManager> upsellPopupManager; // @synthesize upsellPopupManager=_upsellPopupManager;
@property(retain, nonatomic) NSMutableArray *observations; // @synthesize observations=_observations;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) SPTNowPlayingBarModel *nowPlayingModel; // @synthesize nowPlayingModel=_nowPlayingModel;
@property(retain, nonatomic) NSURL *currentContext; // @synthesize currentContext=_currentContext;
@property(retain, nonatomic) NSURL *currentTrack; // @synthesize currentTrack=_currentTrack;
@property(nonatomic) __weak id <PlayerTrackScrollViewOffsetDelegate> offsetDelegate; // @synthesize offsetDelegate=_offsetDelegate;
@property(nonatomic) __weak id <PlayerTrackScrollDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SPStepScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)stepScrollViewDidScroll:(id)arg1;
- (void)stepScrollView:(id)arg1 didAttemptScrollToRelativeIndex:(int)arg2;
- (void)stepScrollView:(id)arg1 didScrollToRelativeIndex:(int)arg2;
- (id)stepScrollView:(id)arg1 pageViewAtRelativeIndex:(int)arg2;
- (int)stepScrollView:(id)arg1 numberOfStepsInDirection:(int)arg2;
- (void)currentTrackChanged:(id)arg1;
- (void)contextTracksChanged;
- (void)hibernate;
- (void)awken;
- (id)initWithStepScrollView:(id)arg1 nowPlayingModel:(id)arg2 upsellPopupManager:(id)arg3 source:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
