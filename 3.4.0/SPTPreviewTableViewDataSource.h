//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, SPTPreviewViewModel;

@interface SPTPreviewTableViewDataSource : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    SPTPreviewViewModel *_viewModel;
    id <UITableViewDelegate> _delegate;
}

@property(nonatomic) __weak id <UITableViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SPTPreviewViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
