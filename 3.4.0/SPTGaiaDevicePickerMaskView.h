//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAGradientLayer, CALayer;

@interface SPTGaiaDevicePickerMaskView : UIView
{
    CALayer *_contentMaskLayer;
    CAGradientLayer *_bottomMaskLayer;
}

@property(retain, nonatomic) CAGradientLayer *bottomMaskLayer; // @synthesize bottomMaskLayer=_bottomMaskLayer;
@property(retain, nonatomic) CALayer *contentMaskLayer; // @synthesize contentMaskLayer=_contentMaskLayer;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

