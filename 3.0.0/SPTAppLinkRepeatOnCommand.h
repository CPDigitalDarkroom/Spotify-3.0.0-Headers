//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAppLinkCommand.h"

@class NSString, SPTExternalPlaybackControl;

@interface SPTAppLinkRepeatOnCommand : NSObject <SPTAppLinkCommand>
{
    id <SPTAppLinkCommandDelegate> delegate;
    SPTExternalPlaybackControl *_playControl;
}

@property(retain, nonatomic) SPTExternalPlaybackControl *playControl; // @synthesize playControl=_playControl;
@property(nonatomic) __weak id <SPTAppLinkCommandDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)triggerCommandWithAppLink:(id)arg1 useVoicePrompts:(BOOL)arg2;
- (id)localizedVoiceCommandsWithPlaybackStatus:(id)arg1;
- (id)localizedTitleWithPlaybackStatus:(id)arg1;
- (void)wasAddedToDeviceWithPlaybackStatus:(id)arg1;
- (BOOL)availableWithPlaybackStatus:(id)arg1 appLink:(id)arg2;
@property(readonly, nonatomic) unsigned int commandID;
- (id)initWithPlaybackControl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

