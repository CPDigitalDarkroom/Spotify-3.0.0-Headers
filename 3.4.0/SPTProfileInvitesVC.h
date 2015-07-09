//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProfileBaseVC.h"

@interface SPTProfileInvitesVC : ProfileBaseVC
{
}

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewModel:(id)arg1 offlineModeChanged:(_Bool)arg2;
- (void)viewModel:(id)arg1 setLoading:(_Bool)arg2;
- (void)viewModel:(id)arg1 didFailAllRequestsWithError:(id)arg2;
- (void)viewModelDidFinishAllRequests:(id)arg1;
- (void)configureCell:(id)arg1 entity:(id)arg2 indexPath:(id)arg3;
- (void)setupTableView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1 viewLogger:(id)arg2 logger:(id)arg3 style:(long long)arg4 feature:(id)arg5 share:(id)arg6 followFeature:(id)arg7 metaViewController:(id)arg8 imageLoaderFactory:(id)arg9;

@end
