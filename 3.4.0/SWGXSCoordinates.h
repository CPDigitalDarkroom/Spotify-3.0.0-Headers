//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SWGObject.h"

@class NSNumber;

@interface SWGXSCoordinates : SWGObject
{
    NSNumber *_latitude;
    NSNumber *_longitude;
}

@property(retain, nonatomic) NSNumber *longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSNumber *latitude; // @synthesize latitude=_latitude;
- (void).cxx_destruct;
- (id)asDictionary;
- (id)initWithValues:(id)arg1;
- (id)latitude:(id)arg1 longitude:(id)arg2;

@end
