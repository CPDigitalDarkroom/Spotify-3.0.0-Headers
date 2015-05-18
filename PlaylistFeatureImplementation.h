//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PlaylistFeature.h"
#import "SPTFeature.h"
#import "UIPopoverControllerDelegate.h"

@class NSString, SPTAllocationContext, SPTPlaylistOfflineImageManager, SPTPopoverController;

@interface PlaylistFeatureImplementation : NSObject <UIPopoverControllerDelegate, SPTFeature, PlaylistFeature>
{
    id <BaseFeature> _baseUI;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <ShuffleFeature> _shuffleFeature;
    id <RadioFeature> _radioFeature;
    id <CollectionFeature> _collectionFeature;
    id <SPTAudioTouchFeature> _audioTouch;
    id <SPTShareFeature> _shareFeature;
    id <SPTPlayerFeature> _playerFeature;
    id <SPTTinkerbellFeature> _tinkerbellFeature;
    id <SPTPromotedContentFeature> _promotedContentFeature;
    SPTPlaylistOfflineImageManager *_offlineImageManager;
    SPTPopoverController *_addToPlaylistPopover;
}

+ (id)featureDependencies;
+ (id)featureIdentifier;
@property(retain, nonatomic) SPTPopoverController *addToPlaylistPopover; // @synthesize addToPlaylistPopover=_addToPlaylistPopover;
@property(retain, nonatomic) SPTPlaylistOfflineImageManager *offlineImageManager; // @synthesize offlineImageManager=_offlineImageManager;
@property(nonatomic) __weak id <SPTPromotedContentFeature> promotedContentFeature; // @synthesize promotedContentFeature=_promotedContentFeature;
@property(nonatomic) __weak id <SPTTinkerbellFeature> tinkerbellFeature; // @synthesize tinkerbellFeature=_tinkerbellFeature;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <SPTShareFeature> shareFeature; // @synthesize shareFeature=_shareFeature;
@property(nonatomic) __weak id <SPTAudioTouchFeature> audioTouch; // @synthesize audioTouch=_audioTouch;
@property(nonatomic) __weak id <CollectionFeature> collectionFeature; // @synthesize collectionFeature=_collectionFeature;
@property(nonatomic) __weak id <RadioFeature> radioFeature; // @synthesize radioFeature=_radioFeature;
@property(nonatomic) __weak id <ShuffleFeature> shuffleFeature; // @synthesize shuffleFeature=_shuffleFeature;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(nonatomic) __weak id <BaseFeature> baseUI; // @synthesize baseUI=_baseUI;
- (void).cxx_destruct;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (id)provideAddToPlaylistViewControllerWithTrackURLs:(id)arg1 defaultPlaylistName:(id)arg2;
- (void)presentAddToPlaylistViewControllerWithTrackURLs:(id)arg1 defaultPlaylistName:(id)arg2 senderView:(id)arg3;
- (void)unload;
- (id)providePlaylistFolderViewController:(id)arg1;
- (id)providePlaylistRootViewController;
- (id)providePlaylistRootViewController:(id)arg1;
- (id)providePlaylistViewController:(id)arg1;
- (void)load;
- (void)configureWithFeatures:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

