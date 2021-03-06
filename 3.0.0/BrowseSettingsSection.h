//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SettingsSection.h"

@class NSMutableArray;

@interface BrowseSettingsSection : SettingsSection
{
    NSMutableArray *_cells;
    id <SPTLocalSettings> _localSettings;
}

@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) NSMutableArray *cells; // @synthesize cells=_cells;
- (void).cxx_destruct;
- (id)cellForRow:(int)arg1;
- (int)numberOfRows;
- (id)footerText;
- (id)headerText;
- (void)handleSwitchValueDidChange:(id)arg1;
- (void)addSwitchWithTitle:(id)arg1 value:(BOOL)arg2;
- (id)initWithSettingsViewController:(id)arg1 localSettings:(id)arg2;

@end

