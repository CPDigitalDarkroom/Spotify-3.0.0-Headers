//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface BITPLCrashReportMachExceptionInfo : NSObject
{
    unsigned long long _type;
    NSArray *_codes;
}

@property(readonly, nonatomic) NSArray *codes; // @synthesize codes=_codes;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1 codes:(id)arg2;

@end

