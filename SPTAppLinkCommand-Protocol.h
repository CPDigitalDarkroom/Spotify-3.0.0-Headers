//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, SPTAppLinkController, SPTExternalPlaybackStatus;

@protocol SPTAppLinkCommand <NSObject>
@property(readonly, nonatomic) unsigned int commandID;
@property(nonatomic) __weak id <SPTAppLinkCommandDelegate> delegate;
- (NSArray *)localizedVoiceCommandsWithPlaybackStatus:(SPTExternalPlaybackStatus *)arg1;
- (NSString *)localizedTitleWithPlaybackStatus:(SPTExternalPlaybackStatus *)arg1;
- (void)wasAddedToDeviceWithPlaybackStatus:(SPTExternalPlaybackStatus *)arg1;
- (BOOL)availableWithPlaybackStatus:(SPTExternalPlaybackStatus *)arg1 appLink:(SPTAppLinkController *)arg2;
- (void)triggerCommandWithAppLink:(SPTAppLinkController *)arg1 useVoicePrompts:(BOOL)arg2;
@end

