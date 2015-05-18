//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"

@class NSMutableSet, NSString;

@interface SPTGestureSynchronizer : NSObject <UIGestureRecognizerDelegate>
{
    id <UIGestureRecognizerDelegate> _delegate;
    NSMutableSet *_otherGestureRecognizers;
}

@property(retain, nonatomic) NSMutableSet *otherGestureRecognizers; // @synthesize otherGestureRecognizers=_otherGestureRecognizers;
@property(nonatomic) __weak id <UIGestureRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)clearOtherGestureRecognizers;
- (void)cancelOtherGestureRecognizers;
- (void)addOtherGestureRecognizer:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

