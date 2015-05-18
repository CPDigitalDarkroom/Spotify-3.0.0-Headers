//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADSlotAdEventDelegate.h"

@class GADSlot, NSString;

@interface GADAdPreprocessor : NSObject <GADSlotAdEventDelegate>
{
    GADSlot *_slot;
    CDUnknownBlockType _completionHandler;
    NSString *_nativeAdJSON;
}

- (void).cxx_destruct;
- (void)slotFinishedLoadingAdContent:(id)arg1;
- (void)slot:(id)arg1 didFailToLoadAdContentWithError:(id)arg2;
- (void)handlePreprocessorNotification:(id)arg1;
- (void)preprocessNativeAdJSON:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithAdUnitID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

