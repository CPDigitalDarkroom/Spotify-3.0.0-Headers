//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTEqualizerColumnViewDataSource.h"
#import "SPTEqualizerModelDelegate.h"
#import "SPTEqualizerSwitchTableViewCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, SPTEqualizerModel, SPTEqualizerView;

@interface SPTEqualizerViewController : UIViewController <SPTEqualizerColumnViewDataSource, UITableViewDataSource, SPTEqualizerModelDelegate, SPTEqualizerSwitchTableViewCellDelegate, UITableViewDelegate>
{
    SPTEqualizerModel *_model;
    SPTEqualizerView *_equalizerView;
}

+ (id)equalizerViewControllerWithModel:(id)arg1;
@property(retain, nonatomic) SPTEqualizerView *equalizerView; // @synthesize equalizerView=_equalizerView;
@property(retain, nonatomic) SPTEqualizerModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)equalizerColumnViewDidChangeValue:(id)arg1;
- (void)equalizerSwitchTableViewCellDidChangeOn:(id)arg1;
- (void)equalizerModelDidChangeConnectActive:(id)arg1;
- (void)equalizerModelDidUpdatePreset:(id)arg1;
- (void)equalizerModelDidChangeValue:(id)arg1;
- (void)equalizerModelDidChangeOn:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)equalizerColumnView:(id)arg1 nameOfValueIndex:(long long)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)recalculateEqualizerViewRect;
- (void)dealloc;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

