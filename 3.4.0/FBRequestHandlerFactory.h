//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBRequestHandlerFactory : NSObject
{
}

+ (CDUnknownBlockType)handlerThatReconnects:(CDUnknownBlockType)arg1 forRequest:(id)arg2;
+ (CDUnknownBlockType)handlerThatAlertsUser:(CDUnknownBlockType)arg1 forRequest:(id)arg2;
+ (CDUnknownBlockType)handlerThatRetries:(CDUnknownBlockType)arg1 forRequest:(id)arg2;

@end

