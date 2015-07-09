//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPNavigationController.h"

#import "SearchInternalViewControllerDelegate.h"

@class NSString, SPTSearchTableViewController, UIViewController;

@interface SearchExternalViewController : SPNavigationController <SearchInternalViewControllerDelegate>
{
    _Bool _showsCancelButton;
    id <SearchExternalViewControllerDelegate> _searchDelegate;
    SPTSearchTableViewController *_searchViewController;
}

@property(retain, nonatomic) SPTSearchTableViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
@property(nonatomic) _Bool showsCancelButton; // @synthesize showsCancelButton=_showsCancelButton;
@property(nonatomic) __weak id <SearchExternalViewControllerDelegate> searchDelegate; // @synthesize searchDelegate=_searchDelegate;
- (void).cxx_destruct;
- (id)placeholderForSearchBar;
- (_Bool)searchViewControllerShouldDisplayRadioInterface:(id)arg1;
- (void)searchViewController:(id)arg1 didSelectSearchResultEntityWithURL:(id)arg2;
- (_Bool)searchViewControllerShouldInterceptSelections:(id)arg1;
@property(nonatomic, getter=isPresentedInPopover) _Bool presentedInPopover;
- (void)setSearchBarAsNavigationItemTitle:(_Bool)arg1;
- (_Bool)searchBarAsNavigationItemTitle;
- (void)performSearchWithString:(id)arg1 delayed:(_Bool)arg2;
- (void)dismiss;
@property(readonly, nonatomic) UIViewController *rootSearchViewController;
- (id)createDismissBarButtonItem;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)initWithRootViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

