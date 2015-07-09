//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface OnePasswordExtension : NSObject
{
}

+ (id)failedToObtainURLStringFromWebViewError;
+ (id)failedToLoadItemProviderDataErrorWithUnderlyingError:(id)arg1;
+ (id)failedToFillFieldsErrorWithLocalizedErrorMessage:(id)arg1 underlyingError:(id)arg2;
+ (id)failedToCollectFieldsErrorWithUnderlyingError:(id)arg1;
+ (id)failedToContactExtensionErrorWithActivityError:(id)arg1;
+ (id)extensionCancelledByUserError;
+ (id)systemAppExtensionAPINotAvailableError;
+ (id)sharedExtension;
- (void)executeFillScript:(id)arg1 inWebView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)findLoginIn1PasswordWithURLString:(id)arg1 collectedPageDetails:(id)arg2 forWebViewController:(id)arg3 sender:(id)arg4 withWebView:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)fillLoginIntoUIWebView:(id)arg1 webViewController:(id)arg2 sender:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)processExtensionItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)activityViewControllerForItem:(id)arg1 viewController:(id)arg2 sender:(id)arg3 typeIdentifier:(id)arg4;
- (void)fillLoginIntoWebView:(id)arg1 forViewController:(id)arg2 sender:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)changePasswordForLoginForURLString:(id)arg1 loginDetails:(id)arg2 passwordGenerationOptions:(id)arg3 forViewController:(id)arg4 sender:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)storeLoginForURLString:(id)arg1 loginDetails:(id)arg2 passwordGenerationOptions:(id)arg3 forViewController:(id)arg4 sender:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)findLoginForURLString:(id)arg1 forViewController:(id)arg2 sender:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)isAppExtensionAvailable;
- (_Bool)isSystemAppExtensionAPIAvailable;

@end

