//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTNowPlayingPlayButton.h"

#import "SPTNowPlayingBarPlayButton.h"

@class NSString, UIColor;

@interface SPTNowPlayingBarPlayButton : SPTNowPlayingPlayButton <SPTNowPlayingBarPlayButton>
{
    UIColor *_circleColor;
    float _circleLineWidth;
    struct CGSize _circleSize;
    struct UIEdgeInsets _touchInsets;
}

@property(nonatomic) float circleLineWidth; // @synthesize circleLineWidth=_circleLineWidth;
@property(retain, nonatomic) UIColor *circleColor; // @synthesize circleColor=_circleColor;
@property(nonatomic) struct CGSize circleSize; // @synthesize circleSize=_circleSize;
@property(nonatomic) struct UIEdgeInsets touchInsets; // @synthesize touchInsets=_touchInsets;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(nonatomic) unsigned int icon;
@property(copy, nonatomic) UIColor *iconColor;
@property(nonatomic) struct CGSize iconSize;
@property(nonatomic, getter=isPlaying) BOOL playing;
@property(readonly) Class superclass;

@end

