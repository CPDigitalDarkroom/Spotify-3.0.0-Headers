//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SearchViewModelSettings : NSObject
{
    BOOL _radioMode;
    unsigned int _entityVersion;
    NSString *_countryCode;
    NSString *_singleSectionIdentifier;
}

@property(readonly, copy, nonatomic) NSString *singleSectionIdentifier; // @synthesize singleSectionIdentifier=_singleSectionIdentifier;
@property(nonatomic) BOOL radioMode; // @synthesize radioMode=_radioMode;
@property(readonly, copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly, nonatomic) unsigned int entityVersion; // @synthesize entityVersion=_entityVersion;
- (void).cxx_destruct;
- (id)initWithEntityVersion:(unsigned int)arg1 countryCode:(id)arg2 radioMode:(BOOL)arg3 singleSectionIdentifier:(id)arg4;

@end

