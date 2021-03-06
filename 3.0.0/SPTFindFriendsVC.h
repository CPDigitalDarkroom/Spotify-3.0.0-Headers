//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPContentInsetViewController.h"
#import "SPObjectRepresentation.h"
#import "SPTFindFriendsFeaturedProfilesViewModelDelegate.h"
#import "SPTFindFriendsViewModelDelegate.h"
#import "SPTImageLoaderDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UISearchBarDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CALayer, NSString, NSTimer, SPTActionButton, SPTClientEventLogger, SPTFindFriendsFeaturedProfilesViewModel, SPTFindFriendsViewModel, SPTInfoView, SPTProgressView, SPTSearchBar, SPTTabControl, SPTTableView, UIBarButtonItem, UILabel, UIView;

@interface SPTFindFriendsVC : UIViewController <SPTFindFriendsViewModelDelegate, SPTFindFriendsFeaturedProfilesViewModelDelegate, UIAlertViewDelegate, UITableViewDataSource, UITableViewDelegate, SPTImageLoaderDelegate, SPContentInsetViewController, UISearchBarDelegate, SPObjectRepresentation>
{
    BOOL _isSearchActive;
    BOOL _isSearchButtonEvent;
    SPTFindFriendsViewModel *_viewModel;
    SPTFindFriendsFeaturedProfilesViewModel *_featuredProfilesViewModel;
    id <SPTImageLoader> _imageLoader;
    SPTClientEventLogger *_clientEventLogger;
    UIBarButtonItem *_doneBarButtonItem;
    SPTTabControl *_tabControl;
    SPTTableView *_tableView;
    UIView *_networksSectionFooterView;
    UILabel *_networksDisclaimerLabel;
    UIView *_friendsSectionHeaderView;
    SPTActionButton *_friendsFollowAllButton;
    SPTSearchBar *_friendsSearchBar;
    CALayer *_friendsSearchBarBottomBorder;
    SPTInfoView *_infoView;
    SPTProgressView *_progressView;
    NSTimer *_searchTimer;
}

@property(retain, nonatomic) NSTimer *searchTimer; // @synthesize searchTimer=_searchTimer;
@property(nonatomic) BOOL isSearchButtonEvent; // @synthesize isSearchButtonEvent=_isSearchButtonEvent;
@property(nonatomic) BOOL isSearchActive; // @synthesize isSearchActive=_isSearchActive;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) CALayer *friendsSearchBarBottomBorder; // @synthesize friendsSearchBarBottomBorder=_friendsSearchBarBottomBorder;
@property(retain, nonatomic) SPTSearchBar *friendsSearchBar; // @synthesize friendsSearchBar=_friendsSearchBar;
@property(retain, nonatomic) SPTActionButton *friendsFollowAllButton; // @synthesize friendsFollowAllButton=_friendsFollowAllButton;
@property(retain, nonatomic) UIView *friendsSectionHeaderView; // @synthesize friendsSectionHeaderView=_friendsSectionHeaderView;
@property(retain, nonatomic) UILabel *networksDisclaimerLabel; // @synthesize networksDisclaimerLabel=_networksDisclaimerLabel;
@property(retain, nonatomic) UIView *networksSectionFooterView; // @synthesize networksSectionFooterView=_networksSectionFooterView;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SPTTabControl *tabControl; // @synthesize tabControl=_tabControl;
@property(retain, nonatomic) UIBarButtonItem *doneBarButtonItem; // @synthesize doneBarButtonItem=_doneBarButtonItem;
@property(retain, nonatomic) SPTClientEventLogger *clientEventLogger; // @synthesize clientEventLogger=_clientEventLogger;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) SPTFindFriendsFeaturedProfilesViewModel *featuredProfilesViewModel; // @synthesize featuredProfilesViewModel=_featuredProfilesViewModel;
@property(retain, nonatomic) SPTFindFriendsViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)URI;
- (BOOL)searchBarShouldEndEditing:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)performSearch:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)sp_updateContentInsets;
- (void)imageLoader:(id)arg1 didFailToLoadImageForURL:(id)arg2 error:(id)arg3 context:(id)arg4;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (BOOL)shouldShowNetworksFooterForSection:(int)arg1;
- (void)configureProfileCell:(id)arg1 indexPath:(id)arg2 data:(id)arg3;
- (void)configureNetworkCell:(id)arg1 indexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)findFriendsFeaturedProfilesViewModel:(id)arg1 isOffline:(BOOL)arg2;
- (void)findFriendsFeaturedProfilesViewModel:(id)arg1 didUpdateFollowStateForUserAtIndex:(unsigned int)arg2;
- (void)findFriendsFeaturedProfilesViewModel:(id)arg1 hasLoadedFeaturedProfilesWithSuccess:(BOOL)arg2 error:(id)arg3;
- (void)findFriendsViewModel:(id)arg1 didFailToUpdateFollowStateWithError:(id)arg2;
- (void)findFriendsViewModel:(id)arg1 didUpdateFollowStateForUserAtIndex:(unsigned int)arg2;
- (void)findFriendsViewModel:(id)arg1 isOffline:(BOOL)arg2;
- (void)findFriendsViewModel:(id)arg1 isLoading:(BOOL)arg2;
- (void)findFriendsViewModel:(id)arg1 didFindMatches:(BOOL)arg2;
- (void)findFriendsViewModel:(id)arg1 hasLoadedFriendsWithSuccess:(BOOL)arg2 error:(id)arg3;
- (void)findFriendsViewModel:(id)arg1 hasDisconnectedFromNetworkType:(int)arg2;
- (void)findFriendsViewModel:(id)arg1 hasConnectedToNetworkType:(int)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)logFeaturedTabImpression;
- (void)logFriendsTabImpression;
- (void)followAllButtonTapped;
- (void)followButtonTapped:(id)arg1;
- (void)networkConnectButtonTapped:(id)arg1;
- (void)tabControlValueChanged:(id)arg1;
- (void)doneButtonTapped;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)configureViewForFilteringMode:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateFriendsCount:(unsigned int)arg1;
- (void)showInfoView:(BOOL)arg1;
- (void)showOfflineView:(BOOL)arg1;
- (void)changeVisibilityOfFriendsTableHeaderView;
- (void)applyViewLayoutWithSize:(struct CGSize)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setupFriendsSectionHeaderView;
- (void)setupNetworkSectionFooterView;
- (void)setupTableView;
- (void)setupTabControl;
- (void)setupNavigationBar;
- (void)setupInfoView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1 featuredProfilesViewModel:(id)arg2 imageLoader:(id)arg3 clientEventLogger:(id)arg4;

// Remaining properties
@property(nonatomic) BOOL automaticallyAdjustsScrollViewInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

