//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSString;

@interface SignupTermsInfoViewController : UIViewController
{
    NSString *_currentMarket;
}

@property(retain, nonatomic) NSString *currentMarket; // @synthesize currentMarket=_currentMarket;
- (void).cxx_destruct;
- (id)selfViewAsAttributedLabel;
- (void)applyAdditionalInfo;
- (_Bool)reloadViewForCountryIfNeeded:(id)arg1;
- (void)dismissWebView;
- (void)showWebViewWithURL:(id)arg1;
- (void)showPrivacyPolicy;
- (void)showTermsAndConditions;
- (id)viewEventURI;
- (void)loadView;

@end
