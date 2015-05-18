//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAGradientLayer, CALayer, CAShapeLayer;

@interface SPTGaiaIconView : UIView
{
    int _currentState;
    CAShapeLayer *_arc;
    CAShapeLayer *_speaker;
    CAShapeLayer *_soundWave1;
    CAShapeLayer *_soundWave2;
    CAShapeLayer *_soundWave3;
    CALayer *_pathLayer;
    CAGradientLayer *_gradientLayer;
    unsigned int _activityAnimationRepeatCount;
}

@property(nonatomic) unsigned int activityAnimationRepeatCount; // @synthesize activityAnimationRepeatCount=_activityAnimationRepeatCount;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) CALayer *pathLayer; // @synthesize pathLayer=_pathLayer;
@property(retain, nonatomic) CAShapeLayer *soundWave3; // @synthesize soundWave3=_soundWave3;
@property(retain, nonatomic) CAShapeLayer *soundWave2; // @synthesize soundWave2=_soundWave2;
@property(retain, nonatomic) CAShapeLayer *soundWave1; // @synthesize soundWave1=_soundWave1;
@property(retain, nonatomic) CAShapeLayer *speaker; // @synthesize speaker=_speaker;
@property(retain, nonatomic) CAShapeLayer *arc; // @synthesize arc=_arc;
@property(nonatomic) int state; // @synthesize state=_currentState;
- (void).cxx_destruct;
- (void)setupSoundWave3;
- (void)setupSoundWave2;
- (void)setupSoundWave1;
- (void)setupSpeaker;
- (void)setupArc;
- (void)removeAllAnimations;
- (void)performShakeAnimationWithCallback:(CDUnknownBlockType)arg1;
- (void)stopActivityAnimation:(BOOL)arg1;
- (void)startActivityAnimation;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)startActivityAnimationWithRepeatCount:(unsigned int)arg1 beginTime:(double)arg2;
- (void)showArcAndSoundWaves:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setupStyleForState:(int)arg1;
- (int)styleForState:(int)arg1;
- (void)setState:(int)arg1 animated:(BOOL)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (id)init;

@end
