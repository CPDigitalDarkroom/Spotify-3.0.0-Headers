//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SettingsSection.h"

@class NSArray;

@interface SPTInternalSettingsSection : SettingsSection
{
    NSArray *_cellsAndActions;
}

@property(readonly, nonatomic) NSArray *cellsAndActions; // @synthesize cellsAndActions=_cellsAndActions;
- (void).cxx_destruct;
- (void)didSelectRow:(long long)arg1;
- (id)cellForRow:(long long)arg1;
- (long long)numberOfRows;
- (id)subViewCellWithTitle:(id)arg1;
- (id)debugCellSpecification;
- (id)featureCellSpecificationWithSettingsViewController:(id)arg1 settingsRegistry:(id)arg2 bannerPresentationManager:(id)arg3;
- (id)initWithSettingsViewController:(id)arg1 settingsRegistry:(id)arg2 bannerPresentationManager:(id)arg3;

@end
