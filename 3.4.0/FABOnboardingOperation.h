//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FABNetworkOperation.h"

@class FABApplicationIdentiferModel, FABNetworkTaskUtility, NSDictionary, NSError, NSString;

@interface FABOnboardingOperation : FABNetworkOperation
{
    _Bool _shouldCreate;
    NSError *_error;
    FABApplicationIdentiferModel *_appIdentifierModel;
    NSString *_appEndpoint;
    id <FABOnboardingOperationDelegate> _delegate;
    FABNetworkTaskUtility *_networkClient;
    NSDictionary *_kitVersions;
}

@property(readonly, copy) NSDictionary *kitVersions; // @synthesize kitVersions=_kitVersions;
@property(readonly, nonatomic) FABNetworkTaskUtility *networkClient; // @synthesize networkClient=_networkClient;
@property(readonly, nonatomic) id <FABOnboardingOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *appEndpoint; // @synthesize appEndpoint=_appEndpoint;
@property(readonly, nonatomic) FABApplicationIdentiferModel *appIdentifierModel; // @synthesize appIdentifierModel=_appIdentifierModel;
@property(nonatomic) _Bool shouldCreate; // @synthesize shouldCreate=_shouldCreate;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (id)onboardingRequestForAppCreate:(_Bool)arg1;
- (id)appUpdateURL;
- (id)appCreateURL;
- (id)errorForCode:(unsigned long long)arg1 userInfo:(id)arg2;
- (id)appInstallSource;
- (id)appDisplayVersion;
- (id)appBuildVersion;
- (id)appName;
- (id)appPlatform;
- (id)appBundleIdentifier;
- (void)beginAppConfigure;
- (void)main;
- (id)initWithDelegate:(id)arg1 shouldCreate:(_Bool)arg2 APIKey:(id)arg3 kitVersions:(id)arg4 appIdentifierModel:(id)arg5 endpointString:(id)arg6;
- (id)initWithAPIKey:(id)arg1;

@end

