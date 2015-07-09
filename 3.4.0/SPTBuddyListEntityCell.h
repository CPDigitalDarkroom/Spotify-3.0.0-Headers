//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTTableViewCell.h"

#import "SPTBuddyListEntityActionsViewDelegate.h"
#import "SPTBuddyListEntityDataViewDelegate.h"

@class NSString, NSURL, SPTBuddyListEntityActionsView, SPTBuddyListEntityDataView;

@interface SPTBuddyListEntityCell : SPTTableViewCell <SPTBuddyListEntityDataViewDelegate, SPTBuddyListEntityActionsViewDelegate>
{
    id <SPTBuddyListEntityCellDelegate> _delegate;
    NSURL *_friendUri;
    NSURL *_contextUri;
    SPTBuddyListEntityDataView *_dataView;
    SPTBuddyListEntityActionsView *_actionsView;
}

@property(retain, nonatomic) SPTBuddyListEntityActionsView *actionsView; // @synthesize actionsView=_actionsView;
@property(retain, nonatomic) SPTBuddyListEntityDataView *dataView; // @synthesize dataView=_dataView;
@property(retain, nonatomic) NSURL *contextUri; // @synthesize contextUri=_contextUri;
@property(retain, nonatomic) NSURL *friendUri; // @synthesize friendUri=_friendUri;
@property(retain, nonatomic) id <SPTBuddyListEntityCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)buddyListEntityActionsView:(id)arg1 tappedActionType:(unsigned long long)arg2;
- (void)buddyListEntityDataView:(id)arg1 tappedActionType:(unsigned long long)arg2;
- (void)setExpanded:(_Bool)arg1;
- (void)setCurrentlyActive:(_Bool)arg1;
- (void)setTimestampText:(id)arg1;
- (void)setArtistName:(id)arg1;
- (void)setTrackName:(id)arg1;
- (void)setContextName:(id)arg1;
- (void)setContextType:(unsigned long long)arg1;
- (void)setFriendName:(id)arg1;
- (void)setFriendImage:(id)arg1;
- (id)audioTouchView;
- (void)layoutSubviews;
- (void)applyThemeLayout;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

