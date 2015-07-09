//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface SPTActivityEntityFeedbackView : UIView
{
    UILabel *_replaysLabel;
    UIView *_separatorView;
    long long _numReplays;
    UIView *_highlightedBackgroundView;
}

+ (id)replaysStringForNumberOfReplays:(long long)arg1;
@property(retain, nonatomic) UIView *highlightedBackgroundView; // @synthesize highlightedBackgroundView=_highlightedBackgroundView;
@property(nonatomic) long long numReplays; // @synthesize numReplays=_numReplays;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UILabel *replaysLabel; // @synthesize replaysLabel=_replaysLabel;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)resetActiveState;
- (void)applyTheme;
- (void)layoutSubviews;
- (void)reset;
- (void)setNumberOfReplays:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
