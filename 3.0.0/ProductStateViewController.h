//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTProductStateObserver.h"
#import "UIScrollViewDelegate.h"
#import "UISearchBarDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, ProductStateViewModel, SPTProductState, SPTTableView;

@interface ProductStateViewController : UIViewController <UISearchBarDelegate, UIScrollViewDelegate, SPTProductStateObserver, UITableViewDataSource, UITableViewDelegate>
{
    ProductStateViewModel *_viewModel;
    SPTProductState *_productState;
    SPTTableView *_tableView;
}

@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SPTProductState *productState; // @synthesize productState=_productState;
- (void).cxx_destruct;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)viewDidLoad;
- (void)productState:(id)arg1 stateDidChange:(id)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
