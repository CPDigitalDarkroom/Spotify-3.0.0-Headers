//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTAccelerometerFilter : NSObject
{
    float x;
    float y;
    float z;
    float amplification;
}

@property(nonatomic) float amplification; // @synthesize amplification;
@property(readonly, nonatomic) float z; // @synthesize z;
@property(readonly, nonatomic) float y; // @synthesize y;
@property(readonly, nonatomic) float x; // @synthesize x;
- (void)compute:(CDStruct_31142d93)arg1;

@end

