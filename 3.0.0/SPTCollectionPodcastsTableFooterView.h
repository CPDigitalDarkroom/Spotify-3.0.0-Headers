//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SPTThemableView.h"

@class NSString, UILabel;

@interface SPTCollectionPodcastsTableFooterView : UIView <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    UILabel *_textLabel;
}

@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (float)setOriginForSubview:(id)arg1 forOriginY:(float)arg2;
- (void)resetWidthForLabel:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithWidth:(float)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

