//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTSignalEnergy : NSObject
{
    float x;
    float y;
    float z;
    float *window;
    float *xv;
    float *yv;
    float *zv;
    int index;
    float maxenergy;
    int dimension;
    float maxEnergy;
}

@property(readonly, nonatomic) int dimension; // @synthesize dimension;
@property(readonly, nonatomic) float maxEnergy; // @synthesize maxEnergy;
@property(readonly, nonatomic) float z; // @synthesize z;
@property(readonly, nonatomic) float y; // @synthesize y;
@property(readonly, nonatomic) float x; // @synthesize x;
- (void)dealloc;
- (void)compute:(id)arg1;
- (id)init;

@end

