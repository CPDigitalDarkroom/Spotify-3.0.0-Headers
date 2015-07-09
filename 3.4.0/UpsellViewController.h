//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPViewController.h"

@class NSString, UIView, UIViewController, UIWindow;

@interface UpsellViewController : SPViewController
{
    _Bool _presentationExclusive;
    int _presentationPriority;
    float _containerHeight;
    float _containerWidth;
    NSString *_logSourceString;
    NSString *_logContextString;
    UIView *_containerView;
    UIWindow *_window;
    id <SPTLogCenterProtocol> _logCenter;
    UIViewController *_backgroundContext;
    long long _backgroundContextTintAdjustmentMode;
}

@property(nonatomic) long long backgroundContextTintAdjustmentMode; // @synthesize backgroundContextTintAdjustmentMode=_backgroundContextTintAdjustmentMode;
@property(nonatomic) __weak UIViewController *backgroundContext; // @synthesize backgroundContext=_backgroundContext;
@property(retain) id <SPTLogCenterProtocol> logCenter; // @synthesize logCenter=_logCenter;
@property(retain) UIWindow *window; // @synthesize window=_window;
@property(nonatomic) float containerWidth; // @synthesize containerWidth=_containerWidth;
@property(nonatomic) float containerHeight; // @synthesize containerHeight=_containerHeight;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) _Bool presentationExclusive; // @synthesize presentationExclusive=_presentationExclusive;
@property(nonatomic) int presentationPriority; // @synthesize presentationPriority=_presentationPriority;
@property(copy, nonatomic) NSString *logContextString; // @synthesize logContextString=_logContextString;
@property(copy, nonatomic) NSString *logSourceString; // @synthesize logSourceString=_logSourceString;
- (void).cxx_destruct;
- (float)calculateRemainingHeight:(id)arg1;
- (void)calculateContentSizeAndResizeIfNeeded;
- (void)loadContainerContent;
- (void)createContainerView;
- (id)viewEventURI;
- (void)viewDidAppear:(_Bool)arg1;
- (void)animateOut:(CDUnknownBlockType)arg1;
- (void)animateIn:(CDUnknownBlockType)arg1;
- (_Bool)shouldPresentViewController:(id)arg1;
- (void)closeAnimated;
- (void)close:(id)arg1 animated:(_Bool)arg2;
- (void)show:(id)arg1 animated:(_Bool)arg2;
- (void)viewDidLoad;
- (id)initWithLogCenter:(id)arg1 withFrame:(struct CGRect)arg2;
- (id)initWithLogCenter:(id)arg1;

@end
