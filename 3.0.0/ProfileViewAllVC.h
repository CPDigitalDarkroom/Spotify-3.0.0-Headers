//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProfileBaseVC.h"

#import "ProfileViewAllViewModelDelegate.h"
#import "SPObjectRepresentation.h"
#import "SPTImageLoaderDelegate.h"
#import "SPTThemableViewLayoutDelegate.h"

@class NSString, ProfileViewAllViewModel;

@interface ProfileViewAllVC : ProfileBaseVC <ProfileViewAllViewModelDelegate, SPTImageLoaderDelegate, SPObjectRepresentation, SPTThemableViewLayoutDelegate>
{
    id <SPTImageLoader> _imageLoader;
}

@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
- (void).cxx_destruct;
- (void)themableViewWillUpdateLayout:(id)arg1;
- (void)configureCell:(id)arg1 entity:(id)arg2 indexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)imageLoader:(id)arg1 didFailToLoadImageForURL:(id)arg2 error:(id)arg3 context:(id)arg4;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (id)URI;
- (void)viewModel:(id)arg1 playerStateDidChange:(id)arg2;
- (void)viewModel:(id)arg1 offlineModeChanged:(BOOL)arg2;
- (void)viewModel:(id)arg1 setLoading:(BOOL)arg2;
- (void)viewModel:(id)arg1 didFailAllRequestsWithError:(id)arg2;
- (void)viewModelDidFinishAllRequests:(id)arg1;
- (void)updateCellPlayStates;
- (BOOL)isEntityPlaying:(id)arg1;
- (unsigned int)indexForEntity:(id)arg1;
- (void)setupTableView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1 viewLogger:(id)arg2 logger:(id)arg3 style:(int)arg4 feature:(id)arg5 share:(id)arg6 followFeature:(id)arg7 metaViewController:(id)arg8 imageLoaderFactory:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) ProfileViewAllViewModel *viewModel;

@end

