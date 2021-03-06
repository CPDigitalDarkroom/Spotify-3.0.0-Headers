//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISegmentedControl.h"

@class CALayer, NSArray;

@interface SPTTabControl : UISegmentedControl
{
    BOOL _labelsReplaced;
    CALayer *_bottomBorder;
    CALayer *_highlightLayer;
    NSArray *_labelTitles;
}

@property(nonatomic) BOOL labelsReplaced; // @synthesize labelsReplaced=_labelsReplaced;
@property(retain, nonatomic) NSArray *labelTitles; // @synthesize labelTitles=_labelTitles;
@property(retain, nonatomic) CALayer *highlightLayer; // @synthesize highlightLayer=_highlightLayer;
@property(retain, nonatomic) CALayer *bottomBorder; // @synthesize bottomBorder=_bottomBorder;
- (void).cxx_destruct;
- (void)repositionHighlight;
- (void)setSelectedSegmentIndex:(int)arg1;
- (void)layoutSubviews;
- (void)highlightSelectedLabel;
- (float)widthForSegmentAtIndex:(unsigned int)arg1;
- (id)initWithItems:(id)arg1;
- (id)init;

@end

