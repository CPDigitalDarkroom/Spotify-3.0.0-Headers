//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"

@class NSArray, NSString;

@interface SPTCeramicTableViewDataSource : NSObject <UITableViewDataSource>
{
    NSArray *_tableViewCells;
    id <SPTCeramicSpace> _space;
}

@property(retain, nonatomic) id <SPTCeramicSpace> space; // @synthesize space=_space;
@property(retain, nonatomic) NSArray *tableViewCells; // @synthesize tableViewCells=_tableViewCells;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setupTableViewCells;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

