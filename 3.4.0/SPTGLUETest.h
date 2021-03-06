//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface SPTGLUETest : NSObject
{
    NSString *_name;
    NSString *_summary;
    long long _groundState;
    long long _overrideState;
    NSDictionary *_stateSummary;
    NSDictionary *_stateMapping;
}

@property(copy, nonatomic) NSDictionary *stateMapping; // @synthesize stateMapping=_stateMapping;
@property(copy, nonatomic) NSDictionary *stateSummary; // @synthesize stateSummary=_stateSummary;
@property(nonatomic) long long overrideState; // @synthesize overrideState=_overrideState;
@property(nonatomic) long long groundState; // @synthesize groundState=_groundState;
@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)configureTheme;
- (void)resetTheme;
- (void)resetState;
- (id)flagForState:(long long)arg1;
- (id)keyForState:(long long)arg1;
- (long long)stateForKey:(id)arg1;
@property(readonly, nonatomic) long long state;
- (id)init;

@end

