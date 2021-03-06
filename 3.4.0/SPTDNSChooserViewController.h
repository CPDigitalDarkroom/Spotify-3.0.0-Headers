//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSString, SPTTableView, SettingsTextFieldTableViewCell, UIBarButtonItem;

@interface SPTDNSChooserViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate>
{
    SPTTableView *_tableView;
    SettingsTextFieldTableViewCell *_customDNSCell;
    UIBarButtonItem *_addDNSEntryButton;
}

@property(retain, nonatomic) UIBarButtonItem *addDNSEntryButton; // @synthesize addDNSEntryButton=_addDNSEntryButton;
@property(retain, nonatomic) SettingsTextFieldTableViewCell *customDNSCell; // @synthesize customDNSCell=_customDNSCell;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)newDNS;
- (id)currentHostSelected;
- (id)hostsForSection:(long long)arg1;
- (void)setSelectionState:(_Bool)arg1 onCell:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

