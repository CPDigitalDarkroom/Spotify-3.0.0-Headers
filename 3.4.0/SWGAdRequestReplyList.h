//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SWGObject.h"

@class NSArray, NSNumber, NSString;

@interface SWGAdRequestReplyList : SWGObject
{
    NSArray *_adRequestReplies;
    NSString *_errorMessage;
    NSString *_errorCode;
    NSNumber *_success;
}

@property(retain, nonatomic) NSNumber *success; // @synthesize success=_success;
@property(retain, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(retain, nonatomic) NSArray *adRequestReplies; // @synthesize adRequestReplies=_adRequestReplies;
- (void).cxx_destruct;
- (id)asDictionary;
- (id)initWithValues:(id)arg1;
- (id)adRequestReplies:(id)arg1 errorMessage:(id)arg2 errorCode:(id)arg3 success:(id)arg4;

@end
