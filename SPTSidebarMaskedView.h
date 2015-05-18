//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAGradientLayer;

@interface SPTSidebarMaskedView : UIView
{
    float _topMaskGradientHeight;
    float _bottomMaskGradientHeight;
}

@property(nonatomic) float bottomMaskGradientHeight; // @synthesize bottomMaskGradientHeight=_bottomMaskGradientHeight;
@property(nonatomic) float topMaskGradientHeight; // @synthesize topMaskGradientHeight=_topMaskGradientHeight;
- (void)updateMaskLayer;
- (void)layoutSubviews;
@property(readonly, nonatomic) CAGradientLayer *maskLayer;
- (id)initWithFrame:(struct CGRect)arg1;

@end

