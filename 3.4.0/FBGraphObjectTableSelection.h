//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBGraphObjectSelectionQueryDelegate.h"
#import "UITableViewDelegate.h"

@class FBGraphObjectTableDataSource, NSArray, NSObject<FBGraphObjectSelectionChangedDelegate>, NSString;

@interface FBGraphObjectTableSelection : NSObject <FBGraphObjectSelectionQueryDelegate, UITableViewDelegate>
{
    _Bool _allowsMultipleSelection;
    NSObject<FBGraphObjectSelectionChangedDelegate> *_delegate;
    NSArray *_selection;
    FBGraphObjectTableDataSource *_dataSource;
}

@property(retain, nonatomic) FBGraphObjectTableDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property(retain, nonatomic) NSArray *selection; // @synthesize selection=_selection;
@property(nonatomic) NSObject<FBGraphObjectSelectionChangedDelegate> *delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)graphObjectTableDataSource:(id)arg1 selectionIncludesItem:(id)arg2;
- (_Bool)selectionIncludesItem:(id)arg1;
- (void)selectionChanged;
- (void)deselectItems:(id)arg1 tableView:(id)arg2;
- (void)deselectItem:(id)arg1 cell:(id)arg2 raiseSelectionChanged:(_Bool)arg3;
- (void)selectItem:(id)arg1 tableView:(id)arg2;
- (void)selectItem:(id)arg1 cell:(id)arg2 raiseSelectionChanged:(_Bool)arg3;
- (void)clearSelectionInTableView:(id)arg1;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

