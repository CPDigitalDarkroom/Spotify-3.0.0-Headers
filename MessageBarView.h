//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIColor, UIImageView, UILabel;

@interface MessageBarView : UIView
{
    UILabel *_messageLabel;
    UIImageView *_alertBackground;
    UIColor *_textColorDefault;
    UIColor *_textColorAlert;
    int _style;
}

@property(nonatomic) int style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)setMessage:(id)arg1 animationDirection:(int)arg2;
@property(retain, nonatomic) NSString *message;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

