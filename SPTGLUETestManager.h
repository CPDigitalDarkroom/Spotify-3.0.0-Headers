//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableOrderedSet;

@interface SPTGLUETestManager : NSObject
{
    NSMutableOrderedSet *_tests;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableOrderedSet *tests; // @synthesize tests=_tests;
- (void).cxx_destruct;
- (id)testWithIdentifier:(id)arg1;
- (id)allTests;
- (void)addTest:(id)arg1;
- (id)init;
- (id)initWithTests:(id)arg1;
- (id)provideDecisiveSwipeTest;

@end

