//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPContentInsetViewController.h"
#import "SPTInboxModelDelegate.h"
#import "SPTTouchViewEngineObserver.h"
#import "UIPopoverControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, SPTInboxModel, SPTInfoView, SPTPopoverController, SPTProgressView, SPTTableView, SPTViewLogger, UISwitch;

@interface SPTInboxViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, SPTInboxModelDelegate, SPContentInsetViewController, UIPopoverControllerDelegate, SPTTouchViewEngineObserver>
{
    BOOL _needsReloadData;
    SPTTableView *_tableView;
    SPTInfoView *_infoView;
    SPTInboxModel *_model;
    SPTViewLogger *_viewLogger;
    SPTProgressView *_progressView;
    UISwitch *_availableOfflineSwitch;
    int _disableUpdatesCount;
    id <SPTContextMenuViewControllerFactory> _contextMenuViewControllerFactory;
    SPTPopoverController *_contextMenuPopover;
    id <SPTAudioTouch> _audioTouch;
}

+ (id)itemTypeStringForSPTIcon:(unsigned int)arg1;
@property(retain, nonatomic) id <SPTAudioTouch> audioTouch; // @synthesize audioTouch=_audioTouch;
@property(retain, nonatomic) SPTPopoverController *contextMenuPopover; // @synthesize contextMenuPopover=_contextMenuPopover;
@property(retain, nonatomic) id <SPTContextMenuViewControllerFactory> contextMenuViewControllerFactory; // @synthesize contextMenuViewControllerFactory=_contextMenuViewControllerFactory;
@property(nonatomic) int disableUpdatesCount; // @synthesize disableUpdatesCount=_disableUpdatesCount;
@property(nonatomic) BOOL needsReloadData; // @synthesize needsReloadData=_needsReloadData;
@property(retain, nonatomic) UISwitch *availableOfflineSwitch; // @synthesize availableOfflineSwitch=_availableOfflineSwitch;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) SPTViewLogger *viewLogger; // @synthesize viewLogger=_viewLogger;
@property(retain, nonatomic) SPTInboxModel *model; // @synthesize model=_model;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)viewEngineDidEndInteraction:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (int)stackedNavigationPageSize;
- (void)sp_updateContentInsets;
- (void)updateAccessibilityForCell:(id)arg1 withItem:(id)arg2 atIndexPath:(id)arg3;
- (void)inboxModel:(id)arg1 didFindUserForIndexPath:(id)arg2;
- (void)inboxModelDidLoad:(id)arg1;
- (void)inboxModelWillLoad:(id)arg1;
- (void)inboxModel:(id)arg1 didChangeOfflineStatusForRowWithContext:(id)arg2;
- (void)inboxModelDidChangeAvailableOffline:(id)arg1;
- (void)inboxModelDidChangeNumberOfUnreadRows:(id)arg1;
- (void)inboxModelDidChangeActiveIndexPath:(id)arg1;
- (void)inboxModelDidUpdateRows:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)contextMenuButtonAction:(id)arg1;
- (void)availableOfflineSwitchValueChanged;
- (void)registerPreviewsForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)hideInfoView;
- (void)showEmptyInfoView;
- (void)endIgnoringUpdates;
- (void)beginIgnoringUpdates;
- (void)reloadDataIfNeeded;
- (void)reloadDataIfVisible;
- (void)applyThemeLayout;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic) BOOL automaticallyAdjustsScrollViewInsets;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithModel:(id)arg1 viewLogger:(id)arg2 contextMenuViewControllerFactory:(id)arg3 audioTouch:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

