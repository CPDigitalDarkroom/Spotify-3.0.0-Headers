//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, SPTStartPageDataSource, SPTStartPageRootModel;

@protocol SPTStartPageDataSourceDelegate <NSObject>

@optional
- (void)dataSource:(SPTStartPageDataSource *)arg1 didFailLoadingRootModelWithError:(NSError *)arg2;
- (void)dataSource:(SPTStartPageDataSource *)arg1 didLoadRootModel:(SPTStartPageRootModel *)arg2;
@end
