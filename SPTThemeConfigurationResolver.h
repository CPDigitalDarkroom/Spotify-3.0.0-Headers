//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary;

@interface SPTThemeConfigurationResolver : NSObject
{
    NSMutableDictionary *_configuration;
    NSMutableDictionary *_resolved;
    NSMutableDictionary *_flags;
}

- (void).cxx_destruct;
- (int)scoreForFlags:(id)arg1;
- (id)lookUpEntry:(id)arg1;
- (void)registerConfigurationValue:(id)arg1 forKeyWithFlags:(id)arg2 overridingCurrentValues:(BOOL)arg3;
- (id)configurationValueForKey:(id)arg1 suffixInSet:(id)arg2 reportErrors:(BOOL)arg3;
- (id)configurationValueForKey:(id)arg1 suffix:(id)arg2 reportErrors:(BOOL)arg3;
@property(readonly, nonatomic) __weak NSDictionary *flags;
- (void)setFlag:(id)arg1 enabled:(BOOL)arg2 priority:(unsigned int)arg3;
- (void)registerConfigurationDictionary:(id)arg1 overridingCurrentValues:(BOOL)arg2;
- (void)registerConfigurationDictionary:(id)arg1;
- (void)registerConfigurationFromFileNamed:(id)arg1;
- (id)init;

@end

