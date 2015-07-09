//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPContentInsetViewController.h"
#import "SPObjectRepresentation.h"
#import "SPTLocalSettingsObserver.h"

@class NSString, SPPlaylistContainer, SPTCollectionSegmentedViewController, SPTrackContext;

@interface SPTCollectionOverviewViewController : UIViewController <SPObjectRepresentation, SPContentInsetViewController, SPTLocalSettingsObserver>
{
    id <SPTCollectionInternal> _collection;
    SPTrackContext *_context;
    unsigned long long _restoredSelectedSegmentIndex;
    SPTCollectionSegmentedViewController *_segmentedViewController;
    id <SPTITunesLibraryManager> _iTunesLibraryManager;
    id <SPTLocalSettings> _localSettings;
    SPPlaylistContainer *_playlistContainer;
}

@property(retain, nonatomic) SPPlaylistContainer *playlistContainer; // @synthesize playlistContainer=_playlistContainer;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) id <SPTITunesLibraryManager> iTunesLibraryManager; // @synthesize iTunesLibraryManager=_iTunesLibraryManager;
@property(retain, nonatomic) SPTCollectionSegmentedViewController *segmentedViewController; // @synthesize segmentedViewController=_segmentedViewController;
- (void).cxx_destruct;
- (void)iTunesManagerModalCancel;
- (void)iTunesManagerModalAccept;
- (void)localSettingsDidChange:(id)arg1;
- (void)sp_updateContentInsets;
- (unsigned long long)startingSelectedSegmentIndex;
- (id)objectRepresentation;
- (_Bool)restoreWithObjectRepresentation:(id)arg1;
- (id)viewEventURI;
- (id)URL;
@property(readonly, nonatomic) _Bool shouldShowiTunesManagerModal;
- (void)showiTunesManagerModal;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)navigationItem;
- (id)initWithCollection:(id)arg1 iTunesLibraryManager:(id)arg2 localSettings:(id)arg3 playlistContainer:(id)arg4;

// Remaining properties
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
