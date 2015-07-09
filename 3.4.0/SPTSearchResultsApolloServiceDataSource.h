//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTApolloDataLoaderDelegate.h"
#import "SPTSearchResultsDataSource.h"

@class NSString, SPTSearchRequestParameters, SPTSearchResultsBuilder;

@interface SPTSearchResultsApolloServiceDataSource : NSObject <SPTApolloDataLoaderDelegate, SPTSearchResultsDataSource>
{
    id <SPTSearchResultsDataSourceDelegate> _delegate;
    id <SPTApolloDataLoader> _dataLoader;
    unsigned long long _serviceVersion;
    SPTSearchRequestParameters *_currentRequestParameters;
    SPTSearchResultsBuilder *_currentResultsBuilder;
    id <SPTApolloDataLoaderRequestToken> _currentRequestToken;
}

@property(retain, nonatomic) id <SPTApolloDataLoaderRequestToken> currentRequestToken; // @synthesize currentRequestToken=_currentRequestToken;
@property(retain, nonatomic) SPTSearchResultsBuilder *currentResultsBuilder; // @synthesize currentResultsBuilder=_currentResultsBuilder;
@property(retain, nonatomic) SPTSearchRequestParameters *currentRequestParameters; // @synthesize currentRequestParameters=_currentRequestParameters;
@property(readonly, nonatomic) unsigned long long serviceVersion; // @synthesize serviceVersion=_serviceVersion;
@property(readonly, nonatomic) id <SPTApolloDataLoader> dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) __weak id <SPTSearchResultsDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)apolloDataLoader:(id)arg1 didEncounterError:(id)arg2 forRequestWithToken:(id)arg3;
- (void)apolloDataLoader:(id)arg1 didLoadData:(id)arg2 forRequestWithToken:(id)arg3;
- (void)currentRequestDidFinishLoading;
- (_Bool)hasNextDatasetForRequestParameters:(id)arg1;
- (_Bool)addResultsForRequestParameters:(id)arg1 toBuilder:(id)arg2;
@property(readonly, copy, nonatomic) NSString *dataSourceIdentifier;
- (id)initWithApolloDataLoader:(id)arg1 serviceVersion:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
