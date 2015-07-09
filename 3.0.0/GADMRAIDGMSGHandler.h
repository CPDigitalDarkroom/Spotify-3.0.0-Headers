//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADGMSGHandler.h"

#import "GADMRAIDPictureDelegate.h"

@class GADOpener, NSMutableDictionary, NSString;

@interface GADMRAIDGMSGHandler : GADGMSGHandler <GADMRAIDPictureDelegate>
{
    GADOpener *_opener;
    NSMutableDictionary *_pendingPictureDownloads;
}

+ (id)subActionBlockDictionary;
+ (id)actionBlockDictionary;
- (void).cxx_destruct;
- (void)MRAIDPicture:(id)arg1 failedToStorePictureWithURL:(id)arg2 message:(id)arg3;
- (void)MRAIDPicture:(id)arg1 didStorePictureWithURL:(id)arg2;
- (void)actionSetOrientationProperties:(id)arg1;
- (void)actionCreateCalendarEvent:(id)arg1;
- (void)actionStorePicture:(id)arg1;
- (void)actionResize:(id)arg1;
- (void)didReceiveMRAIDNotification:(id)arg1;
- (id)initWithOpener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
