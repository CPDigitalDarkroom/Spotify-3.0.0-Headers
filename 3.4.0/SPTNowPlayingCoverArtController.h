//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTNowPlayingCoverArtModelDelegate.h"
#import "SPTNowPlayingCoverArtViewDataSource.h"
#import "SPTNowPlayingCoverArtViewDelegate.h"

@class NSString, SPTNowPlayingCoverArtModel, SPTNowPlayingCoverArtView;

@interface SPTNowPlayingCoverArtController : NSObject <SPTNowPlayingCoverArtModelDelegate, SPTNowPlayingCoverArtViewDataSource, SPTNowPlayingCoverArtViewDelegate>
{
    _Bool _visible;
    _Bool _disableCoverArtAnimation;
    id <SPTNowPlayingCoverArtControllerDelegate> _coverArtControllerDelegate;
    SPTNowPlayingCoverArtModel *_model;
    id <SPTNowPlayingBackgroundBlurDelegate> _delegate;
    SPTNowPlayingCoverArtView *_coverArtView;
}

@property(nonatomic) _Bool disableCoverArtAnimation; // @synthesize disableCoverArtAnimation=_disableCoverArtAnimation;
@property(retain, nonatomic) SPTNowPlayingCoverArtView *coverArtView; // @synthesize coverArtView=_coverArtView;
@property(nonatomic) __weak id <SPTNowPlayingBackgroundBlurDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SPTNowPlayingCoverArtModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <SPTNowPlayingCoverArtControllerDelegate> coverArtControllerDelegate; // @synthesize coverArtControllerDelegate=_coverArtControllerDelegate;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
- (void).cxx_destruct;
- (void)coverArtModelDidChangeLoadingState:(id)arg1;
- (void)coverArtModel:(id)arg1 requestsAnimation:(unsigned long long)arg2;
- (_Bool)nowPlayingCoverArtViewIsLoading:(id)arg1;
- (_Bool)nowPlayingCoverArtViewIsInSyncWithPlayer:(id)arg1;
- (_Bool)nowPlayingCoverArtView:(id)arg1 hasVideoAtRelativePage:(long long)arg2;
- (id)nowPlayingCoverArtView:(id)arg1 URLForImageAtRelativePage:(long long)arg2;
- (void)nowPlayingCoverArtViewDidChangeCoverArtForAllPages:(id)arg1 currentRelativePage:(long long)arg2;
- (_Bool)nowPlayingCoverArtView:(id)arg1 canShowRelativePage:(long long)arg2;
- (_Bool)nowPlayingCoverArtView:(id)arg1 canScrollToRelativePage:(long long)arg2;
- (void)nowPlayingCoverArtView:(id)arg1 didScrollToRelativePage:(long long)arg2 interactively:(_Bool)arg3 dragging:(_Bool)arg4;
- (void)nowPlayingCoverArtView:(id)arg1 willScrollToRelativePage:(long long)arg2 fromRelativePage:(long long)arg3 interactively:(_Bool)arg4 dragging:(_Bool)arg5;
- (void)nowPlayingCoverArtView:(id)arg1 didAttemptScrollToRelativePage:(long long)arg2;
- (void)nowPlayingCoverArtView:(id)arg1 didScrollToRelativePagePosition:(double)arg2;
- (void)reloadBlurCoverartsWithCenter:(long long)arg1;
- (id)coverArtOrPlaceholderForRelativePage:(long long)arg1;
- (id)coverArtURLForRelativePage:(long long)arg1;
- (id)presentationArtImage;
- (id)presentationArtImageView;
- (void)coverArtViewTapped:(id)arg1;
- (void)updateBlurConstituentForRelativePage:(long long)arg1 toImage:(id)arg2 withURL:(id)arg3;
- (id)initWithModel:(id)arg1 delegate:(id)arg2 coverArtView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

