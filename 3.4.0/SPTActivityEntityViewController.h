//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTBaseViewModelDelegate.h"
#import "SPTImageLoaderDelegate.h"
#import "SPViewController.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, SPTActivityEntityViewModel, SPTClientEventLogger, SPTInfoView, SPTProgressView, SPTViewLogger, UITableView;

@interface SPTActivityEntityViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, SPTImageLoaderDelegate, SPTBaseViewModelDelegate, SPViewController>
{
    id <SPTActivityEntityViewControllerDelegate> _delegate;
    SPTActivityEntityViewModel *_viewModel;
    SPTClientEventLogger *_logger;
    SPTViewLogger *_viewLogger;
    UITableView *_reactionsTableView;
    SPTProgressView *_progressView;
    SPTInfoView *_infoView;
    id <SPTImageLoader> _imageLoader;
}

@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UITableView *reactionsTableView; // @synthesize reactionsTableView=_reactionsTableView;
@property(retain, nonatomic) SPTViewLogger *viewLogger; // @synthesize viewLogger=_viewLogger;
@property(retain, nonatomic) SPTClientEventLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTActivityEntityViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <SPTActivityEntityViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (int)stackedNavigationPageSize;
- (void)viewModel:(id)arg1 setLoading:(_Bool)arg2;
- (void)viewModel:(id)arg1 didFailAllRequestsWithError:(id)arg2;
- (void)viewModelDidFinishAllRequests:(id)arg1;
- (void)doRetry;
- (void)showOrHideInfoView:(_Bool)arg1 animated:(_Bool)arg2;
- (void)hideInfoViewAnimated:(_Bool)arg1;
- (void)showInfoViewWithType:(unsigned long long)arg1 animated:(_Bool)arg2;
- (id)userForIndexPath:(id)arg1;
- (void)sp_updateBottomContentInset:(double)arg1;
- (id)URI;
- (id)viewEventURI;
- (id)viewTitle;
- (void)handleImageLoaderDelegateMethodWithImage:(id)arg1 url:(id)arg2 context:(id)arg3;
- (void)imageLoader:(id)arg1 didFailToLoadImageForURL:(id)arg2 error:(id)arg3 context:(id)arg4;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)configureUserCell:(id)arg1 atIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1 logger:(id)arg2 viewLogger:(id)arg3 imageLoader:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

