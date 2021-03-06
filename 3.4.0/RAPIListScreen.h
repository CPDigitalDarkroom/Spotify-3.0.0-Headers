//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RAPIScreen.h"

@class IDButton, IDCheckbox, ListScreen0View, NSArray, NSDate, NSMutableArray, RAPIItemLocation, RAPIListScreenConfig;

@interface RAPIListScreen : RAPIScreen
{
    float _imageCompressionFactor;
    RAPIListScreenConfig *_config;
    NSDate *_lastPageSkipTime;
    long long _currentlySetMasterOption;
    RAPIItemLocation *_currentGlobalCheckmarkPosition;
    RAPIItemLocation *_currentLocalCheckmarkPosition;
    long long _state;
    long long _imageColumnIndex;
    long long _listViewIndex;
    long long _maxItemsPerPage;
    long long _maxItemsPerGroup;
    NSMutableArray *_groups;
    NSMutableArray *_pages;
    long long _currentlyVisiblePage;
    ListScreen0View *_idView;
    IDButton *_skipPrevButton;
    IDButton *_skipNextButton;
    IDButton *_masterOptionButton;
    IDCheckbox *_masterOptionButtonCheckbox;
    NSArray *_groupLabels;
    NSArray *_groupTables;
    struct CGSize _preferredImageSize;
}

@property(retain) NSArray *groupTables; // @synthesize groupTables=_groupTables;
@property(retain) NSArray *groupLabels; // @synthesize groupLabels=_groupLabels;
@property __weak IDCheckbox *masterOptionButtonCheckbox; // @synthesize masterOptionButtonCheckbox=_masterOptionButtonCheckbox;
@property __weak IDButton *masterOptionButton; // @synthesize masterOptionButton=_masterOptionButton;
@property __weak IDButton *skipNextButton; // @synthesize skipNextButton=_skipNextButton;
@property __weak IDButton *skipPrevButton; // @synthesize skipPrevButton=_skipPrevButton;
@property __weak ListScreen0View *idView; // @synthesize idView=_idView;
@property float imageCompressionFactor; // @synthesize imageCompressionFactor=_imageCompressionFactor;
@property long long currentlyVisiblePage; // @synthesize currentlyVisiblePage=_currentlyVisiblePage;
@property(retain) NSMutableArray *pages; // @synthesize pages=_pages;
@property(retain) NSMutableArray *groups; // @synthesize groups=_groups;
@property long long maxItemsPerGroup; // @synthesize maxItemsPerGroup=_maxItemsPerGroup;
@property long long maxItemsPerPage; // @synthesize maxItemsPerPage=_maxItemsPerPage;
@property long long listViewIndex; // @synthesize listViewIndex=_listViewIndex;
@property struct CGSize preferredImageSize; // @synthesize preferredImageSize=_preferredImageSize;
@property long long imageColumnIndex; // @synthesize imageColumnIndex=_imageColumnIndex;
@property long long state; // @synthesize state=_state;
@property(retain) RAPIItemLocation *currentLocalCheckmarkPosition; // @synthesize currentLocalCheckmarkPosition=_currentLocalCheckmarkPosition;
@property(retain) RAPIItemLocation *currentGlobalCheckmarkPosition; // @synthesize currentGlobalCheckmarkPosition=_currentGlobalCheckmarkPosition;
@property long long currentlySetMasterOption; // @synthesize currentlySetMasterOption=_currentlySetMasterOption;
@property(retain) NSDate *lastPageSkipTime; // @synthesize lastPageSkipTime=_lastPageSkipTime;
@property(retain) RAPIListScreenConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (void)focusLocalItem:(id)arg1;
- (void)skipToPrevPage;
- (void)skipToNextPage;
- (long long)handleMasterOptionCheckboxPress:(id)arg1 withNewCheckedValue:(_Bool)arg2;
- (long long)handleSkipButtonPress:(id)arg1;
- (void)invalidateImageForRow:(long long)arg1 forGroup:(long long)arg2;
- (void)displayErrorMessage:(id)arg1;
- (void)setCheckmarkPositionToItemIndex:(long long)arg1 inGroup:(long long)arg2;
- (long long)getPageForGlobalItemLocation:(id)arg1 andStoreLocalLocation:(id)arg2;
- (void)setupForNewContentsAndDoNotDelay:(_Bool)arg1;
- (void)fillWithContents;
- (void)clearContent;
- (long long)handleItemSelectionInTable:(id)arg1 atIndex:(long long)arg2 storeClickedItemIn:(id)arg3 storeTargetScreenIndexIn:(long long *)arg4;
- (id)initWithView:(id)arg1 andConfig:(id)arg2 andContext:(id)arg3;

@end

