//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSObject<XAAdContainerDelegate>, UIBezierPath, UIButton, UIColor, UIImage, UIImageView, XKMeterView;

@interface XAAdContainer : UIView
{
    _Bool _cancelButtonHidden;
    _Bool _displayMicrophoneAnimationOverlay;
    _Bool _microphoneAnimationHidden;
    UIBezierPath *_microphoneBezierPath;
    UIColor *_microphoneBackgroundColor;
    UIColor *_microphoneProgressColor;
    UIImage *_adImage;
    UIButton *_cancelButton;
    NSObject<XAAdContainerDelegate> *_delegate;
    long long _cropLocation;
    XKMeterView *_microphoneMeterView;
    UIImage *_customMicrophoneImage;
    UIImageView *_adImageView;
    UIView *_microphoneImageView;
    struct CGRect _microphoneFrame;
    struct CGRect _containingFrame;
    struct CGRect _customMicrophoneFrame;
}

@property(retain, nonatomic) UIView *microphoneImageView; // @synthesize microphoneImageView=_microphoneImageView;
@property(retain, nonatomic) UIImageView *adImageView; // @synthesize adImageView=_adImageView;
@property(retain, nonatomic) UIImage *customMicrophoneImage; // @synthesize customMicrophoneImage=_customMicrophoneImage;
@property(retain, nonatomic) XKMeterView *microphoneMeterView; // @synthesize microphoneMeterView=_microphoneMeterView;
@property(nonatomic) long long cropLocation; // @synthesize cropLocation=_cropLocation;
@property(nonatomic) struct CGRect customMicrophoneFrame; // @synthesize customMicrophoneFrame=_customMicrophoneFrame;
@property(nonatomic) struct CGRect containingFrame; // @synthesize containingFrame=_containingFrame;
@property(retain, nonatomic) NSObject<XAAdContainerDelegate> *delegate; // @synthesize delegate=_delegate;
@property(readonly, retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIImage *adImage; // @synthesize adImage=_adImage;
@property(retain, nonatomic) UIColor *microphoneProgressColor; // @synthesize microphoneProgressColor=_microphoneProgressColor;
@property(retain, nonatomic) UIColor *microphoneBackgroundColor; // @synthesize microphoneBackgroundColor=_microphoneBackgroundColor;
@property(retain, nonatomic) UIBezierPath *microphoneBezierPath; // @synthesize microphoneBezierPath=_microphoneBezierPath;
@property(readonly, nonatomic) struct CGRect microphoneFrame; // @synthesize microphoneFrame=_microphoneFrame;
@property(nonatomic) _Bool microphoneAnimationHidden; // @synthesize microphoneAnimationHidden=_microphoneAnimationHidden;
@property(nonatomic) _Bool displayMicrophoneAnimationOverlay; // @synthesize displayMicrophoneAnimationOverlay=_displayMicrophoneAnimationOverlay;
@property(nonatomic) _Bool cancelButtonHidden; // @synthesize cancelButtonHidden=_cancelButtonHidden;
- (void).cxx_destruct;
- (struct CGPoint)determineOriginFromRootFrameCenter:(struct CGPoint)arg1 andSize:(struct CGSize)arg2;
- (struct CGRect)determineContainerFramewithImage:(id)arg1 forRootFrame:(struct CGRect)arg2;
- (void)cancelTapped:(id)arg1;
@property float microphoneLevel;
- (void)setupSubViews;
- (id)initWithAdImage:(id)arg1 microphoneImage:(id)arg2 microphoneBezierPath:(id)arg3 microphoneFrame:(struct CGRect)arg4 microphoneProgressColor:(id)arg5 microphoneBackgroundColor:(id)arg6 cropLocation:(long long)arg7 withinContainingFrame:(struct CGRect)arg8;

@end

