//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SPTUpsellIcon : NSObject <NSCopying>
{
    long long _type;
    NSString *_URI;
}

@property(readonly, copy, nonatomic) NSString *URI; // @synthesize URI=_URI;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)isEqualToIcon:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURI:(id)arg1 type:(long long)arg2;

@end

