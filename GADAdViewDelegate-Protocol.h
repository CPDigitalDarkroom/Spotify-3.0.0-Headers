//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADAdView, NSError, NSURLRequest;

@protocol GADAdViewDelegate <NSObject>

@optional
- (void)adView:(GADAdView *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)adViewDidFinishLoad:(GADAdView *)arg1;
- (void)adViewDidStartLoad:(GADAdView *)arg1;
- (BOOL)adView:(GADAdView *)arg1 shouldStartLoadWithRequest:(NSURLRequest *)arg2 navigationType:(int)arg3;
@end

