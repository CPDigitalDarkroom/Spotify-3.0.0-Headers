//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPContentInsetViewController.h"
#import "SPTImageLoaderDelegate.h"
#import "SPTPartyGenreTabControlDelegate.h"
#import "SPTPartySegmentedTunerViewDelegate.h"
#import "SPTPartyViewModelDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, SPTPartyGenreTabControl, SPTPartySegmentedTunerView, SPTPartyViewModel, UILabel, UITableView;

@interface SPTPartyVC : UIViewController <SPTPartyViewModelDelegate, SPTPartyGenreTabControlDelegate, SPTPartySegmentedTunerViewDelegate, UIActionSheetDelegate, UITableViewDelegate, UITableViewDataSource, SPContentInsetViewController, SPTImageLoaderDelegate>
{
    SPTPartyViewModel *_viewModel;
    id <SPTImageLoader> _imageLoader;
    SPTPartyGenreTabControl *_tabControl;
    SPTPartySegmentedTunerView *_tunerView;
    UILabel *_genreStateLabel;
    UILabel *_tunerStateLabel;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UILabel *tunerStateLabel; // @synthesize tunerStateLabel=_tunerStateLabel;
@property(retain, nonatomic) UILabel *genreStateLabel; // @synthesize genreStateLabel=_genreStateLabel;
@property(retain, nonatomic) SPTPartySegmentedTunerView *tunerView; // @synthesize tunerView=_tunerView;
@property(retain, nonatomic) SPTPartyGenreTabControl *tabControl; // @synthesize tabControl=_tabControl;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) SPTPartyViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)viewModel:(id)arg1 productStateDidChange:(id)arg2 newValues:(id)arg3;
- (void)viewModel:(id)arg1 playerStateDidChange:(id)arg2;
- (void)viewModel:(id)arg1 tracksDidFailToLoadWithError:(id)arg2;
- (void)viewModel:(id)arg1 tracksDidLoad:(id)arg2;
- (void)viewModel:(id)arg1 currentEnergyLevelDidChange:(int)arg2;
- (void)viewModel:(id)arg1 currentSubGenreDidChange:(id)arg2 currentParentGenre:(id)arg3;
- (void)viewModel:(id)arg1 genresDidFailToLoadWithError:(id)arg2;
- (void)viewModel:(id)arg1 genreTreeDidLoad:(id)arg2 needsUpdateInUI:(BOOL)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)tunerView:(id)arg1 selectedIndexChanged:(int)arg2;
- (void)tabControl:(id)arg1 shouldShowSubgenresForIndex:(unsigned int)arg2;
- (void)tabControl:(id)arg1 selectedIndexChanged:(unsigned int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)sp_updateContentInsets;
- (void)refreshShuffleMode;
- (id)playerTrackForIndexPath:(id)arg1;
- (void)reloadAnimated:(BOOL)arg1;
- (void)loadImagesForCell:(id)arg1 track:(id)arg2 indexPath:(id)arg3;
- (void)applyThemeLayout;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1 imageLoader:(id)arg2;

// Remaining properties
@property(nonatomic) BOOL automaticallyAdjustsScrollViewInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

