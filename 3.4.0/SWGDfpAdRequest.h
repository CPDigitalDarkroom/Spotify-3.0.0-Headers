//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SWGObject.h"

@class NSArray, NSNumber, NSString;

@interface SWGDfpAdRequest : SWGObject
{
    NSArray *_parameters;
    NSNumber *_networkId;
    NSString *_adUnit;
}

@property(retain, nonatomic) NSString *adUnit; // @synthesize adUnit=_adUnit;
@property(retain, nonatomic) NSNumber *networkId; // @synthesize networkId=_networkId;
@property(retain, nonatomic) NSArray *parameters; // @synthesize parameters=_parameters;
- (void).cxx_destruct;
- (id)asDictionary;
- (id)initWithValues:(id)arg1;
- (id)parameters:(id)arg1 networkId:(id)arg2 adUnit:(id)arg3;

@end

