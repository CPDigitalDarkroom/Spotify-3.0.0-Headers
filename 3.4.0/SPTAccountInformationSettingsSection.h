//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SettingsSection.h"

@class NSArray, SPTAccountInformationViewModel;

@interface SPTAccountInformationSettingsSection : SettingsSection
{
    SPTAccountInformationViewModel *_viewModel;
    NSArray *_viewModelObservations;
}

@property(readonly, copy, nonatomic) NSArray *viewModelObservations; // @synthesize viewModelObservations=_viewModelObservations;
@property(readonly, nonatomic) SPTAccountInformationViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)headerOrMessageTextDidChange;
- (id)footerText;
- (id)headerText;
- (long long)numberOfRows;
- (id)cellForRow:(long long)arg1;
- (void)dealloc;
- (id)initWithSettingsViewController:(id)arg1 viewModel:(id)arg2;
- (id)initWithSettingsViewController:(id)arg1;

@end

