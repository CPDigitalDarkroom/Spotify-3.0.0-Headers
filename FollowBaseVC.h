//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTableViewController.h"

#import "FollowBaseViewModelDelegate.h"
#import "SPTImageLoaderDelegate.h"

@class FollowBaseViewModel, FollowLogHandler, NSDate, NSString, SPTInfoView, SPTProgressView;

@interface FollowBaseVC : SPTableViewController <SPTImageLoaderDelegate, FollowBaseViewModelDelegate>
{
    id <SPTResolver> _router;
    FollowBaseViewModel *_viewModel;
    SPTProgressView *_loadingHUD;
    SPTInfoView *_infoView;
    FollowLogHandler *_logHandler;
    NSDate *_loadStartDate;
    NSDate *_viewAppearedStartDate;
    id <SPTImageLoader> _imageLoader;
}

@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) NSDate *viewAppearedStartDate; // @synthesize viewAppearedStartDate=_viewAppearedStartDate;
@property(retain, nonatomic) NSDate *loadStartDate; // @synthesize loadStartDate=_loadStartDate;
@property(readonly, nonatomic) FollowLogHandler *logHandler; // @synthesize logHandler=_logHandler;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(readonly, nonatomic) SPTProgressView *loadingHUD; // @synthesize loadingHUD=_loadingHUD;
@property(readonly, nonatomic) FollowBaseViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) id <SPTResolver> router; // @synthesize router=_router;
- (void).cxx_destruct;
- (void)viewWillLayoutSubviews;
- (int)stackedNavigationPageSize;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)followBaseViewModel:(id)arg1 followUpdateDidFailWithError:(id)arg2;
- (void)followBaseViewModel:(id)arg1 didUpdateFollowEntity:(id)arg2 index:(int)arg3;
- (void)followBaseViewModel:(id)arg1 offlineModeChanged:(BOOL)arg2;
- (void)followBaseViewModel:(id)arg1 setLoading:(BOOL)arg2;
- (void)followBaseViewModel:(id)arg1 didFailLoad:(id)arg2;
- (void)followBaseViewModel:(id)arg1 didLoadData:(id)arg2 loadTime:(double)arg3;
- (void)logRenderedDataWithError:(id)arg1;
- (void)throwExceptionIfNotOverriddenInMethodNamed:(id)arg1;
- (void)doRetryRequest:(id)arg1;
- (void)showOrHideInfoView:(BOOL)arg1 animated:(BOOL)arg2;
- (void)showInfoViewWithStyle:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)endLoadingSpinner;
- (void)startLoadingSpinnerIfNeeded;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)applyTheme;
- (void)stopLoading;
- (void)startLoading;
- (void)themeSettingsDidChange;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1 imageLoader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
