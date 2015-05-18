//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SettingsViewController.h"

#import "SPTThemableView.h"

@class NSString;

@interface SPTAccountSettingsViewController : SettingsViewController <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
}

@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (void)applyThemeLayout;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
