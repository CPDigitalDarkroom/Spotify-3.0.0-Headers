//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDate, UIColor;

@interface FXBlurView : UIView
{
    BOOL _blurEnabled;
    BOOL _dynamic;
    BOOL _iterationsSet;
    BOOL _blurRadiusSet;
    BOOL _dynamicSet;
    BOOL _blurEnabledSet;
    unsigned int _iterations;
    UIColor *_tintColor;
    UIView *_underlyingView;
    NSDate *_lastUpdate;
    double _updateInterval;
}

+ (Class)layerClass;
+ (void)setUpdatesDisabled;
+ (void)setUpdatesEnabled;
+ (void)setBlurEnabled:(BOOL)arg1;
@property(retain, nonatomic) NSDate *lastUpdate; // @synthesize lastUpdate=_lastUpdate;
@property(nonatomic) BOOL blurEnabledSet; // @synthesize blurEnabledSet=_blurEnabledSet;
@property(nonatomic) BOOL dynamicSet; // @synthesize dynamicSet=_dynamicSet;
@property(nonatomic) BOOL blurRadiusSet; // @synthesize blurRadiusSet=_blurRadiusSet;
@property(nonatomic) BOOL iterationsSet; // @synthesize iterationsSet=_iterationsSet;
@property(nonatomic) __weak UIView *underlyingView; // @synthesize underlyingView=_underlyingView;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) double updateInterval; // @synthesize updateInterval=_updateInterval;
@property(nonatomic) unsigned int iterations; // @synthesize iterations=_iterations;
@property(nonatomic, getter=isDynamic) BOOL dynamic; // @synthesize dynamic=_dynamic;
@property(nonatomic, getter=isBlurEnabled) BOOL blurEnabled; // @synthesize blurEnabled=_blurEnabled;
- (void).cxx_destruct;
- (void)updateAsynchronously:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setLayerContents:(id)arg1;
- (id)blurredSnapshot:(id)arg1 radius:(float)arg2;
- (void)restoreSuperviewAfterSnapshot:(id)arg1;
- (id)prepareUnderlyingViewForSnapshot;
- (id)snapshotOfUnderlyingView;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)displayLayer:(id)arg1;
- (BOOL)shouldUpdate;
- (void)setNeedsDisplay;
- (void)schedule;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (id)blurPresentationLayer;
- (id)blurLayer;
- (id)underlyingLayer;
@property(nonatomic) float blurRadius;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setUp;

@end
