//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SPTPopupButton : NSObject
{
    NSString *_title;
    id _target;
    SEL _action;
    CDUnknownBlockType _actionHandler;
}

+ (id)buttonWithTitle:(id)arg1;
+ (id)buttonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
+ (id)buttonWithTitle:(id)arg1 actionHandler:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)initWithTitle:(id)arg1 actionHandler:(CDUnknownBlockType)arg2;
- (id)initWithTitle:(id)arg1;
- (void)configurePopupButton:(id)arg1;
- (id)makeSecondaryButton;
- (id)makePrimaryButton;

@end

