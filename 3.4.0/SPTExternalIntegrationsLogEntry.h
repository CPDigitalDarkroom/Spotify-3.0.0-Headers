//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface SPTExternalIntegrationsLogEntry : NSObject <NSCoding>
{
    NSString *_eventString;
    NSString *_logString;
    unsigned long long _icon;
}

@property(nonatomic) unsigned long long icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *logString; // @synthesize logString=_logString;
@property(retain, nonatomic) NSString *eventString; // @synthesize eventString=_eventString;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

