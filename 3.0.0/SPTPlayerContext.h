//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSDictionary, NSURL, SPTPlayerRestrictions;

@interface SPTPlayerContext : NSObject <NSCopying>
{
    NSURL *_entityURI;
    NSArray *_pages;
    NSArray *_fallbackPages;
    SPTPlayerRestrictions *_restrictions;
    NSDictionary *_metadata;
}

+ (id)contextWithDictionary:(id)arg1;
+ (id)contextWithPageURL:(id)arg1;
+ (id)contextWithTracks:(id)arg1;
+ (id)contextForURIDeprecated:(id)arg1;
@property(copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) SPTPlayerRestrictions *restrictions; // @synthesize restrictions=_restrictions;
@property(copy, nonatomic) NSArray *fallbackPages; // @synthesize fallbackPages=_fallbackPages;
@property(copy, nonatomic) NSArray *pages; // @synthesize pages=_pages;
@property(copy, nonatomic) NSURL *entityURI; // @synthesize entityURI=_entityURI;
- (void).cxx_destruct;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)serializedDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;

@end

