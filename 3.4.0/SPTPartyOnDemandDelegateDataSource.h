//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTImageLoaderDelegate.h"
#import "SPTPartyTableViewDelegateDataSource.h"

@class NSString, SPTLogCenter, SPTPartyVC, SPTPartyViewModel, SPTTableView;

@interface SPTPartyOnDemandDelegateDataSource : NSObject <SPTImageLoaderDelegate, SPTPartyTableViewDelegateDataSource>
{
    SPTPartyVC *_partyVC;
    SPTTableView *_tableView;
    SPTLogCenter *_logCenter;
    SPTPartyViewModel *_viewModel;
    id <SPTImageLoader> _imageLoader;
    id <SPTAudioTouch> _audioTouch;
    id <SPContextMenuFeature> _contextMenuFeature;
}

@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(retain, nonatomic) id <SPTAudioTouch> audioTouch; // @synthesize audioTouch=_audioTouch;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(nonatomic) __weak SPTPartyViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) SPTLogCenter *logCenter; // @synthesize logCenter=_logCenter;
@property(nonatomic) __weak SPTTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak SPTPartyVC *partyVC; // @synthesize partyVC=_partyVC;
- (void).cxx_destruct;
- (id)accessoryViewForIndexPath:(id)arg1;
- (void)loadImagesForCell:(id)arg1 track:(id)arg2 indexPath:(id)arg3;
- (_Bool)shouldShowNextHeader;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)tableViewCellContextMenuButtonTapped:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1 imageLoader:(id)arg2 audioTouch:(id)arg3 contextMenuFeature:(id)arg4 logCenter:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

