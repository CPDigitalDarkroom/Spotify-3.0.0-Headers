//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSError, SPTDiscoverViewModel;

@protocol SPTDiscoverViewModelDelegate
- (void)viewModel:(SPTDiscoverViewModel *)arg1 offlineModeChanged:(_Bool)arg2;
- (void)viewModel:(SPTDiscoverViewModel *)arg1 didFailLoad:(NSError *)arg2;
- (void)viewModelDidLoadData:(SPTDiscoverViewModel *)arg1;
@end

