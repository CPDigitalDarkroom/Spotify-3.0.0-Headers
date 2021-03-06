//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTBaseViewModel.h"

#import "FollowModelObserver.h"
#import "SPTPlayerObserver.h"

@class FollowModel, NSError, NSString, ProfileViewModelData, SPTClientEventLogger;

@interface ProfileViewModel : SPTBaseViewModel <SPTPlayerObserver, FollowModelObserver>
{
    BOOL _isCurrentUser;
    id <ProfileFeature> _feature;
    NSString *_currentUsername;
    NSString *_profileUsername;
    ProfileViewModelData *_data;
    FollowModel *_followModel;
    id <SPTPlayer> _player;
    NSError *_error;
    id <SPTAudioTouch> _audioTouch;
    SPTClientEventLogger *_logger;
    id <SPTResolver> _resolver;
}

@property(retain, nonatomic) id <SPTResolver> resolver; // @synthesize resolver=_resolver;
@property(retain, nonatomic) SPTClientEventLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTAudioTouch> audioTouch; // @synthesize audioTouch=_audioTouch;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) BOOL isCurrentUser; // @synthesize isCurrentUser=_isCurrentUser;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) FollowModel *followModel; // @synthesize followModel=_followModel;
@property(readonly, nonatomic) ProfileViewModelData *data; // @synthesize data=_data;
@property(readonly, nonatomic) NSString *profileUsername; // @synthesize profileUsername=_profileUsername;
@property(readonly, nonatomic) NSString *currentUsername; // @synthesize currentUsername=_currentUsername;
@property(nonatomic) __weak id <ProfileFeature> feature; // @synthesize feature=_feature;
- (void).cxx_destruct;
- (void)followModel:(id)arg1 updateDidFailWithError:(id)arg2;
- (void)followModel:(id)arg1 followDataDidChange:(id)arg2;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (BOOL)isContentSectionEmpty;
- (BOOL)areInvitationCodesAvailable;
- (BOOL)isEntityPlaying:(id)arg1;
- (void)startPlayerObserving;
- (id)parseResponse:(id)arg1 requestKey:(id)arg2 error:(id *)arg3;
- (void)fetchInvitesCount;
- (unsigned int)rankForEntity:(id)arg1 dataType:(int)arg2;
- (int)dataTypeForEntity:(id)arg1;
- (id)entityForViewModelDataType:(int)arg1 index:(unsigned int)arg2;
- (id)modelCollectionForViewModelDataType:(int)arg1;
- (void)pushViewControllerForHeaderViewType:(unsigned int)arg1;
- (void)pushViewAllViewControllerForViewModelDataType:(int)arg1;
- (void)pushViewControllerForEntity:(id)arg1 dataType:(int)arg2 rank:(unsigned int)arg3;
- (void)toggleFollowState;
- (id)sectionDataTypes;
- (void)requestData;
- (id)initWithRequestURLDictionary:(id)arg1 player:(id)arg2 offlineModeState:(id)arg3 feature:(id)arg4 currentUsername:(id)arg5 profileUsername:(id)arg6 logger:(id)arg7 audioTouch:(id)arg8 apolloDataLoader:(id)arg9 resolver:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <ProfileViewModelDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

