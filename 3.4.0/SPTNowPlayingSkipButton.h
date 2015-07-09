//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTNowPlayingButton.h"

@class UIColor;

@interface SPTNowPlayingSkipButton : SPTNowPlayingButton
{
    _Bool _forward;
    unsigned long long _icon;
    UIColor *_iconColor;
    struct CGSize _iconSize;
}

+ (id)skipForwardButton;
+ (id)skipBackButton;
+ (id)button;
@property(readonly, nonatomic, getter=isForward) _Bool forward; // @synthesize forward=_forward;
- (void)setIconColor:(id)arg1;
- (id)iconColor;
- (void)setIconSize:(struct CGSize)arg1;
- (struct CGSize)iconSize;
- (void)setIcon:(unsigned long long)arg1;
- (unsigned long long)icon;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect)arg1 forward:(_Bool)arg2;

@end
