//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString;

@interface SPTUpsell : NSObject <NSCopying>
{
    NSString *_promotedOffer;
    long long _reason;
    long long _type;
    long long _style;
    NSString *_backgroundImageName;
    NSArray *_content;
    NSArray *_buttons;
}

@property(readonly, copy, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(readonly, copy, nonatomic) NSArray *content; // @synthesize content=_content;
@property(readonly, copy, nonatomic) NSString *backgroundImageName; // @synthesize backgroundImageName=_backgroundImageName;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) long long reason; // @synthesize reason=_reason;
@property(readonly, copy, nonatomic) NSString *promotedOffer; // @synthesize promotedOffer=_promotedOffer;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPromotedOffer:(id)arg1 backgroundImageName:(id)arg2 content:(id)arg3 buttons:(id)arg4 reason:(long long)arg5 type:(long long)arg6 style:(long long)arg7;

@end
