//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTContentPreviewDataSource.h"
#import "SPTTouchTutorialTrackActionViewModelDelegate.h"
#import "SPTTouchViewEngineObserver.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CAGradientLayer, NSString, SPTProgressView, SPTTableView, SPTTouchTutorialTouchView, SPTTouchTutorialTrackActionViewModel;

@interface SPTTouchTutorialTrackPreviewViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, SPTTouchTutorialTrackActionViewModelDelegate, SPTTouchViewEngineObserver, SPTContentPreviewDataSource>
{
    id <SPTContentPreview> _contentPreviewDelegate;
    id <SPTAudioTouch> _audioTouch;
    SPTTouchTutorialTrackActionViewModel *_viewModel;
    CAGradientLayer *_topGradientLayer;
    CAGradientLayer *_bottomGradientLayer;
    SPTTableView *_tableView;
    SPTProgressView *_progressView;
    SPTTouchTutorialTouchView *_pulsatingTouchView;
}

@property(retain, nonatomic) SPTTouchTutorialTouchView *pulsatingTouchView; // @synthesize pulsatingTouchView=_pulsatingTouchView;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) CAGradientLayer *bottomGradientLayer; // @synthesize bottomGradientLayer=_bottomGradientLayer;
@property(retain, nonatomic) CAGradientLayer *topGradientLayer; // @synthesize topGradientLayer=_topGradientLayer;
@property(readonly, nonatomic) SPTTouchTutorialTrackActionViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) id <SPTAudioTouch> audioTouch; // @synthesize audioTouch=_audioTouch;
@property(nonatomic) __weak id <SPTContentPreview> contentPreviewDelegate; // @synthesize contentPreviewDelegate=_contentPreviewDelegate;
- (void).cxx_destruct;
- (void)viewEngineDidEndInteraction:(id)arg1;
- (void)viewEngineDidBeginInteraction:(id)arg1;
- (void)viewModelDidChange:(id)arg1;
- (void)viewModelDidFinishLoading:(id)arg1;
- (void)viewModelWillStartLoading:(id)arg1;
- (id)descriptionTextForContentPreviewController:(id)arg1;
- (void)tableViewCellContextMenuButtonTapped:(id)arg1;
- (id)accessoryViewForIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)presentPulsatingTouchViewIfRequired;
- (void)viewWillLayoutSubviews;
- (void)addGradients;
- (void)setupSubviews;
- (struct CGSize)preferredContentSize;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithAudioTouch:(id)arg1 viewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

