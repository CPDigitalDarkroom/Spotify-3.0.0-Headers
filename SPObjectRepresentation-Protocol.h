//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@protocol SPObjectRepresentation <NSObject>
- (NSDictionary *)objectRepresentation;

@optional
- (BOOL)restoreWithObjectRepresentation:(NSDictionary *)arg1;
- (id)initWithObjectRepresentation:(NSDictionary *)arg1;
@end

