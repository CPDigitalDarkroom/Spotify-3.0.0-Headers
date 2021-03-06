//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface CSMeasurement : NSObject
{
    NSMutableDictionary *_labelsMap;
    double _created;
    NSString *_pixelURL;
}

+ (id)sortLabelsForTransmission:(id)arg1;
- (void)dealloc;
- (void)addLabels:(id)arg1;
- (void)addLabels:(id)arg1 aggregate:(BOOL)arg2;
@property(retain, nonatomic) NSString *pixelURL; // @synthesize pixelURL=_pixelURL;
- (id)package;
- (BOOL)hasLabel:(id)arg1;
- (id)getLabels;
- (id)getLabelValue:(id)arg1;
- (id)getLabel:(id)arg1;
- (void)setLabel:(id)arg1 value:(id)arg2;
- (void)setLabel:(id)arg1 value:(id)arg2 aggregate:(BOOL)arg3;
- (void)setLabel:(id)arg1;
- (void)removeLabel:(id)arg1 aggregate:(BOOL)arg2 nedstatPrivilege:(BOOL)arg3;
- (void)appendLabel:(id)arg1 value:(id)arg2 aggregate:(BOOL)arg3 nedstatPrivilege:(BOOL)arg4;
- (void)appendLabel:(id)arg1;
- (id)retrieveLabelsAsString:(id)arg1;
- (id)initWithCore:(id)arg1;

@end

