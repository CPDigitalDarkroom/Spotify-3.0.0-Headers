//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBInsights : NSObject
{
}

+ (void)flush;
+ (void)setFlushBehavior:(int)arg1;
+ (int)flushBehavior;
+ (void)logConversionPixel:(id)arg1 valueOfPixel:(double)arg2 session:(id)arg3;
+ (void)logConversionPixel:(id)arg1 valueOfPixel:(double)arg2;
+ (void)logPurchase:(double)arg1 currency:(id)arg2 parameters:(id)arg3 session:(id)arg4;
+ (void)logPurchase:(double)arg1 currency:(id)arg2 parameters:(id)arg3;
+ (void)logPurchase:(double)arg1 currency:(id)arg2;
+ (void)setAppVersion:(id)arg1;
+ (id)appVersion;

@end

