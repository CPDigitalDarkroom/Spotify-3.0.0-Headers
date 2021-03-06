//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTDataLoaderFactory;

@interface SPTHTTPTestTokenManager : NSObject
{
    id <SPTHTTPTestManager> _testManager;
    SPTDataLoaderFactory *_factory;
}

+ (id)httpTestTokenManagerWithHTTPTestManager:(id)arg1 factory:(id)arg2;
@property(retain, nonatomic) SPTDataLoaderFactory *factory; // @synthesize factory=_factory;
@property(retain, nonatomic) id <SPTHTTPTestManager> testManager; // @synthesize testManager=_testManager;
- (void).cxx_destruct;
- (void)dealloc;
- (void)applicationDidBecomeActive:(id)arg1;
- (id)initWithHTTPTestManager:(id)arg1 factory:(id)arg2;

@end

