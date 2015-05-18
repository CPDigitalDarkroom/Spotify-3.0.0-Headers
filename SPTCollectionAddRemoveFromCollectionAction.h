//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPAction.h"

#import "UIAlertViewDelegate.h"

@class NSObject<SPTCollection>, NSString, NSURL, SPTProgressView;

@interface SPTCollectionAddRemoveFromCollectionAction : SPAction <UIAlertViewDelegate>
{
    BOOL _wasInCollection;
    NSObject<SPTCollection> *_collection;
    id <CollectionFeature> _collectionFeature;
    SPTProgressView *_progressView;
    SPTCollectionAddRemoveFromCollectionAction *_alertActionRetain;
    NSURL *_link;
}

@property(retain, nonatomic) NSURL *link; // @synthesize link=_link;
@property(retain, nonatomic) SPTCollectionAddRemoveFromCollectionAction *alertActionRetain; // @synthesize alertActionRetain=_alertActionRetain;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(readonly, nonatomic) BOOL wasInCollection; // @synthesize wasInCollection=_wasInCollection;
@property(retain, nonatomic) id <CollectionFeature> collectionFeature; // @synthesize collectionFeature=_collectionFeature;
@property(retain, nonatomic) NSObject<SPTCollection> *collection; // @synthesize collection=_collection;
- (void).cxx_destruct;
- (id)image;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)execute:(id)arg1;
- (int)style;
- (id)logEventName;
- (id)title;
- (id)initWithLink:(id)arg1 collectionFeature:(id)arg2 logContext:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

