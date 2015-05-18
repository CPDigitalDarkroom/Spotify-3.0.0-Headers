//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTRadioViewController.h"

#import "SPTRadioStationsRowControllerDelegate.h"
#import "SearchExternalViewControllerDelegate.h"
#import "UITableViewDataSource.h"

@class NSString, UIBarButtonItem, UIButton, UITapGestureRecognizer;

@interface SPTRadioViewControllerIPhone : SPTRadioViewController <SearchExternalViewControllerDelegate, UITableViewDataSource, SPTRadioStationsRowControllerDelegate>
{
    BOOL _isLoading;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    UIBarButtonItem *_stationBarButtonItem;
    UIButton *_editButton;
    UITapGestureRecognizer *_endEditingModeTapRecognizer;
}

@property(retain, nonatomic) UITapGestureRecognizer *endEditingModeTapRecognizer; // @synthesize endEditingModeTapRecognizer=_endEditingModeTapRecognizer;
@property(retain, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) UIBarButtonItem *stationBarButtonItem; // @synthesize stationBarButtonItem=_stationBarButtonItem;
@property(nonatomic) BOOL isLoading; // @synthesize isLoading=_isLoading;
- (void)setLayoutDelegate:(id)arg1;
- (id)layoutDelegate;
- (void).cxx_destruct;
- (void)radioStationsRowController:(id)arg1 didEnableEditing:(BOOL)arg2;
- (BOOL)showOfflinePlaybackError;
- (id)placeholderForSearchBar;
- (BOOL)searchViewControllerShouldDisplayRadioInterface:(id)arg1;
- (void)searchViewController:(id)arg1 didSelectSearchResultEntityWithURL:(id)arg2;
- (void)infoViewErrorButtonTapped;
- (void)newStationTapped:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)addSeparatorToCell:(id)arg1 topOnly:(BOOL)arg2;
- (id)separatorViewForParentFrame:(struct CGRect)arg1 isTop:(BOOL)arg2;
- (id)cellWithViewController:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (struct CGRect)editButtonSize;
- (void)addEditButtonToSectionHeader:(id)arg1;
- (void)hideLoadingView;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1 viewLogger:(id)arg2 eventLogger:(id)arg3 searchFeature:(id)arg4 imageLoaderFactory:(id)arg5 productState:(id)arg6 audioTouch:(id)arg7 localSettings:(id)arg8 offlineInfoViewFactory:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
