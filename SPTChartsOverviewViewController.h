//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTableViewController.h"

#import "SPObjectRepresentation.h"
#import "SPTChartBlocksViewModelDelegate.h"
#import "SPTImageLoaderDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, NSURL, SPTChartBlocksViewModel, SPTCollectionView;

@interface SPTChartsOverviewViewController : SPTableViewController <UITableViewDataSource, UITableViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, SPTImageLoaderDelegate, SPTChartBlocksViewModelDelegate, SPObjectRepresentation>
{
    NSURL *_URL;
    SPTChartBlocksViewModel *_viewModel;
    SPTCollectionView *_featuredChartsCollectionView;
    SPTCollectionView *_genreChartsCollectionView;
    SPTCollectionView *_countryChartsCollectionView;
    SPTCollectionView *_viralChartsCollectionView;
    id <SPTImageLoader> _imageLoader;
}

@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) SPTCollectionView *viralChartsCollectionView; // @synthesize viralChartsCollectionView=_viralChartsCollectionView;
@property(retain, nonatomic) SPTCollectionView *countryChartsCollectionView; // @synthesize countryChartsCollectionView=_countryChartsCollectionView;
@property(retain, nonatomic) SPTCollectionView *genreChartsCollectionView; // @synthesize genreChartsCollectionView=_genreChartsCollectionView;
@property(retain, nonatomic) SPTCollectionView *featuredChartsCollectionView; // @synthesize featuredChartsCollectionView=_featuredChartsCollectionView;
@property(retain, nonatomic) SPTChartBlocksViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (void)chartBlocksViewModel:(id)arg1 didUpdateWithError:(id)arg2;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (BOOL)automaticallyAdjustsScrollViewInsets;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)setupViralChartsCollectionView;
- (void)setupCountryChartsCollectionView;
- (void)setupGenreChartsCollectionView;
- (void)setupFeaturedChartsCollectionView;
- (void)setupTableView;
- (int)style;
- (void)viewDidLoad;
- (id)initWithURL:(id)arg1 viewModel:(id)arg2 imageLoader:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

