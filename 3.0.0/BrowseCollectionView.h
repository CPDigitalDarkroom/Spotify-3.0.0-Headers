//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTCollectionView.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSString, SPTBrowseCategoryRequest;

@interface BrowseCollectionView : SPTCollectionView <UIPickerViewDataSource, UIPickerViewDelegate>
{
    id <BrowseCollectionViewDelegate> _browseDelegate;
    SPTBrowseCategoryRequest *_model;
    int _currentSelectedPickerRow;
}

@property(nonatomic) int currentSelectedPickerRow; // @synthesize currentSelectedPickerRow=_currentSelectedPickerRow;
@property(retain, nonatomic) SPTBrowseCategoryRequest *model; // @synthesize model=_model;
@property(nonatomic) __weak id <BrowseCollectionViewDelegate> browseDelegate; // @synthesize browseDelegate=_browseDelegate;
- (void).cxx_destruct;
- (void)refreshFilterWithIndex:(int)arg1;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (void)actionPickerDoneButtonTapped:(id)arg1;
- (id)inputView;
- (void)showActionFilterView;
- (BOOL)canBecomeFirstResponder;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
