//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPAction.h"

#import "UIAlertViewDelegate.h"

@class NSObject<SPTCollectionInternal>, NSString, NSURL, SPTProgressView;

@interface SPTCollectionCompleteAlbumAction : SPAction <UIAlertViewDelegate>
{
    NSObject<SPTCollectionInternal> *_collection;
    SPTProgressView *_progressView;
    NSURL *_link;
}

@property(retain, nonatomic) NSURL *link; // @synthesize link=_link;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) NSObject<SPTCollectionInternal> *collection; // @synthesize collection=_collection;
- (void).cxx_destruct;
- (id)image;
- (id)execute:(id)arg1;
- (int)style;
- (id)logEventName;
- (id)title;
- (id)initWithLink:(id)arg1 collection:(id)arg2 logContext:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
