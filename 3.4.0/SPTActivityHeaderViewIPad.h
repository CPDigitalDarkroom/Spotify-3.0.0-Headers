//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, UIButton, UILabel;

@interface SPTActivityHeaderViewIPad : UIView
{
    id <SPTActivityHeaderViewIPadDelegate> _delegate;
    UILabel *_titleLabel;
    UIButton *_findFriendsButton;
    CALayer *_borderLayer;
}

@property(retain, nonatomic) CALayer *borderLayer; // @synthesize borderLayer=_borderLayer;
@property(retain, nonatomic) UIButton *findFriendsButton; // @synthesize findFriendsButton=_findFriendsButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <SPTActivityHeaderViewIPadDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)findFriendsButtonTapped;
- (void)layoutSubviews;
- (void)applyTheme;
- (id)initWithFrame:(struct CGRect)arg1 followFeature:(id)arg2;

@end
