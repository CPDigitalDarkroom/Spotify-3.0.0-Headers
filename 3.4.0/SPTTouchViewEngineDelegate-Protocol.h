//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UITouch, UIView;

@protocol SPTTouchViewEngineDelegate <NSObject>

@optional
- (_Bool)viewEngine:(id <SPTTouchViewEngine>)arg1 shouldRecognizeTouch:(UITouch *)arg2;
- (void)viewEngine:(id <SPTTouchViewEngine>)arg1 prepareView:(UIView *)arg2 completion:(void (^)(_Bool))arg3;
@end

