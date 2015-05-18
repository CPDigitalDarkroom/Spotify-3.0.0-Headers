//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImage;

@interface BITImageAnnotation : UIView
{
    BOOL _selected;
    UIImage *_sourceImage;
    struct CGSize _movedDelta;
    struct CGRect _imageFrame;
}

@property(nonatomic) struct CGRect imageFrame; // @synthesize imageFrame=_imageFrame;
@property(nonatomic) __weak UIImage *sourceImage; // @synthesize sourceImage=_sourceImage;
@property(nonatomic) struct CGSize movedDelta; // @synthesize movedDelta=_movedDelta;
- (void).cxx_destruct;
- (BOOL)isSelected;
- (void)setSelected:(BOOL)arg1;
- (BOOL)resizable;

@end

