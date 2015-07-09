//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCountedSet, UIImage;

@interface SPTProminentColorExtractor : NSObject
{
    UIImage *_image;
    unsigned long long _samplingInterval;
    double _height;
    NSCountedSet *_colorSet;
}

@property(retain, nonatomic) NSCountedSet *colorSet; // @synthesize colorSet=_colorSet;
@property(nonatomic) double height; // @synthesize height=_height;
@property(readonly, nonatomic) unsigned long long samplingInterval; // @synthesize samplingInterval=_samplingInterval;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)arrayFromColorString:(id)arg1;
- (id)colorFromColorString:(id)arg1;
- (_Bool)isColorString:(id)arg1 equalToColorString:(id)arg2 withinThreashold:(long long)arg3;
- (id)sortedColors:(id)arg1;
- (id)prominentColorsFrom:(id)arg1 count:(long long)arg2 difference:(unsigned long long)arg3 asCGColor:(_Bool)arg4;
- (id)countColorsInImage:(struct CGImage *)arg1 sampleInterval:(unsigned long long)arg2;
- (id)prominentColorsCount:(long long)arg1 difference:(unsigned long long)arg2 asCGColor:(_Bool)arg3;
- (id)getProminentColor;
- (id)initWithImage:(id)arg1 sampleInterval:(unsigned long long)arg2;
- (id)initWithImage:(id)arg1;

@end

