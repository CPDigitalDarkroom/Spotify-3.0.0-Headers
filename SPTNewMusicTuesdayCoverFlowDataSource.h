//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UICollectionViewDataSource.h"

@class NSString, SPTNewMusicTuesdayViewModel;

@interface SPTNewMusicTuesdayCoverFlowDataSource : NSObject <UICollectionViewDataSource>
{
    SPTNewMusicTuesdayViewModel *_viewModel;
}

@property(retain, nonatomic) SPTNewMusicTuesdayViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (int)elementViewModelIndexForIndexPath:(id)arg1;
- (id)elementViewModelForIndexPath:(id)arg1;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
