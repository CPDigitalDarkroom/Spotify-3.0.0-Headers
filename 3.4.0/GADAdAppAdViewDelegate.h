//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADAdViewDelegate.h"

@class GADAdAppViewController;

@interface GADAdAppAdViewDelegate : GADAdViewDelegate
{
    GADAdAppViewController *_webAppViewController;
}

@property(nonatomic) __weak GADAdAppViewController *webAppViewController; // @synthesize webAppViewController=_webAppViewController;
- (void).cxx_destruct;
- (void)adView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)adViewDidFinishLoad:(id)arg1;
- (void)adViewDidStartLoad:(id)arg1;
- (id)initWithAdAppViewController:(id)arg1;

@end
