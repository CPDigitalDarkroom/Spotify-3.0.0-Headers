//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTExternalContentProvider.h"

@class NSMutableDictionary, NSString, SPSession, SPTAudioSessionActivator, SPTExternalPlaybackControl;

@interface SPTExternalContentProviderImplementation : NSObject <SPTExternalContentProvider>
{
    SPTExternalPlaybackControl *_playbackController;
    id <SPTLocalSettings> _localSettings;
    SPSession *_session;
    NSMutableDictionary *_rootContentStorage;
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    SPTAudioSessionActivator *_audioSessionActivator;
}

@property(retain, nonatomic) SPTAudioSessionActivator *audioSessionActivator; // @synthesize audioSessionActivator=_audioSessionActivator;
@property(retain, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(retain, nonatomic) NSMutableDictionary *rootContentStorage; // @synthesize rootContentStorage=_rootContentStorage;
@property(nonatomic) __weak SPSession *session; // @synthesize session=_session;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) SPTExternalPlaybackControl *playbackController; // @synthesize playbackController=_playbackController;
- (void).cxx_destruct;
- (void)autoplayWithSuccess:(CDUnknownBlockType)arg1;
- (id)savedContentItemWithLabel:(id)arg1;
- (_Bool)saveContentItem:(id)arg1 withLabel:(id)arg2;
- (id)rootContentItemForContentIdentifier:(id)arg1;
- (id)availableExternalContentIdentifiers;
- (void)registerRootContentItem:(id)arg1 forIdentifier:(id)arg2;
- (id)initWithPlaybackController:(id)arg1 localSettings:(id)arg2 session:(id)arg3 imageLoaderFactory:(id)arg4;
- (void)tearDownAudioSessionActivator;
- (void)setUpAudioSessionActivator;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

