//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, SPTTinkerbellStory;

@interface SPTTinkerbellItem : NSObject <NSCopying>
{
    NSString *_identifier;
    long long _format;
    double _timeout;
    NSString *_localizedTitle;
    NSString *_localizedMessage;
    NSString *_localizedActionTitle;
    SPTTinkerbellStory *_story;
}

+ (id)itemWithIdentifier:(id)arg1 format:(long long)arg2 timeout:(double)arg3 localizedTitle:(id)arg4 localizedMessage:(id)arg5 localizedActionTitle:(id)arg6;
@property(nonatomic) __weak SPTTinkerbellStory *story; // @synthesize story=_story;
@property(readonly, copy, nonatomic) NSString *localizedActionTitle; // @synthesize localizedActionTitle=_localizedActionTitle;
@property(readonly, copy, nonatomic) NSString *localizedMessage; // @synthesize localizedMessage=_localizedMessage;
@property(readonly, copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(readonly, nonatomic) long long format; // @synthesize format=_format;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *fullyQualifiedIdentifier;
- (id)initWithIdentifier:(id)arg1 format:(long long)arg2 timeout:(double)arg3 localizedTitle:(id)arg4 localizedMessage:(id)arg5 localizedActionTitle:(id)arg6;

@end

