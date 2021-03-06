//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPContextMenuFeature.h"
#import "SPTFeature.h"

@class NSString, SPTAllocationContext;

@interface SPContextMenuFeatureImplementation : NSObject <SPTFeature, SPContextMenuFeature>
{
    id <SPContextMenuActionsFactory> _actionsFactory;
    id <CollectionFeature> _collection;
    id <RadioFeature> _radio;
    id <UpsellFeature> _upsell;
    id <SPTPlayerFeature> _player;
    id <PlaylistFeature> _playlist;
    id <SPTShareFeature> _share;
    id <SPTSocialChartFeature> _socialChart;
    id <BaseFeature> _baseFeature;
    id <SPTRunningFeature> _running;
}

+ (id)featureDependencies;
+ (id)featureIdentifier;
@property(nonatomic) __weak id <SPTRunningFeature> running; // @synthesize running=_running;
@property(nonatomic) __weak id <BaseFeature> baseFeature; // @synthesize baseFeature=_baseFeature;
@property(nonatomic) __weak id <SPTSocialChartFeature> socialChart; // @synthesize socialChart=_socialChart;
@property(nonatomic) __weak id <SPTShareFeature> share; // @synthesize share=_share;
@property(nonatomic) __weak id <PlaylistFeature> playlist; // @synthesize playlist=_playlist;
@property(nonatomic) __weak id <SPTPlayerFeature> player; // @synthesize player=_player;
@property(nonatomic) __weak id <UpsellFeature> upsell; // @synthesize upsell=_upsell;
@property(nonatomic) __weak id <RadioFeature> radio; // @synthesize radio=_radio;
@property(nonatomic) __weak id <CollectionFeature> collection; // @synthesize collection=_collection;
@property(retain, nonatomic) id <SPContextMenuActionsFactory> actionsFactory; // @synthesize actionsFactory=_actionsFactory;
- (void).cxx_destruct;
- (id)provideViewControllerFactory;
- (id)actions;
- (id)contextMenuViewControllerIPadForTrackWithURL:(id)arg1 name:(id)arg2 imageURL:(id)arg3 artistName:(id)arg4 artistURL:(id)arg5 albumName:(id)arg6 albumURL:(id)arg7 viewURL:(id)arg8 senderView:(id)arg9 metadataTitle:(id)arg10 logContext:(id)arg11;
- (id)contextMenuViewControllerForTrackWithURL:(id)arg1 name:(id)arg2 imageURL:(id)arg3 artistName:(id)arg4 artistURL:(id)arg5 albumName:(id)arg6 albumURL:(id)arg7 viewURL:(id)arg8 metadataTitle:(id)arg9 logContext:(id)arg10;
- (id)actionsForContextMenuWithTrackURL:(id)arg1 name:(id)arg2 imageURL:(id)arg3 artistName:(id)arg4 artistURL:(id)arg5 albumName:(id)arg6 albumURL:(id)arg7 viewURL:(id)arg8 logContext:(id)arg9;
- (id)flattenArrayObject:(id)arg1;
- (void)unload;
- (void)load;
- (void)configureWithFeatures:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

