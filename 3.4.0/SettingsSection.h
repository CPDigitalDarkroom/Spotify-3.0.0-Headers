//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SettingsViewController;

@interface SettingsSection : NSObject
{
    SettingsViewController *_settingsViewController;
    NSString *_title;
}

+ (_Bool)shouldDisplayInSettingsViewController:(id)arg1;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak SettingsViewController *settingsViewController; // @synthesize settingsViewController=_settingsViewController;
- (void).cxx_destruct;
- (id)cellForRow:(long long)arg1;
@property(readonly, nonatomic) long long numberOfRows;
- (id)initWithSettingsViewController:(id)arg1;

@end

