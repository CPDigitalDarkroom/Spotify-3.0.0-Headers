//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NSObject (SPTAllocationContext)
+ (id)spt_allocWithAnnotation:(id)arg1;
+ (id)spt_allocInContext:(id)arg1;
+ (id)spt_allocInContext:(id)arg1 withAnnotation:(id)arg2;
@property(readonly, copy, getter=spt_allocationContextAnnotation) NSString *allocationContextAnnotation;
@end

