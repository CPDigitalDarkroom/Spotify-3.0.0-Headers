//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface SPTPodcastCircularPlaystateView : UIView
{
    double _completionRatio;
}

@property(nonatomic) double completionRatio; // @synthesize completionRatio=_completionRatio;
- (void)drawRect:(struct CGRect)arg1;
- (double)quantizedCompletionRatio;
- (id)circleColor;
- (id)fillColor;
- (struct CGSize)preferedSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end
