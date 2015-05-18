//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "SPContentInsetViewController.h"
#import "SPTImageLoaderDelegate.h"
#import "SPTSingleRequestViewModelDelegate.h"
#import "SPViewController.h"
#import "UISearchDisplayDelegate.h"

@class NSArray, NSString, NSURL, SPTArtistAlbumsViewModel, SPTClientEventLogger, SPTInfoView, SPTProgressView, UISearchDisplayController;

@interface SPTArtistAlbumViewController : UITableViewController <SPTSingleRequestViewModelDelegate, SPContentInsetViewController, UISearchDisplayDelegate, SPTImageLoaderDelegate, SPViewController>
{
    NSURL *_viewURL;
    SPTArtistAlbumsViewModel *_viewModel;
    id <SPTAlbumsViewModelData> _viewData;
    SPTClientEventLogger *_clientEventLogger;
    UISearchDisplayController *_searchController;
    NSArray *_filteredAlbums;
    SPTProgressView *_progressView;
    SPTInfoView *_infoView;
    id <SPTImageLoader> _imageLoader;
    id <SPTAudioTouch> _audioTouch;
}

@property(retain, nonatomic) id <SPTAudioTouch> audioTouch; // @synthesize audioTouch=_audioTouch;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) NSArray *filteredAlbums; // @synthesize filteredAlbums=_filteredAlbums;
@property(retain, nonatomic) UISearchDisplayController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) SPTClientEventLogger *clientEventLogger; // @synthesize clientEventLogger=_clientEventLogger;
@property(retain, nonatomic) id <SPTAlbumsViewModelData> viewData; // @synthesize viewData=_viewData;
@property(retain, nonatomic) SPTArtistAlbumsViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSURL *viewURL; // @synthesize viewURL=_viewURL;
- (void).cxx_destruct;
- (int)stackedNavigationPageSize;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2;
- (id)albumsFilteredWithString:(id)arg1;
- (void)sp_updateContentInsets;
- (id)URI;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewModel:(id)arg1 setLoading:(BOOL)arg2;
- (void)viewModel:(id)arg1 didFailLoad:(id)arg2;
- (void)viewModel:(id)arg1 didLoadData:(id)arg2 loadTime:(double)arg3;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)titleForType:(unsigned int)arg1;
- (id)initWithURL:(id)arg1 type:(unsigned int)arg2 viewModel:(id)arg3 imageLoader:(id)arg4 audioTouch:(id)arg5 clientEventLogger:(id)arg6;

// Remaining properties
@property(nonatomic) BOOL automaticallyAdjustsScrollViewInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

