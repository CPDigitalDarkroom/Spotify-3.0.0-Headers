//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIColor;

@interface SPTNowPlayingButton : UIButton
{
    unsigned int _buttonState;
    unsigned int _icon;
    UIColor *_iconColor;
    struct CGSize _iconSize;
}

+ (id)repeatButton;
+ (id)playButton;
+ (id)playBarButton;
+ (id)shuffleButton;
+ (id)collectionButton;
+ (id)titleQueueButton;
+ (id)titleSleepTimerButton;
+ (id)titleCloseButton;
+ (id)coverArtButton;
+ (id)skipBackButton;
+ (id)skipForwardButton;
+ (id)thumbDownButton;
+ (id)thumbUpButton;
+ (id)nextTrackButton;
+ (id)previousTrackButton;
+ (id)button;
@property(copy, nonatomic) UIColor *iconColor; // @synthesize iconColor=_iconColor;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) unsigned int icon; // @synthesize icon=_icon;
@property(nonatomic) unsigned int buttonState; // @synthesize buttonState=_buttonState;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)applyIcon;
- (unsigned int)state;

@end
