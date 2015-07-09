//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SearchViewModel.h"

#import "SPTThemableViewLayoutDelegate.h"
#import "UITableViewDataSource.h"

@class NSString;

@interface SearchViewModel (TableViewDataSource) <UITableViewDataSource, SPTThemableViewLayoutDelegate>
- (_Bool)cellWithTypeShouldHaveShuffleAppearance:(unsigned long long)arg1;
- (id)cellReuseIdentifierForType:(unsigned long long)arg1;
- (void)themableViewDidUpdateLayout:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)setTitlesOfCell:(id)arg1 atIndexPath:(id)arg2;
- (id)subtitleForTableViewCellForIndexPath:(id)arg1;
- (double)heightForTableViewCellForIndexPath:(id)arg1;
- (unsigned long long)typeForTableViewCellForIndexPath:(id)arg1;
- (void)tableViewCellContextMenuButtonTapped:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

