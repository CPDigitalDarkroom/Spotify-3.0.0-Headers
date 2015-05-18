//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError, NSString;

@protocol SPTViewModelDelegate <NSObject>
- (void)viewModel:(id <SPTViewModel>)arg1 didFailAllRequestsWithError:(NSError *)arg2;
- (void)viewModelDidFinishAllRequests:(id <SPTViewModel>)arg1;

@optional
- (void)viewModel:(id <SPTViewModel>)arg1 setLoading:(BOOL)arg2;
- (void)viewModel:(id <SPTViewModel>)arg1 didFailLoad:(NSError *)arg2 forRequestKey:(NSString *)arg3;
- (void)viewModel:(id <SPTViewModel>)arg1 didLoadData:(NSDictionary *)arg2 forRequestKey:(NSString *)arg3;
@end

