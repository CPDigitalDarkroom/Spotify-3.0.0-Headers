//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface SPTTouchViewContextImageView : UIView
{
    UIImageView *_imageView;
    UIView *_overlayView;
}

@property(readonly, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
@property(nonatomic) double opacity;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

