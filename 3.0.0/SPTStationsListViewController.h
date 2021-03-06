//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTableViewController.h"

#import "SPTImageLoaderDelegate.h"
#import "SPTRadioPlaybackObserver.h"
#import "SPTRadioStationsObserver.h"
#import "SPTStationsCreateBarDelegate.h"
#import "SearchExternalViewControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, SPTProgressView, SPTRadioPlaybackService, SPTRadioStationsService, SPTStationsCreateBar, SearchExternalViewController, UIViewController;

@interface SPTStationsListViewController : SPTableViewController <UITableViewDataSource, UITableViewDelegate, SPTRadioStationsObserver, SPTImageLoaderDelegate, SPTStationsCreateBarDelegate, SearchExternalViewControllerDelegate, SPTRadioPlaybackObserver, UINavigationControllerDelegate>
{
    BOOL _isDeletingStation;
    SPTRadioStationsService *_stationService;
    SPTRadioPlaybackService *_playbackService;
    SPTProgressView *_progressView;
    id <SPTImageLoader> _imageLoader;
    id <SearchFeature> _search;
    SPTStationsCreateBar *_createBarView;
    SearchExternalViewController *_searchViewController;
    UIViewController *_searchTableViewController;
}

@property(nonatomic) BOOL isDeletingStation; // @synthesize isDeletingStation=_isDeletingStation;
@property(retain, nonatomic) UIViewController *searchTableViewController; // @synthesize searchTableViewController=_searchTableViewController;
@property(retain, nonatomic) SearchExternalViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
@property(retain, nonatomic) SPTStationsCreateBar *createBarView; // @synthesize createBarView=_createBarView;
@property(retain, nonatomic) id <SearchFeature> search; // @synthesize search=_search;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) SPTRadioPlaybackService *playbackService; // @synthesize playbackService=_playbackService;
@property(retain, nonatomic) SPTRadioStationsService *stationService; // @synthesize stationService=_stationService;
- (void).cxx_destruct;
- (BOOL)searchViewControllerShouldDisplayRadioInterface:(id)arg1;
- (void)searchViewController:(id)arg1 didSelectSearchResultEntityWithURL:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)radioPlaybackService:(id)arg1 playbackStateChanged:(unsigned int)arg2;
- (void)filterBarTextDidEndEditing:(id)arg1;
- (void)filterBarTextDidBeginEditing:(id)arg1;
- (void)filterBarContextButtonTapped:(id)arg1;
- (void)filterBar:(id)arg1 textDidChange:(id)arg2;
- (void)radioStationService:(id)arg1 userStationsChanged:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)URI;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)keyboardWasShown:(id)arg1;
- (void)registerForKeyboardNotifications;
- (BOOL)isStationCurrentlyPlaying:(id)arg1;
- (void)hideSearchTableView;
- (void)showSearchTableView;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithStationService:(id)arg1 playbackService:(id)arg2 imageLoaderFactory:(id)arg3 search:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

