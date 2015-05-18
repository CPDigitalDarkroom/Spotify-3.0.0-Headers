//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTSettingsTableViewCell.h"

@class SPKVObservation, SPSliderWithLabel, UILabel;

@interface SettingsSliderTableViewCell : SPTSettingsTableViewCell
{
    SPSliderWithLabel *_slider;
    UILabel *_leftLabel;
    UILabel *_rightLabel;
    SPKVObservation *_leftObservation;
    SPKVObservation *_rightObservation;
}

@property(retain, nonatomic) SPKVObservation *rightObservation; // @synthesize rightObservation=_rightObservation;
@property(retain, nonatomic) SPKVObservation *leftObservation; // @synthesize leftObservation=_leftObservation;
@property(readonly, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(readonly, nonatomic) UILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(readonly, nonatomic) SPSliderWithLabel *slider; // @synthesize slider=_slider;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)applyThemeLayout;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
