//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@protocol SPTHubFeature <NSObject>
@property(readonly, nonatomic) id <SPTHubRegistrationToken> musicHubRegistrationToken;
@property(readonly, nonatomic) _Bool removesRadioFromNavigation;
@property(readonly, nonatomic) _Bool enablesGenreFeature;
@property(readonly, nonatomic) _Bool disablesBrowseFeature;
- (id <SPTHubExternalDataLoaderFactory>)provideExternalDataLoaderFactoryForHubWithRegistrationToken:(id <SPTHubRegistrationToken>)arg1;
- (id <SPTHubRegistrationToken>)registerHubWithViewURI:(NSURL *)arg1 title:(NSString *)arg2 icon:(unsigned long long)arg3 contentProviderFactory:(id <SPTHubContentProviderFactory>)arg4 viewHandler:(id <SPTHubViewHandler>)arg5 externalDataRootEndpointPath:(NSString *)arg6;
- (id <SPTHubRegistrationToken>)registerDefaultHubWithIdentifier:(unsigned long long)arg1 title:(NSString *)arg2 icon:(unsigned long long)arg3 localContentProvider:(id <SPTHubLocalContentProvider>)arg4 viewHandler:(id <SPTHubViewHandler>)arg5;
@end
