//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBSession, NSDictionary, NSMutableDictionary, NSString, NSURL;

@protocol FBWebDialogsDelegate <NSObject>

@optional
- (void)webDialogsWillDismissDialog:(NSString *)arg1 parameters:(NSDictionary *)arg2 session:(FBSession *)arg3 result:(unsigned long long *)arg4 url:(id *)arg5 error:(id *)arg6;
- (_Bool)webDialogsDialog:(NSString *)arg1 parameters:(NSDictionary *)arg2 session:(FBSession *)arg3 shouldAutoHandleURL:(NSURL *)arg4;
- (void)webDialogsWillPresentDialog:(NSString *)arg1 parameters:(NSMutableDictionary *)arg2 session:(FBSession *)arg3;
@end
