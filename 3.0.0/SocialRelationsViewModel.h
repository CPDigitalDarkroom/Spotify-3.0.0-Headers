//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTBaseViewModel.h"

#import "FollowModelObserver.h"

@class MultipleFollowModel, NSString, NSURL, SPTClientEventLogger, SocialRelationsViewModelData;

@interface SocialRelationsViewModel : SPTBaseViewModel <FollowModelObserver>
{
    SocialRelationsViewModelData *_data;
    NSURL *_uri;
    unsigned int _socialRelationsType;
    MultipleFollowModel *_followModel;
    SPTClientEventLogger *_logger;
    id <SPTResolver> _resolver;
    NSString *_currentUsername;
}

@property(retain, nonatomic) NSString *currentUsername; // @synthesize currentUsername=_currentUsername;
@property(readonly, nonatomic) id <SPTResolver> resolver; // @synthesize resolver=_resolver;
@property(retain, nonatomic) SPTClientEventLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) MultipleFollowModel *followModel; // @synthesize followModel=_followModel;
@property(readonly, nonatomic) unsigned int socialRelationsType; // @synthesize socialRelationsType=_socialRelationsType;
@property(readonly, nonatomic) NSURL *uri; // @synthesize uri=_uri;
@property(readonly, nonatomic) SocialRelationsViewModelData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)followModel:(id)arg1 updateDidFailWithError:(id)arg2;
- (void)followModel:(id)arg1 followDataDidChange:(id)arg2;
- (void)pushViewControllerForEntity:(id)arg1 rank:(unsigned int)arg2;
- (void)toggleFollowStateForURI:(id)arg1;
- (id)parseResponse:(id)arg1 requestKey:(id)arg2 error:(id *)arg3;
- (id)initWithRequestURLDictionary:(id)arg1 resolver:(id)arg2 offlineModeState:(id)arg3 uri:(id)arg4 currentUsername:(id)arg5 socialRelationsType:(unsigned int)arg6 logger:(id)arg7 apolloDataLoader:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SocialRelationsViewModelDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

