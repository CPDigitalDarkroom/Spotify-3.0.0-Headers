//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface SPTSearchHistory : NSObject
{
    id <SPTLocalSettings> _localSettings;
    NSMutableArray *_searchStrings;
}

+ (id)searchHistoryWithLocalSettings:(id)arg1;
@property(retain, nonatomic) NSMutableArray *searchStrings; // @synthesize searchStrings=_searchStrings;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
- (void).cxx_destruct;
- (void)migrateLegacySearchHistory;
- (void)synchronize;
- (void)clear;
- (void)removeSearchStringAtIndex:(unsigned long long)arg1;
- (void)addSearchStringToHistory:(id)arg1;
- (id)searchStringAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numberOfSavedSearchStrings;

@end

