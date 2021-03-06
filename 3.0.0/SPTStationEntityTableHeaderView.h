//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTEntityTableHeaderView.h"

@class UIImageView, UIView;

@interface SPTStationEntityTableHeaderView : SPTEntityTableHeaderView
{
    UIImageView *_radioBackgroundImageView;
    UIView *_whiteTransparentBackgroundView;
    UIView *_blackGradientBackgroundView;
}

@property(retain, nonatomic) UIView *blackGradientBackgroundView; // @synthesize blackGradientBackgroundView=_blackGradientBackgroundView;
@property(retain, nonatomic) UIView *whiteTransparentBackgroundView; // @synthesize whiteTransparentBackgroundView=_whiteTransparentBackgroundView;
@property(retain, nonatomic) UIImageView *radioBackgroundImageView; // @synthesize radioBackgroundImageView=_radioBackgroundImageView;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (struct CGRect)frameForImageWrapperView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

