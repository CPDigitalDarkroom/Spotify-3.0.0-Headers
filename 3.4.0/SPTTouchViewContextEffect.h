//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTTouchViewEffect.h"

@class NSArray, NSString, UICollectionViewCell, UITableViewCell;

@interface SPTTouchViewContextEffect : NSObject <SPTTouchViewEffect>
{
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    UITableViewCell *_previousTableViewCell;
    UICollectionViewCell *_previousCollectionViewCell;
    NSArray *_preloadedSamples;
}

@property(retain, nonatomic) NSArray *preloadedSamples; // @synthesize preloadedSamples=_preloadedSamples;
@property(nonatomic) __weak UICollectionViewCell *previousCollectionViewCell; // @synthesize previousCollectionViewCell=_previousCollectionViewCell;
@property(nonatomic) __weak UITableViewCell *previousTableViewCell; // @synthesize previousTableViewCell=_previousTableViewCell;
@property(retain, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
- (void).cxx_destruct;
- (void)viewEngine:(id)arg1 didEndInteractionAtPosition:(struct CGPoint)arg2 nodes:(id)arg3;
- (void)viewEngine:(id)arg1 didMoveInteractionToPosition:(struct CGPoint)arg2 nodes:(id)arg3;
- (void)viewEngine:(id)arg1 didBeginInteractionAtPosition:(struct CGPoint)arg2 nodes:(id)arg3;
- (void)viewEngine:(id)arg1 didCancelInteractionAtPosition:(struct CGPoint)arg2 nodes:(id)arg3;
- (void)viewEngine:(id)arg1 willBeginInteractionAtPosition:(struct CGPoint)arg2 nodes:(id)arg3;
- (void)viewEngine:(id)arg1 unregisterNode:(id)arg2;
- (_Bool)viewEngine:(id)arg1 canBeginInteractionAtPosition:(struct CGPoint)arg2 nodes:(id)arg3;
- (unsigned long long)maximumNumberOfPreviews;
- (void)resetNode:(id)arg1;
- (void)updateNodes:(id)arg1 position:(struct CGPoint)arg2 engine:(id)arg3 initial:(_Bool)arg4;
- (void)hideNode:(id)arg1;
- (void)setZPosition:(double)arg1 forCell:(id)arg2 superclass:(Class)arg3;
- (void)bringViewToFront:(id)arg1;
- (void)showOrUpdateNode:(id)arg1 position:(struct CGPoint)arg2 engine:(id)arg3;
- (id)createContextViewControllerWithPreviews:(id)arg1 audioEngine:(id)arg2 image:(id)arg3;
- (id)initWithImageLoaderFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

