//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIImageView;

@interface SPTPartySausageButton : UIButton
{
    UIImageView *_iconView;
}

+ (id)button;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)applyThemeLayout;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

