//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "SPTThemableView.h"

@class NSString, UIImageView, UILabel;

@interface SPTProfileInvitesCountControl : UIControl <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> layoutDelegate;
    UIImageView *_backgroundImageView;
    UILabel *_textLabel;
    UILabel *_subtextLabel;
}

@property(retain, nonatomic) UILabel *subtextLabel; // @synthesize subtextLabel=_subtextLabel;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (void)updateTextLabelWithInvitesCount:(long long)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
