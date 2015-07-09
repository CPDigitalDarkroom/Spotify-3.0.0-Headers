//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SPTThemableView.h"

@class CAShapeLayer, NSString, SPTTheme, UIButton, UILabel;

@interface SPTTinkerbellTooltipView : UIView <SPTThemableView>
{
    BOOL _animating;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    int _arrowDirection;
    float _arrowCenterX;
    UIButton *_closeButton;
    SPTTheme *_theme;
    CAShapeLayer *_boxLayer;
    CAShapeLayer *_arrowLayer;
    UILabel *_messageLabel;
    id <NSObject> _themeSettingsChangeNotificationIdentifier;
    struct UIEdgeInsets _contentEdgeInsets;
}

@property(retain, nonatomic) id <NSObject> themeSettingsChangeNotificationIdentifier; // @synthesize themeSettingsChangeNotificationIdentifier=_themeSettingsChangeNotificationIdentifier;
@property(nonatomic, getter=isAnimating) BOOL animating; // @synthesize animating=_animating;
@property(readonly, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(readonly, nonatomic) CAShapeLayer *arrowLayer; // @synthesize arrowLayer=_arrowLayer;
@property(readonly, nonatomic) CAShapeLayer *boxLayer; // @synthesize boxLayer=_boxLayer;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) float arrowCenterX; // @synthesize arrowCenterX=_arrowCenterX;
@property(nonatomic) int arrowDirection; // @synthesize arrowDirection=_arrowDirection;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *message;
- (void)resetAnimations;
- (void)hideAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showMessageLabelAnimatedCompletion:(CDUnknownBlockType)arg1;
- (void)showCloseButtonAnimatedCmpletion:(CDUnknownBlockType)arg1;
- (void)performTooltipArrowAnimationInDirection:(int)arg1;
- (void)performTooltipBoxAnimationInDirection:(int)arg1;
- (void)showAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)applyThemeLayout;
- (void)updateTooltipShapes;
- (struct CGPoint)calculateTooltipArrowPosition;
- (struct UIEdgeInsets)contentEdgeInsetsAdjustedForArrowTip;
@property(readonly, nonatomic) struct CGRect contentBounds;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)dealloc;
- (id)initWithTheme:(id)arg1 shouldHideCloseButton:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
