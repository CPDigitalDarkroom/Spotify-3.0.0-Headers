//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBCacheDescriptor.h"

#import "FBFrictionlessDialogSupportDelegate.h"
#import "FBWebDialogsDelegate.h"

@class FBFrictionlessRequestSettings, NSArray, NSString;

@interface FBFrictionlessRecipientCache : FBCacheDescriptor <FBFrictionlessDialogSupportDelegate, FBWebDialogsDelegate>
{
    _Bool _frictionlessShouldMakeViewInvisible;
    FBFrictionlessRequestSettings *_frictionlessSettings;
}

@property(retain, nonatomic) FBFrictionlessRequestSettings *frictionlessSettings; // @synthesize frictionlessSettings=_frictionlessSettings;
@property(nonatomic) _Bool frictionlessShouldMakeViewInvisible; // @synthesize frictionlessShouldMakeViewInvisible=_frictionlessShouldMakeViewInvisible;
- (void)webDialogsWillPresentDialog:(id)arg1 parameters:(id)arg2 session:(id)arg3;
- (void)prefetchAndCacheForSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)prefetchAndCacheForSession:(id)arg1;
- (_Bool)areFrictionlessRecipients:(id)arg1;
- (_Bool)isFrictionlessRecipient:(id)arg1;
@property(copy, nonatomic) NSArray *recipientIDs;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

