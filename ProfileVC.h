//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProfileBaseVC.h"

#import "ProfileCountsViewDelegate.h"
#import "ProfileHeaderViewDelegate.h"
#import "ProfileViewModelDelegate.h"
#import "SPObjectRepresentation.h"
#import "SPTEntityTableHeaderViewNavigationBarProvider.h"
#import "SPTImageLoaderDelegate.h"
#import "SPTNavigationControllerNavigationBarState.h"
#import "SPViewController.h"
#import "UITableViewDelegate.h"

@class NSString, ProfileBodyContainerView, ProfileCountsView, ProfileDataSource, ProfileViewModel, SPTInfoView, UIView;

@interface ProfileVC : ProfileBaseVC <ProfileViewModelDelegate, ProfileHeaderViewDelegate, ProfileCountsViewDelegate, SPObjectRepresentation, SPViewController, SPTEntityTableHeaderViewNavigationBarProvider, UITableViewDelegate, SPTImageLoaderDelegate, SPTNavigationControllerNavigationBarState>
{
    BOOL _hasSetupContentOffset;
    BOOL _viewHasAppeared;
    ProfileDataSource *_dataSource;
    UIView *_headerView;
    ProfileBodyContainerView *_profileBodyContainerView;
    ProfileCountsView *_countsView;
    SPTInfoView *_emptyContentView;
    id <SPTImageLoader> _imageLoader;
    id <SPTImageLoaderFactory> _imageLoaderFactory;
}

@property(nonatomic) BOOL viewHasAppeared; // @synthesize viewHasAppeared=_viewHasAppeared;
@property(nonatomic) BOOL hasSetupContentOffset; // @synthesize hasSetupContentOffset=_hasSetupContentOffset;
@property(retain, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) SPTInfoView *emptyContentView; // @synthesize emptyContentView=_emptyContentView;
@property(retain, nonatomic) ProfileCountsView *countsView; // @synthesize countsView=_countsView;
@property(retain, nonatomic) ProfileBodyContainerView *profileBodyContainerView; // @synthesize profileBodyContainerView=_profileBodyContainerView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) ProfileDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (int)getCountsFromUserDefaluts;
- (void)setCountInUserDefaults:(int)arg1;
- (BOOL)hasMoreInvitesThanPreviously:(int)arg1;
- (void)setInvitesBadgeCount:(int)arg1;
- (void)resetInvitesBadgeCount;
- (void)viewModel:(id)arg1 updateInviteCountDidFailWithError:(id)arg2;
- (void)viewModel:(id)arg1 didUpdateInviteCount:(id)arg2;
- (void)startFetchingInvitesCount;
- (id)objectRepresentation;
- (BOOL)restoreWithObjectRepresentation:(id)arg1;
- (id)URI;
- (void)updateCellPlayStates;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)imageLoader:(id)arg1 didFailToLoadImageForURL:(id)arg2 error:(id)arg3 context:(id)arg4;
- (id)provideNavigationBarForHeaderView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didTapFollowButton:(id)arg1;
- (void)didTapHeaderCountsButtonWithType:(unsigned int)arg1;
- (void)didTapHeaderButtonWithType:(unsigned int)arg1;
- (void)viewModel:(id)arg1 playerStateDidChange:(id)arg2;
- (void)viewModel:(id)arg1 followUpdateDidFailWithError:(id)arg2;
- (void)viewModel:(id)arg1 didUpdateFollowData:(id)arg2;
- (BOOL)shouldShowInvitationCodes;
- (void)viewModel:(id)arg1 didLoadData:(id)arg2 forRequestKey:(id)arg3;
- (void)toggleViewVisibility:(BOOL)arg1;
- (void)redirectToArtistViewController;
- (BOOL)shouldRedirectToArtistViewController;
- (void)viewModel:(id)arg1 offlineModeChanged:(BOOL)arg2;
- (void)viewModel:(id)arg1 setLoading:(BOOL)arg2;
- (void)viewModel:(id)arg1 didFailAllRequestsWithError:(id)arg2;
- (void)viewModelDidFinishAllRequests:(id)arg1;
- (unsigned int)preferredNavigationBarState;
- (void)sp_updateBottomContentInset:(float)arg1;
- (BOOL)automaticallyAdjustsScrollViewInsets;
- (void)navigateToFollowSuggestionsButtonTapped;
- (void)followButtonTapped;
- (void)browseButtonTapped;
- (void)showEmptyContentView:(BOOL)arg1 animated:(BOOL)arg2;
- (void)applyTheme;
- (void)setupFollowSuggestionsButton;
- (void)updateHeaderView;
- (void)setupHeaderView;
- (void)setupTableView;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1 viewLogger:(id)arg2 logger:(id)arg3 style:(int)arg4 feature:(id)arg5 share:(id)arg6 followFeature:(id)arg7 metaViewController:(id)arg8 imageLoaderFactory:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) ProfileViewModel *viewModel;

@end
