//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseProfileEntity.h"

@class NSArray;

@interface ProfileViewAllEntity : BaseProfileEntity
{
    NSArray *_modelObjects;
    int _dataType;
}

@property(readonly, nonatomic) int dataType; // @synthesize dataType=_dataType;
@property(retain, nonatomic) NSArray *modelObjects; // @synthesize modelObjects=_modelObjects;
- (void).cxx_destruct;
- (id)initWithModelObjects:(id)arg1 dataType:(int)arg2;
- (id)initWithJSONDictionary:(id)arg1;

@end
