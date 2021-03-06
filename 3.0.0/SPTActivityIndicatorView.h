//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, UIColor;

@interface SPTActivityIndicatorView : UIView
{
    BOOL _animating;
    UIColor *_color;
    NSArray *_dotViews;
}

@property(retain, nonatomic) NSArray *dotViews; // @synthesize dotViews=_dotViews;
@property(nonatomic, getter=isAnimating) BOOL animating; // @synthesize animating=_animating;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)stopAnimating;
- (void)startAnimating;
- (id)initWithActivityIndicatorStyle:(unsigned int)arg1;

@end

