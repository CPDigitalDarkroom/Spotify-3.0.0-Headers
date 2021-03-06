//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAudioTouchShelves.h"
#import "SPTSwipeableTableViewCellDelegate.h"

@class NSMutableDictionary, NSString, SPTEntityService;

@interface SPTAudioTouchShelvesImplementation : NSObject <SPTSwipeableTableViewCellDelegate, SPTAudioTouchShelves>
{
    _Bool _dummyMode;
    CDUnknownBlockType _shelfActionCompleted;
    id <SPTCollection> _collection;
    id <SPTPlayerQueue> _playerQueue;
    NSMutableDictionary *_urls;
    NSMutableDictionary *_indexPaths;
    id <SPTUpsellPopupManager> _upsellPopupManager;
    SPTEntityService *_entityService;
    id <SPTAudioTouchFeature> _audioTouchFeature;
    id <SPTLogCenterProtocol> _logCenter;
}

@property(nonatomic, getter=isDummyMode) _Bool dummyMode; // @synthesize dummyMode=_dummyMode;
@property(retain, nonatomic) id <SPTLogCenterProtocol> logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, nonatomic) __weak id <SPTAudioTouchFeature> audioTouchFeature; // @synthesize audioTouchFeature=_audioTouchFeature;
@property(retain, nonatomic) SPTEntityService *entityService; // @synthesize entityService=_entityService;
@property(retain, nonatomic) id <SPTUpsellPopupManager> upsellPopupManager; // @synthesize upsellPopupManager=_upsellPopupManager;
@property(readonly, nonatomic) NSMutableDictionary *indexPaths; // @synthesize indexPaths=_indexPaths;
@property(readonly, nonatomic) NSMutableDictionary *urls; // @synthesize urls=_urls;
@property(readonly, nonatomic) id <SPTPlayerQueue> playerQueue; // @synthesize playerQueue=_playerQueue;
@property(readonly, nonatomic) __weak id <SPTCollection> collection; // @synthesize collection=_collection;
@property(copy, nonatomic) CDUnknownBlockType shelfActionCompleted; // @synthesize shelfActionCompleted=_shelfActionCompleted;
- (void).cxx_destruct;
- (void)enableDummySaveToCollectionShelfOnCell:(id)arg1;
- (void)enableSaveToCollectionShelfOnCell:(id)arg1 trackURL:(id)arg2 sourceURL:(id)arg3;
- (void)showAlertWithTitle:(id)arg1 mode:(unsigned long long)arg2;
- (void)swipeableTableViewCell:(id)arg1 didCompleteGesture:(unsigned long long)arg2 withHorizontalVelocity:(double)arg3 triggerOffset:(double)arg4;
- (void)queueTrack:(id)arg1;
- (id)infoForIndexPath:(id)arg1;
- (id)indexPathForTrackURL:(id)arg1 sourceURL:(id)arg2;
- (id)initWithCollection:(id)arg1 playerQueue:(id)arg2 upsellPopupManager:(id)arg3 logCenter:(id)arg4 entityService:(id)arg5 audioTouchFeature:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

