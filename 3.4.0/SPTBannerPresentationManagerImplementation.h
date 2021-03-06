//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTBannerPresentationManager.h"
#import "SPTBannerViewDelegate.h"

@class MetaViewController, NSMutableOrderedSet, NSObject<OS_dispatch_source>, NSString, SPTBannerPresentationManagerQueueTicket, SPTClientEventLogger, SPTMenuController;

@interface SPTBannerPresentationManagerImplementation : NSObject <SPTBannerViewDelegate, SPTBannerPresentationManager>
{
    _Bool _suspended;
    _Bool _updatingPresentedBanner;
    _Bool _shouldPerformRunLoopAfterUpdatingPresentedBanner;
    CDUnknownBlockType _sortingBlock;
    NSMutableOrderedSet *_bannerTicketQueue;
    NSObject<OS_dispatch_source> *_automaticDismissalSource;
    SPTBannerPresentationManagerQueueTicket *_currentlyPresentedBannerTicket;
    MetaViewController *_metaViewController;
    SPTClientEventLogger *_clientEventLogger;
}

@property(readonly, nonatomic) SPTClientEventLogger *clientEventLogger; // @synthesize clientEventLogger=_clientEventLogger;
@property(readonly, nonatomic) __weak MetaViewController *metaViewController; // @synthesize metaViewController=_metaViewController;
@property(nonatomic) _Bool shouldPerformRunLoopAfterUpdatingPresentedBanner; // @synthesize shouldPerformRunLoopAfterUpdatingPresentedBanner=_shouldPerformRunLoopAfterUpdatingPresentedBanner;
@property(nonatomic, getter=isUpdatingPresentedBanner) _Bool updatingPresentedBanner; // @synthesize updatingPresentedBanner=_updatingPresentedBanner;
@property(retain, nonatomic) SPTBannerPresentationManagerQueueTicket *currentlyPresentedBannerTicket; // @synthesize currentlyPresentedBannerTicket=_currentlyPresentedBannerTicket;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *automaticDismissalSource; // @synthesize automaticDismissalSource=_automaticDismissalSource;
@property(readonly, nonatomic) NSMutableOrderedSet *bannerTicketQueue; // @synthesize bannerTicketQueue=_bannerTicketQueue;
@property(readonly, copy, nonatomic) CDUnknownBlockType sortingBlock; // @synthesize sortingBlock=_sortingBlock;
@property(nonatomic, getter=isSuspended) _Bool suspended; // @synthesize suspended=_suspended;
- (void).cxx_destruct;
- (id)currentlyQueuedBannerItems;
- (id)dataForLoggingBannerItem:(id)arg1;
- (void)logEventWithName:(id)arg1 eventVersion:(id)arg2 data:(id)arg3;
- (void)logBannerItemPresented:(id)arg1;
- (void)logUserTappedBannerButtonNamed:(id)arg1 forBannerItem:(id)arg2;
- (void)actionButtonTappedInBannerView:(id)arg1;
- (void)closeButtonTappedInBannerView:(id)arg1;
@property(readonly, nonatomic) SPTMenuController *menuController;
- (void)sortBannerTicketQueue;
- (void)pushBannerTicketOnQueue:(id)arg1;
- (void)removeBannerTicketFromQueue:(id)arg1;
@property(readonly, nonatomic) id <SPTBannerPresentationManagerTicket> nextBannerTicketFromQueue;
- (_Bool)isBannerTicket:(id)arg1 moreImportantThanBannerTicket:(id)arg2;
- (_Bool)shouldRequeueCurrentBannerTicket:(id)arg1 givenNextBannerTicket:(id)arg2;
- (_Bool)shouldPresentNextBannerWithTicket:(id)arg1 givenCurrentBannerWithTicket:(id)arg2;
- (void)sendCompletionOrRequeueTicket:(id)arg1 givenNextTicket:(id)arg2;
- (void)replaceCurrentBannerViewWithBannerView:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentNextBannerFromQueueIfNeededAnimated:(_Bool)arg1;
- (void)cancelAutomaticDismissal;
- (void)dismissOrUnqueueBannerItemForTicket:(id)arg1 animated:(_Bool)arg2;
- (void)dismissOrUnqueueBannerItemForTicket:(id)arg1;
- (void)resume;
- (void)suspendAndHideCurrentlyPresentedBanner:(_Bool)arg1;
- (void)suspend;
- (void)performNextRunLoopCycleAnimated:(_Bool)arg1;
- (id)queueBannerItemForPresentation:(id)arg1 statusChangeBlock:(CDUnknownBlockType)arg2;
- (id)initWithMetaViewController:(id)arg1 clientEventLogger:(id)arg2 sortingBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

