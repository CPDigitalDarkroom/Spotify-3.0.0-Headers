//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SettingsSection.h"

@class NSArray;

@interface SPTInAppPurchaseOverrideSettingsSection : SettingsSection
{
    id <SPTLocalSettings> _localSettings;
    NSArray *_cells;
}

@property(readonly, copy, nonatomic) NSArray *cells; // @synthesize cells=_cells;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
- (void).cxx_destruct;
- (void)didSelectRow:(int)arg1;
- (void)newStackSwitchDidChange:(id)arg1;
- (id)cellForRow:(int)arg1;
- (int)numberOfRows;
- (id)footerText;
- (id)headerText;
- (id)initWithSettingsViewController:(id)arg1 localSettings:(id)arg2;

@end

