//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface SPTBadgeView : UIView
{
    UIImageView *_iconView;
}

+ (id)badgeViewWithRadius:(double)arg1 icon:(unsigned long long)arg2 iconOffset:(struct CGSize)arg3 iconColor:(id)arg4 backgroundColor:(id)arg5;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)arg1;
- (void)setOriginRelativeToView:(id)arg1;

@end

