//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

#import "SPTRunningCircleGradientBackground.h"
#import "SPTThemableView.h"

@class NSString;

@interface SPTRunningCircleGradientBackgroundLayer : CALayer <SPTRunningCircleGradientBackground, SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
}

@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)applyThemeLayout;
- (struct CGRect)idealFrameForFillingBackgroundWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
