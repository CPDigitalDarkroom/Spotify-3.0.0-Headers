//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, SPTTableView;

@interface SPTPlayerMftDebugController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    shared_ptr_1ac160cb _mftSequenceRules;
    SPTTableView *_tableView;
    NSArray *_data;
}

@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)resetAlbumPlays;
- (void)resetTrackPlays;
- (void)resetSkipCount;
- (void)viewDidLoad;
- (id)initWithMftRules:(shared_ptr_1ac160cb)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

