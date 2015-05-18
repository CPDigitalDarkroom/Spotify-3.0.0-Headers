//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAccountProductActivationObserver.h"

@class DeferredTrialController, NSArray, NSString, SPTAccountABFlags, SPTAccountController, SPTAccountFeatureLogging, SPTAccountUpsellContent;

@interface SPTAccountUpsellViewModel : NSObject <SPTAccountProductActivationObserver>
{
    BOOL _showsPriceInHeader;
    BOOL _showsPriceInContent;
    BOOL _getPremiumActionEnabled;
    BOOL _premiumActivationProgressIndicatorEnabled;
    BOOL _active;
    BOOL _premiumActivationInProgress;
    id <SPTAccountUpsellViewModelDelegate> _delegate;
    SPTAccountUpsellContent *_priceContent;
    NSArray *_upsellInformationTableContent;
    NSString *_getPremiumButtonTitle;
    SPTAccountABFlags *_flags;
    id <InAppPurchaseController> _inappPurchaseController;
    DeferredTrialController *_deferredTrialController;
    SPTAccountFeatureLogging *_accountLogging;
    SPTAccountController *_accountController;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(nonatomic) BOOL premiumActivationInProgress; // @synthesize premiumActivationInProgress=_premiumActivationInProgress;
@property(retain, nonatomic) SPTAccountController *accountController; // @synthesize accountController=_accountController;
@property(retain, nonatomic) SPTAccountFeatureLogging *accountLogging; // @synthesize accountLogging=_accountLogging;
@property(retain, nonatomic) DeferredTrialController *deferredTrialController; // @synthesize deferredTrialController=_deferredTrialController;
@property(retain, nonatomic) id <InAppPurchaseController> inappPurchaseController; // @synthesize inappPurchaseController=_inappPurchaseController;
@property(retain, nonatomic) SPTAccountABFlags *flags; // @synthesize flags=_flags;
@property(nonatomic) BOOL active; // @synthesize active=_active;
@property(nonatomic) BOOL premiumActivationProgressIndicatorEnabled; // @synthesize premiumActivationProgressIndicatorEnabled=_premiumActivationProgressIndicatorEnabled;
@property(nonatomic) BOOL getPremiumActionEnabled; // @synthesize getPremiumActionEnabled=_getPremiumActionEnabled;
@property(copy, nonatomic) NSString *getPremiumButtonTitle; // @synthesize getPremiumButtonTitle=_getPremiumButtonTitle;
@property(copy, nonatomic) NSArray *upsellInformationTableContent; // @synthesize upsellInformationTableContent=_upsellInformationTableContent;
@property(retain, nonatomic) SPTAccountUpsellContent *priceContent; // @synthesize priceContent=_priceContent;
@property(nonatomic) BOOL showsPriceInContent; // @synthesize showsPriceInContent=_showsPriceInContent;
@property(nonatomic) BOOL showsPriceInHeader; // @synthesize showsPriceInHeader=_showsPriceInHeader;
@property(nonatomic) __weak id <SPTAccountUpsellViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)productActivationController:(id)arg1 didFailActivatingProduct:(int)arg2 error:(id)arg3;
- (void)productActivationController:(id)arg1 didFinishActivatingProduct:(int)arg2;
- (void)productActivationController:(id)arg1 didStartActivatingProduct:(int)arg2;
- (void)getPremium;
- (void)updateInformation;
- (void)deactivate;
- (void)activate;
- (void)dealloc;
- (id)initWithABFlags:(id)arg1 iapController:(id)arg2 accountLogging:(id)arg3 accountController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

