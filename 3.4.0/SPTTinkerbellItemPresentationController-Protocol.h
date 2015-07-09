//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTTinkerbellItem, UIView;

@protocol SPTTinkerbellItemPresentationController <NSObject>
@property(readonly, nonatomic, getter=isVisible) _Bool visible;
@property(readonly, nonatomic) UIView *anchorView;
@property(readonly, nonatomic) SPTTinkerbellItem *item;
- (_Bool)isPresentingForcedTinkerbell;
- (_Bool)isPresentingTinkerbellView:(UIView *)arg1;
- (void)hidePermanently:(_Bool)arg1;
- (void)actionWasPerformed;
@end
