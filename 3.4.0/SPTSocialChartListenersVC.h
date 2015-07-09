//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTableViewController.h"

#import "SPTContextMenuContentViewController.h"
#import "SPTImageLoaderDelegate.h"
#import "SPTSocialChartListenersViewModelDelegate.h"

@class NSString, SPTClientEventLogger, SPTSocialChartListenersViewModel;

@interface SPTSocialChartListenersVC : SPTableViewController <SPTImageLoaderDelegate, SPTSocialChartListenersViewModelDelegate, SPTContextMenuContentViewController>
{
    id <SPTContextMenuContentViewControllerDelegate> contextMenuDelegate;
    SPTSocialChartListenersViewModel *_viewModel;
    id <SPTImageLoader> _imageLoader;
    SPTClientEventLogger *_logger;
}

@property(retain, nonatomic) SPTClientEventLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) SPTSocialChartListenersViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <SPTContextMenuContentViewControllerDelegate> contextMenuDelegate; // @synthesize contextMenuDelegate;
- (void).cxx_destruct;
- (void)listenersViewModel:(id)arg1 offlineModeStateChanged:(_Bool)arg2;
- (void)listenersViewModel:(id)arg1 didFailUpdatingFollowDataWithError:(id)arg2;
- (void)listenersViewModel:(id)arg1 didUpdateFollowDataForListener:(id)arg2 index:(long long)arg3;
- (void)imageLoader:(id)arg1 didFailToLoadImageForURL:(id)arg2 error:(id)arg3 context:(id)arg4;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)followButtonTapped:(id)arg1;
- (void)configureCell:(id)arg1 indexPath:(id)arg2 userData:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1 imageLoader:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
