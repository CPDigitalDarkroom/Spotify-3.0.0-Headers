//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAGradientLayer, SPTTheme;

@interface SPTNowPlayingCarouselGradientView : UIView
{
    SPTTheme *_theme;
    CAGradientLayer *_backgroundViewGradient;
}

@property(retain, nonatomic) CAGradientLayer *backgroundViewGradient; // @synthesize backgroundViewGradient=_backgroundViewGradient;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2;

@end
