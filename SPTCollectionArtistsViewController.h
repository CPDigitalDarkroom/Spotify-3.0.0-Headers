//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPContentInsetViewController.h"
#import "SPObjectRepresentation.h"
#import "SPTCollectionArtistsModelDelegate.h"
#import "SPTCollectionFilterBarDelegate.h"
#import "SPTImageLoaderDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MetaViewController, NSString, SPTCollectionArtistsModel, SPTCollectionFilterBar, SPTCollectionToolbarHeaderView, SPTInfoView, SPTProductState, UITableView;

@interface SPTCollectionArtistsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, SPObjectRepresentation, SPTCollectionFilterBarDelegate, SPTImageLoaderDelegate, SPTCollectionArtistsModelDelegate, SPContentInsetViewController>
{
    SPTProductState *_productState;
    BOOL _userDefaultsLoaded;
    BOOL _shouldUseRecentlyPlayedLayout;
    SPTCollectionArtistsModel *_artistsModel;
    UITableView *_tableView;
    SPTInfoView *_infoView;
    id <SPTAudioTouch> _audioTouch;
    int _savedSeparatorStyle;
    SPTCollectionFilterBar *_filterBar;
    id <SPTLocalSettings> _localSettings;
    id <SPTImageLoader> _imageLoader;
    MetaViewController *_metaViewController;
    SPTCollectionToolbarHeaderView *_sectionHeader;
}

@property(retain, nonatomic) SPTCollectionToolbarHeaderView *sectionHeader; // @synthesize sectionHeader=_sectionHeader;
@property(nonatomic) BOOL shouldUseRecentlyPlayedLayout; // @synthesize shouldUseRecentlyPlayedLayout=_shouldUseRecentlyPlayedLayout;
@property(nonatomic) __weak MetaViewController *metaViewController; // @synthesize metaViewController=_metaViewController;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(nonatomic, getter=isUserDefaultsLoaded) BOOL userDefaultsLoaded; // @synthesize userDefaultsLoaded=_userDefaultsLoaded;
@property(retain, nonatomic) SPTCollectionFilterBar *filterBar; // @synthesize filterBar=_filterBar;
@property(nonatomic) int savedSeparatorStyle; // @synthesize savedSeparatorStyle=_savedSeparatorStyle;
@property(retain, nonatomic) id <SPTAudioTouch> audioTouch; // @synthesize audioTouch=_audioTouch;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SPTCollectionArtistsModel *artistsModel; // @synthesize artistsModel=_artistsModel;
- (void).cxx_destruct;
- (id)URI;
- (int)stackedNavigationPageSize;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)loadLocalSettings;
- (void)filterBarContextButtonTapped:(id)arg1;
- (void)filterBar:(id)arg1 textDidChange:(id)arg2;
- (void)navigateToStartPage;
- (void)navigateToBrowse;
- (void)navigateToMusicHub;
- (void)updateInfoView;
- (void)modifyInfoViewForEmptyStaticFilterContext;
- (void)modifyInfoViewForEmptyFilterContext;
- (void)modifyInfoViewForStartPagePromotion;
- (void)modifyInfoViewForNUX;
- (void)setupSectionHeader;
- (unsigned int)offlineSyncStatusForArtistAtIndex:(unsigned int)arg1;
- (id)viewEventURI;
- (id)URL;
- (void)metadataDidUpdate:(id)arg1 forArtistAtIndexPaths:(id)arg2;
- (void)metadataDidUpdate:(id)arg1 forArtistAtIndexPath:(id)arg2;
- (void)artistsModelDidUpdate:(id)arg1;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)doneScrolling;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)sp_updateContentInsets;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithModel:(id)arg1 productState:(id)arg2 audioTouch:(id)arg3 localSettings:(id)arg4 imageLoader:(id)arg5 metaViewController:(id)arg6;

// Remaining properties
@property(nonatomic) BOOL automaticallyAdjustsScrollViewInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

