//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString;

@interface SPTArtistCombinedTableViewDataSource : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    id <UITableViewDelegate> _delegate;
    NSMutableArray *_dataSources;
    NSMutableArray *_delegates;
}

@property(retain, nonatomic) NSMutableArray *delegates; // @synthesize delegates=_delegates;
@property(retain, nonatomic) NSMutableArray *dataSources; // @synthesize dataSources=_dataSources;
@property __weak id <UITableViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingFooterView:(id)arg2 forSection:(int)arg3;
- (void)tableView:(id)arg1 didEndDisplayingHeaderView:(id)arg2 forSection:(int)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(int)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)indexPathByReplacingFirstIndexIn:(id)arg1 with:(unsigned int)arg2;
- (int)numberOfSectionsInDataSource:(id)arg1 inTableView:(id)arg2;
- (id)delegateForIndexPath:(id *)arg1 thatRespondsTo:(SEL)arg2 inTableView:(id)arg3;
- (id)delegateForSection:(int *)arg1 thatRespondsTo:(SEL)arg2 inTableView:(id)arg3;
- (id)dataSourceForIndexPath:(id *)arg1 thatRespondsTo:(SEL)arg2 inTableView:(id)arg3;
- (id)dataSourceForSection:(int *)arg1 thatRespondsTo:(SEL)arg2 inTableView:(id)arg3;
- (unsigned int)indexOfDataSourceForSection:(int *)arg1 inTableView:(id)arg2;
- (id)allDataSources;
- (void)removeAllDataSources;
- (void)removeDataSource:(id)arg1;
- (void)addDataSource:(id)arg1 delegate:(id)arg2;
- (void)addDataSource:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

