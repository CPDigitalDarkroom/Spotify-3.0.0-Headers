//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPAction.h"

@class SPTSocialChartTrackData;

@interface SPTSeeListenersAction : SPAction
{
    SPTSocialChartTrackData *_track;
    id <SPTSocialChartFeature> _socialChartFeature;
}

@property(nonatomic) __weak id <SPTSocialChartFeature> socialChartFeature; // @synthesize socialChartFeature=_socialChartFeature;
@property(retain, nonatomic) SPTSocialChartTrackData *track; // @synthesize track=_track;
- (void).cxx_destruct;
- (id)execute:(id)arg1;
- (id)logEventName;
- (id)image;
- (id)title;
- (id)initWithTrack:(id)arg1 socialChartFeature:(id)arg2 logContext:(id)arg3;

@end
