//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, NSURL;

@interface SPTPlayOrigin : NSObject <NSCopying>
{
    NSString *_featureIdentifier;
    NSString *_featureVersion;
    NSURL *_viewURI;
    NSString *_externalReferrer;
    NSString *_deviceIdentifier;
}

@property(readonly, copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(readonly, copy, nonatomic) NSString *externalReferrer; // @synthesize externalReferrer=_externalReferrer;
@property(readonly, copy, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
@property(readonly, copy, nonatomic) NSString *featureVersion; // @synthesize featureVersion=_featureVersion;
@property(readonly, copy, nonatomic) NSString *featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
- (void).cxx_destruct;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializedDictionary;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFeatureIdentifier:(id)arg1 featureVersion:(id)arg2 viewURI:(id)arg3 externalReferrer:(id)arg4;
@property(readonly, nonatomic) struct PlayOrigin cpp;

@end
