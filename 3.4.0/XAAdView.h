//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "XAAdContainerDelegate.h"

@class NSArray, NSObject<XAAdViewDelegate>, NSString, NSURL, UIImage, UIViewController, XAAdContainer, XAAdImage, XAAdRequest;

@interface XAAdView : UIView <XAAdContainerDelegate>
{
    _Bool _expired;
    _Bool _availableForDisplay;
    _Bool _addedToView;
    _Bool _statusbarHidden;
    NSString *_adName;
    NSArray *_actions;
    NSString *_impressionId;
    XAAdRequest *_request;
    UIImage *_image;
    NSURL *_imageURL;
    NSString *_nowPlayingText;
    UIViewController *_rootViewController;
    UIViewController *_interstitialViewController;
    UIView *_containingView;
    XAAdContainer *_adContainer;
    NSObject<XAAdViewDelegate> *_delegate;
    XAAdImage *_adImage;
}

@property(nonatomic) _Bool statusbarHidden; // @synthesize statusbarHidden=_statusbarHidden;
@property(retain, nonatomic) XAAdImage *adImage; // @synthesize adImage=_adImage;
@property(nonatomic) NSObject<XAAdViewDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool addedToView; // @synthesize addedToView=_addedToView;
@property(retain, nonatomic) XAAdContainer *adContainer; // @synthesize adContainer=_adContainer;
@property(retain, nonatomic) UIView *containingView; // @synthesize containingView=_containingView;
@property(retain, nonatomic) UIViewController *interstitialViewController; // @synthesize interstitialViewController=_interstitialViewController;
@property(retain, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain, nonatomic) NSString *nowPlayingText; // @synthesize nowPlayingText=_nowPlayingText;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) _Bool availableForDisplay; // @synthesize availableForDisplay=_availableForDisplay;
@property(readonly, nonatomic) _Bool expired; // @synthesize expired=_expired;
@property(retain, nonatomic) XAAdRequest *request; // @synthesize request=_request;
@property(readonly, retain, nonatomic) NSString *impressionId; // @synthesize impressionId=_impressionId;
@property(readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(readonly, retain, nonatomic) NSString *adName; // @synthesize adName=_adName;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqualToAd:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)cancelButtonTapped;
- (void)didMoveToWindow;
- (void)willMoveToSuperview:(id)arg1;
- (void)didMoveToSuperview;
- (void)displayCancelButton;
- (void)onFinishedRecording;
- (void)updateDecibels:(float)arg1;
- (void)onRecording;
- (void)unload;
- (void)dismissWithAnimation:(_Bool)arg1 dismissalBlock:(CDUnknownBlockType)arg2;
- (void)displayAsInTileTuner:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)displayAsInterstitial:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)displayWithAnimation:(_Bool)arg1;
- (void)setImageURL:(id)arg1;
- (void)setAvailableForDisplay:(_Bool)arg1;
@property(readonly, nonatomic) _Bool displayed;
- (void)updateAdImage:(id)arg1;
- (void)loadImage:(id)arg1;
- (void)viewSwiped:(id)arg1;
- (void)viewTapped:(id)arg1;
- (id)initWithAdName:(id)arg1 impressionId:(id)arg2 adImage:(id)arg3 nowPlayingText:(id)arg4 actions:(id)arg5;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)reset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
