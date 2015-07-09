//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSDictionary, NSString;

@interface SPTStartPageMoment : NSObject <NSCopying>
{
    NSString *_identifier;
    NSString *_name;
    NSString *_tagline;
    NSString *_icon;
    NSString *_backgroundName;
    NSArray *_contexts;
    NSString *_requestId;
}

@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) NSArray *contexts; // @synthesize contexts=_contexts;
@property(retain, nonatomic) NSString *backgroundName; // @synthesize backgroundName=_backgroundName;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *tagline; // @synthesize tagline=_tagline;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToMomentModel:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentationsOfContexts:(id)arg1;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end

