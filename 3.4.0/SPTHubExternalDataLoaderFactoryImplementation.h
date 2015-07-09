//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTHubExternalDataLoaderFactory.h"

@class NSString;

@interface SPTHubExternalDataLoaderFactoryImplementation : NSObject <SPTHubExternalDataLoaderFactory>
{
    id <SPTHubExternalDataCompatibleContentProviderFactory> _contentProviderFactory;
    NSString *_rootEndpointPath;
}

@property(readonly, copy, nonatomic) NSString *rootEndpointPath; // @synthesize rootEndpointPath=_rootEndpointPath;
@property(readonly, nonatomic) id <SPTHubExternalDataCompatibleContentProviderFactory> contentProviderFactory; // @synthesize contentProviderFactory=_contentProviderFactory;
- (void).cxx_destruct;
- (id)createExternalDataLoader;
- (id)initWithHubRegistration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

