//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSAttributedString, SPTNowPlayingFadeMaskView, UILabel;

@interface SPTNowPlayingMarqueeLabel : UIControl
{
    BOOL _marqueeingEnabled;
    BOOL _willAnimate;
    UILabel *_label;
    SPTNowPlayingFadeMaskView *_fadeMaskView;
    double _marqueeingSpeed;
    double _restingDuration;
    struct CGPoint _leftAnchorPoint;
    struct CGPoint _rightAnchorPoint;
    struct CGPoint _centerAnchorPoint;
}

@property(nonatomic) struct CGPoint centerAnchorPoint; // @synthesize centerAnchorPoint=_centerAnchorPoint;
@property(nonatomic) struct CGPoint rightAnchorPoint; // @synthesize rightAnchorPoint=_rightAnchorPoint;
@property(nonatomic) struct CGPoint leftAnchorPoint; // @synthesize leftAnchorPoint=_leftAnchorPoint;
@property(nonatomic) BOOL willAnimate; // @synthesize willAnimate=_willAnimate;
@property(nonatomic) double restingDuration; // @synthesize restingDuration=_restingDuration;
@property(nonatomic) double marqueeingSpeed; // @synthesize marqueeingSpeed=_marqueeingSpeed;
@property(retain, nonatomic) SPTNowPlayingFadeMaskView *fadeMaskView; // @synthesize fadeMaskView=_fadeMaskView;
@property(nonatomic, getter=isMarqueeingEnabled) BOOL marqueeingEnabled; // @synthesize marqueeingEnabled=_marqueeingEnabled;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)arg1;
- (struct CGRect)frameLabel;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (void)stopMarqueeing;
- (void)startMarqueeing;
- (void)marqueeBetweenSourceOrigin:(struct CGPoint)arg1 destinationOrigin:(struct CGPoint)arg2 duration:(float)arg3;
- (float)fullMarqueeDuration;
- (void)setAttributedText:(id)arg1 marqueeingSpeed:(double)arg2 restingDuration:(double)arg3;
@property(readonly, nonatomic) NSAttributedString *attributedText;
- (id)initWithFrame:(struct CGRect)arg1;

@end

