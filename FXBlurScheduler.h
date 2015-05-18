//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface FXBlurScheduler : NSObject
{
    BOOL _blurEnabled;
    BOOL _updating;
    NSMutableArray *_views;
    unsigned int _viewIndex;
    unsigned int _updatesEnabled;
}

+ (id)sharedInstance;
@property(nonatomic) BOOL updating; // @synthesize updating=_updating;
@property(nonatomic) BOOL blurEnabled; // @synthesize blurEnabled=_blurEnabled;
@property(nonatomic) unsigned int updatesEnabled; // @synthesize updatesEnabled=_updatesEnabled;
@property(nonatomic) unsigned int viewIndex; // @synthesize viewIndex=_viewIndex;
@property(retain, nonatomic) NSMutableArray *views; // @synthesize views=_views;
- (void).cxx_destruct;
- (void)updateAsynchronously;
- (void)removeView:(id)arg1;
- (void)addView:(id)arg1;
- (void)setUpdatesDisabled;
- (void)setUpdatesEnabled;
- (id)init;

@end

