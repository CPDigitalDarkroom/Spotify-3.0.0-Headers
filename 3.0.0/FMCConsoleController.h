//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "FMCDebugToolConsole.h"

@class NSDateFormatter, NSMutableArray;

@interface FMCConsoleController : UITableViewController <FMCDebugToolConsole>
{
    NSMutableArray *messageList;
    BOOL atBottom;
    NSDateFormatter *dateFormatter;
}

@property(readonly) NSMutableArray *messageList; // @synthesize messageList;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)updateWhetherScrolledToBottom;
- (void)viewDidLoad;
- (void)logMessage:(id)arg1;
- (void)logException:(id)arg1 withMessage:(id)arg2;
- (void)logInfo:(id)arg1;
- (BOOL)isLastRowVisible;
- (void)append:(id)arg1;
- (id)initWithTableView:(id)arg1;

@end
