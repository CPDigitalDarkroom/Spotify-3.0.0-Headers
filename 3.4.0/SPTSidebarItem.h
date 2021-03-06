//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SPTSidebarItem : NSObject <NSCopying>
{
    unsigned long long _icon;
    NSString *_title;
    NSString *_identifier;
    unsigned long long _badgeCount;
}

@property(nonatomic) unsigned long long badgeCount; // @synthesize badgeCount=_badgeCount;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) unsigned long long icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIcon:(unsigned long long)arg1 title:(id)arg2 identifier:(id)arg3;

@end

