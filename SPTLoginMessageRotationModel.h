//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SPTLoginMessageRotationModelWeakTargetTimer;

@interface SPTLoginMessageRotationModel : NSObject
{
    int _currentIndex;
    id <SPTLoginMessageRotationModelDelegate> _delegate;
    NSArray *_items;
    SPTLoginMessageRotationModelWeakTargetTimer *_animationTimer;
    SPTLoginMessageRotationModelWeakTargetTimer *_interruptionTimer;
}

+ (id)localizedMessageStringForItem:(id)arg1;
+ (id)localizedTitleStringForItem:(id)arg1;
@property(retain, nonatomic) SPTLoginMessageRotationModelWeakTargetTimer *interruptionTimer; // @synthesize interruptionTimer=_interruptionTimer;
@property(retain, nonatomic) SPTLoginMessageRotationModelWeakTargetTimer *animationTimer; // @synthesize animationTimer=_animationTimer;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <SPTLoginMessageRotationModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int currentIndex; // @synthesize currentIndex=_currentIndex;
- (void).cxx_destruct;
- (void)skipToPrevious;
- (void)skipToNext;
- (double)interruptionInterval;
- (double)animationInterval;
- (void)interruptionTimerFired:(id)arg1;
- (void)animationTimerFired:(id)arg1;
- (void)selectNextItem;
- (void)interruptAnimating;
- (void)stopAnimating;
- (void)startAnimating;
- (id)timerWithInterval:(double)arg1 action:(SEL)arg2 repeats:(BOOL)arg3;
- (id)iconNameForName:(id)arg1;
- (id)imageNameForName:(id)arg1;
- (id)currentName;
- (id)currentIconName;
- (id)currentLocalizedMessage;
- (id)currentLocalizedTitle;
- (id)currentImageName;
- (int)countOfMessages;
- (void)dealloc;
- (id)init;

@end

