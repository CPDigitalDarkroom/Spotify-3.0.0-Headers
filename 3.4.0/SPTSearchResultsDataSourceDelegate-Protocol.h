//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSError, SPTSearchRequestParameters, SPTSearchResultsBuilder;

@protocol SPTSearchResultsDataSourceDelegate
- (void)searchResultsDataSource:(id <SPTSearchResultsDataSource>)arg1 didFailLoadingWithError:(NSError *)arg2 parameters:(SPTSearchRequestParameters *)arg3;
- (void)searchResultsDataSource:(id <SPTSearchResultsDataSource>)arg1 didAddResultsToBuilder:(SPTSearchResultsBuilder *)arg2 forParameters:(SPTSearchRequestParameters *)arg3;
@end
