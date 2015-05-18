//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class UIButton, UIImageView, UILabel, UIRotationGestureRecognizer, UITextView;

@interface RAPILockScreenViewController : UIViewController
{
    int vehicleBrand;
    _Bool _logViewMode;
    UIImageView *_lockScreenImageView;
    UILabel *_safetyNoteLabel;
    UIButton *_skipButton;
    UITextView *_debugLogTextView;
    UIRotationGestureRecognizer *_rotationGestureRecognizer;
}

+ (id)getMiniLockScreenLogo;
+ (id)getBmwLockScreenLogo;
@property(retain) UIRotationGestureRecognizer *rotationGestureRecognizer; // @synthesize rotationGestureRecognizer=_rotationGestureRecognizer;
@property _Bool logViewMode; // @synthesize logViewMode=_logViewMode;
@property(retain) UITextView *debugLogTextView; // @synthesize debugLogTextView=_debugLogTextView;
@property(retain) UIButton *skipButton; // @synthesize skipButton=_skipButton;
@property(retain) UILabel *safetyNoteLabel; // @synthesize safetyNoteLabel=_safetyNoteLabel;
@property(retain) UIImageView *lockScreenImageView; // @synthesize lockScreenImageView=_lockScreenImageView;
- (void).cxx_destruct;
- (void)debugLogString:(id)arg1;
- (void)handlRotationGesture:(id)arg1;
- (void)onSkipButton;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithVehicleBrand:(int)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

