//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface SPFeatureList : NSObject
{
    NSArray *_configuration;
    NSArray *_builtinFeatures;
}

+ (id)builtinFeatures;
@property(readonly, nonatomic) NSArray *builtinFeatures; // @synthesize builtinFeatures=_builtinFeatures;
- (void).cxx_destruct;
- (id)enabledFeatures;
- (id)initWithConfiguration:(id)arg1;
- (id)featuresFromConfiguration;

@end

