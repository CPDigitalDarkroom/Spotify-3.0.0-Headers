//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSString, NSTimer, UIImageView, UILabel, UIProgressView;

@interface GaiaRemoteDeviceVolumeOverlayViewController : UIViewController
{
    UILabel *_deviceNameLabel;
    UIImageView *_volumeSymbolImageView;
    UIProgressView *_volumeLevelView;
    NSTimer *_hideTimer;
}

+ (id)keyPathsForValuesAffectingLabel;
+ (id)keyPathsForValuesAffectingValue;
@property(retain, nonatomic) NSTimer *hideTimer; // @synthesize hideTimer=_hideTimer;
@property(retain, nonatomic) UIProgressView *volumeLevelView; // @synthesize volumeLevelView=_volumeLevelView;
@property(retain, nonatomic) UIImageView *volumeSymbolImageView; // @synthesize volumeSymbolImageView=_volumeSymbolImageView;
@property(retain, nonatomic) UILabel *deviceNameLabel; // @synthesize deviceNameLabel=_deviceNameLabel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)hideTimerDidPop:(id)arg1;
- (void)hide:(BOOL)arg1;
- (void)showForDefaultDuration;
- (void)viewDidLayoutSubviews;
- (struct CGRect)frameForLabel:(id)arg1;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)alignWithDeviceOrientation:(BOOL)arg1;
- (void)destroySubviews;
- (void)createSubviews;
@property(copy, nonatomic) NSString *label;
@property(nonatomic) float value;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;

@end

