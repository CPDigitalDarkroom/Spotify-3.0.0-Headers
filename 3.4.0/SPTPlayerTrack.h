//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSString, NSURL;

@interface SPTPlayerTrack : NSObject <NSCopying>
{
    NSURL *_URI;
    NSString *_UID;
    NSDictionary *_metadata;
}

+ (id)trackWithURI:(id)arg1 andUID:(id)arg2;
+ (id)trackWithURI:(id)arg1;
+ (id)trackWithURI:(id)arg1 albumURI:(id)arg2 artistURI:(id)arg3 andUID:(id)arg4;
+ (id)trackWithURI:(id)arg1 albumURI:(id)arg2 artistURI:(id)arg3;
@property(copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSString *UID; // @synthesize UID=_UID;
@property(copy, nonatomic) NSURL *URI; // @synthesize URI=_URI;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializedDictionary;
- (id)initWithDictionary:(id)arg1;

@end

