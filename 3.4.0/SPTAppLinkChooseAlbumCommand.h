//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTAppLinkExternalContentPresentation.h"

#import "SPTAppLinkCommand.h"

@class NSString;

@interface SPTAppLinkChooseAlbumCommand : SPTAppLinkExternalContentPresentation <SPTAppLinkCommand>
{
    id <SPTAppLinkCommandDelegate> delegate;
    id <SPTExternalContentItem> _albumsItem;
}

@property(retain, nonatomic) id <SPTExternalContentItem> albumsItem; // @synthesize albumsItem=_albumsItem;
@property(nonatomic) __weak id <SPTAppLinkCommandDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)triggerCommandWithAppLink:(id)arg1 useVoicePrompts:(_Bool)arg2;
- (id)localizedVoiceCommandsWithPlaybackStatus:(id)arg1;
- (id)localizedTitleWithPlaybackStatus:(id)arg1;
- (void)wasAddedToDeviceWithPlaybackStatus:(id)arg1;
- (_Bool)availableWithPlaybackStatus:(id)arg1 appLink:(id)arg2;
@property(readonly, nonatomic) unsigned long long commandID;
- (id)initWithAlbumsItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

