//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDView.h"

@class IDLabel, IDTable;

@interface IDRhmiFeatureListNavigationMainView : IDView
{
    IDLabel *_moreAppsLabel;
    IDLabel *_notAvailableLabel;
    IDTable *_moreAppsList;
}

@property(retain) IDTable *moreAppsList; // @synthesize moreAppsList=_moreAppsList;
@property(retain) IDLabel *notAvailableLabel; // @synthesize notAvailableLabel=_notAvailableLabel;
@property(retain) IDLabel *moreAppsLabel; // @synthesize moreAppsLabel=_moreAppsLabel;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithHmiState:(long long)arg1 titleModel:(id)arg2 focusEvent:(long long)arg3 hmiProvider:(id)arg4;

@end

