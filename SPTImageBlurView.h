//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor, UIImage, UIImageView;

@interface SPTImageBlurView : UIView
{
    BOOL _needsUpdatedBlur;
    UIImage *_image;
    float _maximumBlurRadius;
    float _blurIntensity;
    float _blurRadius;
    id <SPTImageCache> _blurredImageCache;
    UIView *_blurView;
    UIView *_tintView;
    UIImageView *_originalImageView;
    UIImage *_processedImage;
    id _currentCacheKey;
}

+ (id)blurViewForImage:(id)arg1 withFrame:(struct CGRect)arg2;
+ (id)blurViewForImage:(id)arg1 withFrame:(struct CGRect)arg2 blurredImageCache:(id)arg3 cacheKey:(id)arg4;
@property(nonatomic) BOOL needsUpdatedBlur; // @synthesize needsUpdatedBlur=_needsUpdatedBlur;
@property(copy, nonatomic) id currentCacheKey; // @synthesize currentCacheKey=_currentCacheKey;
@property(retain, nonatomic) UIImage *processedImage; // @synthesize processedImage=_processedImage;
@property(retain, nonatomic) UIImageView *originalImageView; // @synthesize originalImageView=_originalImageView;
@property(retain, nonatomic) UIView *tintView; // @synthesize tintView=_tintView;
@property(retain, nonatomic) UIView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) __weak id <SPTImageCache> blurredImageCache; // @synthesize blurredImageCache=_blurredImageCache;
@property(readonly, nonatomic) float blurRadius; // @synthesize blurRadius=_blurRadius;
@property(nonatomic) float blurIntensity; // @synthesize blurIntensity=_blurIntensity;
@property(nonatomic) float maximumBlurRadius; // @synthesize maximumBlurRadius=_maximumBlurRadius;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateImageViewOnMainThreadWithBlurredImage:(id)arg1;
- (void)updateBlurredImageIfNeeded;
- (void)updateBlurIntensity;
- (id)processImage:(id)arg1;
- (void)setImage:(id)arg1 forCacheKey:(id)arg2;
@property(nonatomic) int imageContentMode;
@property(retain, nonatomic) UIColor *tintColor;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithImage:(id)arg1 frame:(struct CGRect)arg2;
- (id)initWithImage:(id)arg1 frame:(struct CGRect)arg2 cacheKey:(id)arg3 blurredImageCache:(id)arg4;

@end

