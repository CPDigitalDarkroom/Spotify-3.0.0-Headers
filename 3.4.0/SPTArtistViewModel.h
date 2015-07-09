//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTSingleRequestViewModel.h"

#import "FollowModelObserver.h"
#import "SPTArtistBiograhyViewDelegate.h"
#import "SPTCeramicRequest.h"
#import "SPTCeramicViewControllerDelegate.h"
#import "SPTCeramicViewControllerViewProvider.h"

@class FollowModel, NSString, NSURL, SPTArtistBiograhyView, SPTArtistOverviewModel, SPTArtistSpace;

@interface SPTArtistViewModel : SPTSingleRequestViewModel <FollowModelObserver, SPTArtistBiograhyViewDelegate, SPTCeramicRequest, SPTCeramicViewControllerViewProvider, SPTCeramicViewControllerDelegate>
{
    _Bool loaded;
    _Bool _concertPageEnabled;
    NSURL *_URI;
    id <SPTCeramicRequestDelegate> ceramicDelegate;
    unsigned long long _spaceTargetSection;
    id <SPTArtistViewModelFollowDelegate> _followModelDelegate;
    NSURL *_artistURL;
    FollowModel *_followModel;
    SPTArtistOverviewModel *_overViewModel;
    SPTArtistBiograhyView *_bioView;
    SPTArtistSpace *_space;
}

+ (id)requestURLFromArtistURL:(id)arg1;
+ (void)preloadDataForArtist:(id)arg1 resolver:(id)arg2;
@property(retain, nonatomic) SPTArtistSpace *space; // @synthesize space=_space;
@property(retain, nonatomic) SPTArtistBiograhyView *bioView; // @synthesize bioView=_bioView;
@property(retain, nonatomic) SPTArtistOverviewModel *overViewModel; // @synthesize overViewModel=_overViewModel;
@property(retain, nonatomic) FollowModel *followModel; // @synthesize followModel=_followModel;
@property(readonly, nonatomic, getter=isConcertPageEnabled) _Bool concertPageEnabled; // @synthesize concertPageEnabled=_concertPageEnabled;
@property(retain, nonatomic) NSURL *artistURL; // @synthesize artistURL=_artistURL;
@property(nonatomic) __weak id <SPTArtistViewModelFollowDelegate> followModelDelegate; // @synthesize followModelDelegate=_followModelDelegate;
@property(readonly, nonatomic) unsigned long long spaceTargetSection; // @synthesize spaceTargetSection=_spaceTargetSection;
@property(nonatomic) __weak id <SPTCeramicRequestDelegate> ceramicDelegate; // @synthesize ceramicDelegate;
@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded;
@property(retain, nonatomic) NSURL *URI; // @synthesize URI=_URI;
- (void).cxx_destruct;
- (void)artistBiographyView:(id)arg1 didRequestURL:(id)arg2;
- (double)ceramicViewController:(id)arg1 customFooterViewHeightForBlockAtIndex:(long long)arg2;
- (id)ceramicViewController:(id)arg1 customFooterViewForBlockAtIndex:(long long)arg2;
- (void)decoratePlayContext:(id)arg1 withCompletionCallback:(CDUnknownBlockType)arg2;
- (id)titleForTabSection:(unsigned long long)arg1;
- (void)followModel:(id)arg1 updateDidFailWithError:(id)arg2;
- (void)followModel:(id)arg1 followDataDidChange:(id)arg2;
- (id)spaceForOverviewModel:(id)arg1 spaceTargetSection:(unsigned long long)arg2;
- (id)dataWithDictionary:(id)arg1;
- (void)parseSuccessfulResponseDictionary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)cancelCurrentConnection;
- (void)load;
@property(readonly, nonatomic) _Bool shouldReloadWhenOnlineStateChanges;
- (id)initWithArtist:(id)arg1 currentUsername:(id)arg2 resolver:(id)arg3 offlineModeState:(id)arg4 dataLoader:(id)arg5 serviceName:(id)arg6 endpointPath:(id)arg7 ceramicSpaceTarget:(unsigned long long)arg8 viewURI:(id)arg9 isConcertPageEnabled:(_Bool)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

