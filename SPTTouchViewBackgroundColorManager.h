//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor;

@interface SPTTouchViewBackgroundColorManager : NSObject
{
    UIColor *_backgroundColor;
}

@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (void)resetCell:(id)arg1 animated:(BOOL)arg2;
- (void)updateCell:(id)arg1 backgroundProgress:(float)arg2 contentProgress:(float)arg3 animated:(BOOL)arg4;
- (void)internalUpdateCell:(id)arg1 backgroundProgress:(float)arg2 contentProgress:(float)arg3 animated:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithBackgroundColor:(id)arg1;

@end

