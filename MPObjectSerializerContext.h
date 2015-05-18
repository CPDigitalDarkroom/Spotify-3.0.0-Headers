//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet;

@interface MPObjectSerializerContext : NSObject
{
    NSMutableSet *_visitedObjects;
    NSMutableSet *_unvisitedObjects;
    NSMutableDictionary *_serializedObjects;
}

- (void).cxx_destruct;
- (id)allSerializedObjects;
- (void)addSerializedObject:(id)arg1;
- (BOOL)isVisitedObject:(id)arg1;
- (void)addVisitedObject:(id)arg1;
- (id)dequeueUnvisitedObject;
- (void)enqueueUnvisitedObject:(id)arg1;
- (BOOL)hasUnvisitedObjects;
- (id)initWithRootObject:(id)arg1;

@end

