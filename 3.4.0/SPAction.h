//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface SPAction : NSObject
{
    long long _order;
    UIImage *_image;
    NSString *_logEventName;
    NSString *_logContext;
}

@property(readonly, nonatomic) NSString *logContext; // @synthesize logContext=_logContext;
@property(readonly, nonatomic) NSString *logEventName; // @synthesize logEventName=_logEventName;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) long long order; // @synthesize order=_order;
- (void).cxx_destruct;
- (long long)orderCompare:(id)arg1;
- (_Bool)executeBeforeDismiss;
- (id)execute:(id)arg1;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly, nonatomic) long long style;
@property(readonly, nonatomic) NSString *title;
- (id)initWithOrder:(long long)arg1 logContext:(id)arg2;

@end

