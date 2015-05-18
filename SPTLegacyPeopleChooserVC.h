//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPViewController.h"

#import "SPSocialLookupDelegate.h"
#import "SPTImageLoaderDelegate.h"
#import "SPTNavigationControllerNavigationBarState.h"
#import "UISearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSDictionary, NSString, SPSocialLookup, SPTTableView, UIActivityIndicatorView, UISearchBar, UISearchDisplayController;

@interface SPTLegacyPeopleChooserVC : SPViewController <UISearchDisplayDelegate, UISearchBarDelegate, SPSocialLookupDelegate, SPTImageLoaderDelegate, SPTNavigationControllerNavigationBarState, UITableViewDelegate, UITableViewDataSource>
{
    BOOL _allowsMultipleSelection;
    BOOL _isInboxEnabled;
    id <SPTLegacyPeopleChooserDelegate> _delegate;
    UISearchBar *_searchBar;
    SPTTableView *_tableView;
    NSDictionary *_users;
    NSDictionary *_filteredUsers;
    UISearchDisplayController *_searchDC;
    SPSocialLookup *_socialLookup;
    NSArray *_friends;
    UIActivityIndicatorView *_activityIndicator;
    id <SPTImageLoader> _imageLoader;
    id <SPTShareFeature> _shareFeature;
}

@property(nonatomic) BOOL isInboxEnabled; // @synthesize isInboxEnabled=_isInboxEnabled;
@property(nonatomic) __weak id <SPTShareFeature> shareFeature; // @synthesize shareFeature=_shareFeature;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) NSArray *friends; // @synthesize friends=_friends;
@property(retain, nonatomic) SPSocialLookup *socialLookup; // @synthesize socialLookup=_socialLookup;
@property(retain, nonatomic) UISearchDisplayController *searchDC; // @synthesize searchDC=_searchDC;
@property(retain, nonatomic) NSDictionary *filteredUsers; // @synthesize filteredUsers=_filteredUsers;
@property(retain, nonatomic) NSDictionary *users; // @synthesize users=_users;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) BOOL allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property(nonatomic) __weak id <SPTLegacyPeopleChooserDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)userAtIndexPath:(id)arg1 forTableView:(id)arg2;
- (id)facebookUserDataAtIndexPath:(id)arg1 forTableView:(id)arg2;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)socialLookup:(id)arg1 didFailWithError:(id)arg2;
- (void)socialLookup:(id)arg1 didFindFriends:(id)arg2;
- (unsigned int)preferredNavigationBarState;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayControllerDidBeginSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)filterUsersBySearchString:(id)arg1;
- (void)populateFriends;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)keysForTableView:(id)arg1;
- (void)dealloc;
- (void)applyThemeLayout;
- (void)applyThemeLayoutToTableView:(id)arg1;
- (void)onLogout;
- (id)initWithImageLoaderFactory:(id)arg1 shareFeature:(id)arg2 isInboxEnabled:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

