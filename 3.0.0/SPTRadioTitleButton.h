//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "SPTThemableView.h"

@class NSString;

@interface SPTRadioTitleButton : UIButton <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    unsigned int _icon;
}

+ (id)radioTitleButtonWithIcon:(unsigned int)arg1;
@property(nonatomic) unsigned int icon; // @synthesize icon=_icon;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)applyThemeLayout;
- (id)initWithIcon:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

