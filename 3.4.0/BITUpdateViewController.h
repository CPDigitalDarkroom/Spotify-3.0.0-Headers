//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BITHockeyBaseViewController.h"

#import "BITStoreButtonDelegate.h"

@class BITAppStoreHeader, BITStoreButton, BITUpdateManager, NSMutableArray;

@interface BITUpdateViewController : BITHockeyBaseViewController <BITStoreButtonDelegate>
{
    _Bool _kvoRegistered;
    _Bool _showAllVersions;
    BITAppStoreHeader *_appStoreHeader;
    BITStoreButton *_appStoreButton;
    id _popOverController;
    NSMutableArray *_cells;
    _Bool _isAppStoreEnvironment;
    _Bool _mandatoryUpdate;
    BITUpdateManager *_updateManager;
    unsigned long long _appStoreButtonState;
}

@property(nonatomic) unsigned long long appStoreButtonState; // @synthesize appStoreButtonState=_appStoreButtonState;
@property(nonatomic) _Bool mandatoryUpdate; // @synthesize mandatoryUpdate=_mandatoryUpdate;
@property(nonatomic) __weak BITUpdateManager *updateManager; // @synthesize updateManager=_updateManager;
- (void).cxx_destruct;
- (void)storeButtonFired:(id)arg1;
- (void)setAppStoreButtonState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)showPreviousVersionAction;
- (void)redrawTableView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;
- (void)configureWebCell:(id)arg1 forAppVersion:(id)arg2;
- (void)showHidePreviousVersionsButton;
- (id)gradientButtonHighlightImage;
- (void)changePreviousVersionButtonBackgroundHighlighted:(id)arg1;
- (void)changePreviousVersionButtonBackground:(id)arg1;
- (void)realignPreviousVersionButton;
- (id)addGlossToImage:(id)arg1;
- (void)appDidBecomeActive;
- (void)updateAppStoreHeader;
- (void)restoreStoreButtonStateAnimated:(_Bool)arg1;
- (id)backgroundColor;

@end

