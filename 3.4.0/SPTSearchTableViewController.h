//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTSearchViewController.h"

#import "SPContentInsetViewController.h"
#import "SPTSearchHistoryViewControllerDelegate.h"
#import "SPTSearchPlayerDelegate.h"
#import "SPTTableViewContinuousSwipeDelegate.h"
#import "SearchViewModelDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIPopoverControllerDelegate.h"
#import "UISearchBarDelegate.h"
#import "UITableViewDelegate.h"

@class MetaViewController, NSString, SPTInfoView, SPTPopoverController, SPTSearchBar, SPTSearchHeaderView, SPTSearchHistoryViewController, SPTTableView, UIActivityIndicatorView;

@interface SPTSearchTableViewController : SPTSearchViewController <UISearchBarDelegate, UIGestureRecognizerDelegate, SPContentInsetViewController, SPTSearchHistoryViewControllerDelegate, UIPopoverControllerDelegate, UITableViewDelegate, SearchViewModelDelegate, SPTSearchPlayerDelegate, SPTTableViewContinuousSwipeDelegate>
{
    _Bool _searchBarAsNavigationItemTitle;
    _Bool _presentedInPopover;
    _Bool _searchHistoryVisible;
    _Bool _isPresentingContextMenu;
    SPTTableView *_tableView;
    id <SPContextMenuFeature> _contextMenu;
    id <SPTPodcastContextMenuProvider> _episodeContextMenuProvider;
    SPTSearchBar *_searchBar;
    UIActivityIndicatorView *_loadingView;
    SPTInfoView *_infoView;
    SPTSearchHistoryViewController *_searchHistoryViewController;
    MetaViewController *_metaViewController;
    SPTSearchHeaderView *_headerView;
    id <SPTContextMenuViewControllerFactory> _contextMenuViewControllerFactory;
    SPTPopoverController *_contextMenuPopoverController;
    id _playerObservation;
    double _keyboardHeight;
    double _externalBottomContentInset;
}

@property(nonatomic) _Bool isPresentingContextMenu; // @synthesize isPresentingContextMenu=_isPresentingContextMenu;
@property(nonatomic) double externalBottomContentInset; // @synthesize externalBottomContentInset=_externalBottomContentInset;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) id playerObservation; // @synthesize playerObservation=_playerObservation;
@property(retain, nonatomic) SPTPopoverController *contextMenuPopoverController; // @synthesize contextMenuPopoverController=_contextMenuPopoverController;
@property(retain, nonatomic) id <SPTContextMenuViewControllerFactory> contextMenuViewControllerFactory; // @synthesize contextMenuViewControllerFactory=_contextMenuViewControllerFactory;
@property(retain, nonatomic) SPTSearchHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak MetaViewController *metaViewController; // @synthesize metaViewController=_metaViewController;
@property(nonatomic, getter=isSearchHistoryVisible) _Bool searchHistoryVisible; // @synthesize searchHistoryVisible=_searchHistoryVisible;
@property(retain, nonatomic) SPTSearchHistoryViewController *searchHistoryViewController; // @synthesize searchHistoryViewController=_searchHistoryViewController;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) SPTSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) id <SPTPodcastContextMenuProvider> episodeContextMenuProvider; // @synthesize episodeContextMenuProvider=_episodeContextMenuProvider;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenu; // @synthesize contextMenu=_contextMenu;
@property(nonatomic, getter=isPresentedInPopover) _Bool presentedInPopover; // @synthesize presentedInPopover=_presentedInPopover;
@property(nonatomic) _Bool searchBarAsNavigationItemTitle; // @synthesize searchBarAsNavigationItemTitle=_searchBarAsNavigationItemTitle;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (_Bool)continuousSwipeEnabledForTableView:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)presentContextMenuPopoverForRowAtIndexPath:(id)arg1;
- (void)sp_updateBottomContentInset:(double)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)searchHistoryViewControllerDidClearHistory:(id)arg1;
- (void)searchHistoryViewController:(id)arg1 didSelectSavedSearchString:(id)arg2;
- (void)searchHistoryViewControllerDidStartScrolling:(id)arg1;
- (_Bool)searchHistoryViewControllerShouldUseMomentsAdaptedTexts:(id)arg1;
- (_Bool)searchHistoryViewControllerShouldDisplayHeaderView:(id)arg1;
- (void)searchPlayer:(id)arg1 didChangeURL:(id)arg2 isPlaying:(_Bool)arg3;
- (void)searchViewModel:(id)arg1 contextMenuButtonTappedInCellAtIndexPath:(id)arg2;
- (id)searchViewModel:(id)arg1 indexPathForCell:(id)arg2;
- (void)searchViewModel:(id)arg1 didUpdateWithError:(id)arg2;
- (id)provideCurrentCatalogForSearchViewModel:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)goOnlineButtonTapped;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchStringDidChange:(id)arg1 fromSearchHistory:(_Bool)arg2;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (int)stackedNavigationPageSize;
- (void)viewDidBecomeInactiveInStackedNavigation;
- (void)viewDidBecomeActiveInStackedNavigation;
- (void)performSearchWithString:(id)arg1 delayed:(_Bool)arg2;
- (void)updateViewWithError:(id)arg1 scrollResultsViewToTop:(_Bool)arg2;
- (id)searchResultsView;
- (void)hideSearchLoadingView;
- (void)showSearchLoadingView;
- (void)showSearchLoadingViewAfterDelay:(_Bool)arg1;
- (double)viewContentBottomInset;
- (double)viewContentTopInset;
- (void)hideTableViews;
- (void)updateTableViewContentInsets;
- (void)showSearchResultsAndScrollTableViewToTop:(_Bool)arg1;
- (_Bool)shouldShowSearchResults;
- (void)infoViewGoToLocalFilesButtonTapped;
- (void)infoViewErrorButtonTapped;
- (void)configureInfoView:(id)arg1 forSearchInfoType:(unsigned long long)arg2;
- (void)showInfoViewOfSearchInfoType:(unsigned long long)arg1;
- (void)hideInfoView;
- (void)layoutOverlayViewsAnimated:(_Bool)arg1 duration:(double)arg2 curve:(long long)arg3;
- (void)saveSearchStringToHistory;
- (_Bool)shouldLoadNextDatasetWhenScrolling;
- (void)createSearchBarIfNeeded;
- (id)createGoOnlineButton;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)applyThemeLayout;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)tableHeaderOrFooterTapped;
- (void)tableViewLongPressed:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1 searchHistory:(id)arg2 player:(id)arg3 audioTouch:(id)arg4 productState:(id)arg5 session:(id)arg6 metaViewController:(id)arg7 contextMenu:(id)arg8 episodeContextMenuProvider:(id)arg9 imageLoader:(id)arg10;

// Remaining properties
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

