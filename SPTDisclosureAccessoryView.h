//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SPTCellAccessoryView.h"
#import "SPTThemableView.h"

@class NSString, UIImageView;

@interface SPTDisclosureAccessoryView : UIView <SPTCellAccessoryView, SPTThemableView>
{
    BOOL _disabled;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    UIImageView *_chevronView;
}

+ (id)disclosureAccessoryView;
@property(retain, nonatomic) UIImageView *chevronView; // @synthesize chevronView=_chevronView;
@property(nonatomic, getter=isDisabled) BOOL disabled; // @synthesize disabled=_disabled;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (struct CGSize)SPTCellAccessoryViewPositionAdjustment;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

