//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SPTCollectionFiltering <NSObject>
@property(readonly, nonatomic, getter=isContentFiltered) BOOL contentFiltered;
@property(copy, nonatomic) NSString *textFilter;
- (void)resetFilters;

@optional
@property(nonatomic) BOOL showsOnlyOfflinedContent;
@end

