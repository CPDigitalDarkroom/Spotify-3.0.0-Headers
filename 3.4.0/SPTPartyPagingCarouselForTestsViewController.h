//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTPartyPagingCarouselViewPagingDelegate.h"

@class NSString, SPTPartyPagingCarouselView;

@interface SPTPartyPagingCarouselForTestsViewController : UIViewController <SPTPartyPagingCarouselViewPagingDelegate>
{
    SPTPartyPagingCarouselView *_carouselView;
    unsigned long long _currentlyShowingIndex;
}

@property(nonatomic) unsigned long long currentlyShowingIndex; // @synthesize currentlyShowingIndex=_currentlyShowingIndex;
@property(retain, nonatomic) SPTPartyPagingCarouselView *carouselView; // @synthesize carouselView=_carouselView;
- (void).cxx_destruct;
- (void)pagingCarouselView:(id)arg1 didStopAtIndex:(unsigned long long)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

