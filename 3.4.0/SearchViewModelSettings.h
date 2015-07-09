//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SearchViewModelSettings : NSObject
{
    _Bool _radioMode;
    unsigned long long _entityVersion;
    NSString *_countryCode;
    NSString *_singleSectionIdentifier;
}

@property(readonly, copy, nonatomic) NSString *singleSectionIdentifier; // @synthesize singleSectionIdentifier=_singleSectionIdentifier;
@property(nonatomic) _Bool radioMode; // @synthesize radioMode=_radioMode;
@property(readonly, copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly, nonatomic) unsigned long long entityVersion; // @synthesize entityVersion=_entityVersion;
- (void).cxx_destruct;
- (id)initWithEntityVersion:(unsigned long long)arg1 countryCode:(id)arg2 radioMode:(_Bool)arg3 singleSectionIdentifier:(id)arg4;

@end

